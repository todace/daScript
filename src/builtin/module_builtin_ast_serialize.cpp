#include "daScript/misc/platform.h"

#include "daScript/ast/ast_serialize_macro.h"
#include "daScript/ast/ast_serializer.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast.h"

namespace das {

    AstSerializer::AstSerializer ( ForReading, vector<uint8_t> && buffer_ ) : buffer(buffer_) {
        astModule = Module::require("ast");
        writing = false;
    }

    AstSerializer::AstSerializer ( void ) {
        astModule = Module::require("ast");
        writing = true;
    }

    void AstSerializer::patch () {
        for ( auto & p : functionRefs ) {
            auto it = smartFunctionMap.find(p.second);
            if ( it == smartFunctionMap.end() ) {
                DAS_FATAL_ERROR("ast serializer function ref not found");
            } else {
                *p.first = it->second.get();
            }
        }
        // for ( auto & p : blockRefs ) {
        //     auto it = exprMap.find(p.second);
        //     if ( it == exprMap.end() ) {
        //         DAS_FATAL_ERROR("ast serializer function ref not found");
        //     } else {
        //         if (auto block = dynamic_cast<ExprBlock*>(it->second.get())) {
        //             *p.first = block;
        //         } else {
        //             DAS_FATAL_ERROR("Expression should be ExprBlock");
        //         }
        //     }
        // }
        // for ( auto & p : cloneRefs ) {
        //     auto it = exprMap.find(p.second);
        //     if ( it == exprMap.end() ) {
        //         DAS_FATAL_ERROR("ast serializer function ref not found");
        //     } else {
        //         if (auto block = dynamic_cast<ExprClone*>(it->second.get())) {
        //             *p.first = block;
        //         } else {
        //             DAS_FATAL_ERROR("Expression should be ExprClone");
        //         }
        //     }
        // }
        for ( auto & [name, ref] : moduleRefs ) {
            *ref = moduleLibrary->findModule(name);
            DAS_VERIFYF(*ref!=nullptr, "module '%s' is not found", name.c_str());
        }
    }

    void AstSerializer::write ( const void * data, size_t size ) {
        auto oldSize = buffer.size();
        buffer.resize(oldSize + size);
        memcpy(buffer.data()+oldSize, data, size);
    }

    void AstSerializer::read ( void * data, size_t size ) {
        if ( readOffset + size > buffer.size() ) {
            DAS_FATAL_ERROR("ast serializer read overflow");
            return;
        }
        memcpy(data, buffer.data()+readOffset, size);
        readOffset += size;
    }

    void AstSerializer::serialize ( void * data, size_t size ) {
        if ( writing ) {
            write(data,size);
        } else {
            read(data,size);
        }
    }

    void AstSerializer::tag ( const char * name ) {
        uint64_t hash = hash64z(name);
        if ( writing ) {
            *this << hash;
        } else  {
            uint64_t hash2 = 0;
            *this << hash2;
            if ( hash != hash2 ) {
                DAS_FATAL_ERROR("ast serializer tag '%s' mismatch", name);
            }
        }
    }

    ////////////////////////////////////////////////////////////////////////////

    AstSerializer & AstSerializer::operator << ( Type & baseType ) {
        tag("Type");
        serialize_enum(baseType);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( ExpressionPtr & expr ) {
        tag("ExpressionPtr");
        if ( writing ) {
            string rtti = expr->__rtti;
            *this << rtti;
            expr->serialize(*this);
        } else {
            string rtti;
            *this << rtti;
            auto annotation = astModule->findAnnotation(rtti);
            DAS_VERIFYF(annotation!=nullptr, "annotation '%s' is not found", rtti.c_str());
            expr.reset((Expression *) static_pointer_cast<TypeAnnotation>(annotation)->factory());
            expr->serialize(*this);
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( Function * & func ) {
        tag("Function pointer");
        uint64_t fid = uintptr_t(func);
        *this << fid;
        if ( writing ) {
            if ( fid ) {
                bool inThisModule = func->module == thisModule;
                *this << inThisModule;
                if ( !inThisModule ) {
                    *this << func->module->name;
                    string mangeldName = func->getMangledName();
                    *this << mangeldName;
                }
            }
        } else {
            if ( fid ) {
                bool inThisModule;
                *this << inThisModule;
                if ( inThisModule ) {
                    auto it = smartFunctionMap.find(fid);
                    if ( it == smartFunctionMap.end() ) {
                        functionRefs.emplace_back(&func, fid);
                    } else {
                        func = it->second.get();
                    }
                } else {
                    string moduleName, mangledName;
                    *this << moduleName;
                    auto funcModule = moduleLibrary->findModule(moduleName);
                    DAS_VERIFYF(funcModule!=nullptr, "module '%s' is not found", moduleName.c_str());
                    *this << mangledName;
                    func = funcModule->findFunction(mangledName).get();
                    DAS_VERIFYF(func!=nullptr, "function '%s' is not found", mangledName.c_str());
                }
            } else {
                func = nullptr;
            }
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( FunctionPtr & func ) {
        tag("FunctionPtr");
        if ( writing ) {
            DAS_ASSERTF(!func->builtIn, "cannot serialize built-in function");
            DAS_ASSERTF(func->module==thisModule, "function is not from this module");
        }
        serializeSmartPtr(func, smartFunctionMap);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( TypeInfoMacroPtr & ptr ) {
        tag("TypeInfoMacroPtr");
        uint64_t id = uintptr_t(ptr);
        *this << id;
        if ( writing ) {
            if ( id ) {
                bool inThisModule = ptr->module == thisModule;
                *this << inThisModule;
                if ( !inThisModule ) {
                    *this << ptr->module->name;
                    *this << ptr->name;
                } else {
                    DAS_ASSERTF(false, "did not expect to find typeinfo macro from the current module");
                }
            }
        } else {
            if ( id ) {
                bool inThisModule;
                *this << inThisModule;
                if ( inThisModule ) {
                    DAS_ASSERTF(false, "Unreachable");
                } else {
                    string moduleName, name;
                    *this << moduleName;
                    auto funcModule = moduleLibrary->findModule(moduleName);
                    DAS_VERIFYF(funcModule!=nullptr, "module '%s' not found", moduleName.c_str());
                    *this << name;
                    ptr = funcModule->findTypeInfoMacro(name).get();
                    DAS_VERIFYF(ptr!=nullptr, "typeinfo macro '%s' not found", name.c_str());
                }
            } else {
                ptr = nullptr;
            }
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( TypeInfoMacro * & ptr ) {
        tag("TypeInfoMacroPtr");
        uint64_t id = uintptr_t(ptr);
        *this << id;
        if ( writing ) {
            if ( id ) {
                bool inThisModule = ptr->module == thisModule;
                *this << inThisModule;
                if ( !inThisModule ) {
                    *this << ptr->module->name;
                    *this << ptr->name;
                } else {
                    DAS_ASSERTF(false, "did not expect to find typeinfo macro from the current module");
                }
            }
        } else {
            if ( id ) {
                bool inThisModule;
                *this << inThisModule;
                if ( inThisModule ) {
                    DAS_ASSERTF(false, "Unreachable");
                } else {
                    string moduleName, name;
                    *this << moduleName;
                    auto funcModule = moduleLibrary->findModule(moduleName);
                    DAS_VERIFYF(funcModule!=nullptr, "module '%s' not found", moduleName.c_str());
                    *this << name;
                    ptr = funcModule->findTypeInfoMacro(name).get();
                    DAS_VERIFYF(ptr!=nullptr, "typeinfo macro '%s' not found", name.c_str());
                }
            } else {
                ptr = nullptr;
            }
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( TypeDeclPtr & type ) {
        tag("TypeDeclPtr");
        uint64_t id = intptr_t(type.get());
        *this << id;
        if ( writing ) {
            if ( id ) {
                type->serialize(*this);
            }
        } else {
            if ( id ) {
                type = make_smart<TypeDecl>();
                type->serialize(*this);
            } else {
                type = nullptr;
            }
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( AnnotationArgument & arg ) {
        tag("AnnotationArgument");
        arg.serialize(*this);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( AnnotationDeclarationPtr & annotation_decl ) {
        tag("AnnotationDeclarationPtr");
        if ( !writing ) annotation_decl = make_smart<AnnotationDeclaration>();
        annotation_decl->serialize(*this);
        return *this;
    }

    void serializeAnnotationPointer( AstSerializer & ser, Annotation * & anno ) {
        uint64_t fid = uint64_t(anno);
        ser << fid;
        if ( ser.writing ) {
            if ( fid ) {
                bool inThisModule = anno->module == ser.thisModule;
                ser << inThisModule;
                if ( !inThisModule ) {
                    ser << anno->module->name;
                    string mangeldName = anno->getMangledName();
                    ser << mangeldName;
                } else {
                    DAS_VERIFYF(false, "annotation is not found in the current module");
                }
            }
        } else {
            if ( fid ) {
                bool inThisModule;
                ser << inThisModule;
                if ( inThisModule ) {
                    DAS_VERIFYF(false, "Unreachable");
                } else {
                    string moduleName, mangledName;
                    ser << moduleName;
                    auto mod = ser.moduleLibrary->findModule(moduleName);
                    DAS_VERIFYF(mod!=nullptr, "module '%s' is not found", moduleName.c_str());
                    ser << mangledName;
                    anno = mod->findAnnotation(mangledName).get();
                    DAS_VERIFYF(anno!=nullptr, "annotation '%s' is not found", mangledName.c_str());
                }
            } else {
                anno = nullptr;
            }
        }
    }

    AstSerializer & AstSerializer::operator << ( AnnotationPtr & anno ) {
        tag("AnnotationPtr");
        Annotation * a = anno.get();
        serializeAnnotationPointer(*this, a);
        anno = a;
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( Structure::FieldDeclaration & field_declaration ) {
        field_declaration.serialize(*this);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( string & str ) {
        tag("string");
        if ( writing ) {
            uint32_t size = (uint32_t) str.size();
            *this << size;
            write((void *)str.data(), size);
        } else {
            uint32_t size = 0;
            *this << size;
            str.resize(size);
            read(&str[0], size);
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( const char * & value ) {
        tag("const char *");
        bool is_null = value == nullptr;
        *this << is_null;
        if ( writing ) {
            if ( !is_null ) {
                uint64_t len = strlen(value);
                *this << len;
                write(static_cast<const void*>(value), len);
            }
        } else {
            if ( !is_null ) {
                uint64_t len = 0;
                *this << len;
                auto data = new char [len + 1]();
                read(static_cast<void*>(data), len);
                data[len] = '\0';
                value = data;
            } else {
                value = nullptr;
            }
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( LineInfo & at ) {
        tag("LineInfo");
        *this << at.fileInfo << at.column << at.line
              << at.last_column << at.last_line;
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( FileInfo * & info ) {
        FileInfoPtr t;
        if ( writing ) {
            t.reset(info);
            *this << t;
        } else {
            *this << t;
            info = t.release();
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( FileInfoPtr & info ) {
        bool is_null = info == nullptr;
        *this << is_null;
        if ( writing ) {
            if ( !is_null ) {
                info->serialize(*this);
            }
        } else {
            if ( !is_null ) {
                int tag = 0; *this << tag;
                switch ( tag ) {
                    case 0: info.reset(new FileInfo); break;
                    case 1: info.reset(new TextFileInfo); break;
                    default: DAS_VERIFYF(false, "Unreachable");
                }
                info->serialize(*this);
            } else {
                info = nullptr;
            }
        }
        return *this;
    }

    template <typename T>
    AstSerializer & AstSerializer::serializePointer(T * & obj, das_hash_map<void*, T*> & objMap) {
        void* pointer = obj;
        *this << pointer;
        if ( !pointer ) {
            return *this; // Nullptr to end it all
        }
        if ( writing ) {
            if ( objMap.count(pointer) == 0 ) {
                objMap[pointer] = obj;
                obj->serialize(*this);
            }
        } else {
            if ( objMap.count(pointer) != 0 ) {
                obj = objMap[pointer];
            } else {
                objMap[pointer] = obj = new T;
                obj->serialize(*this);
            }
        }
        return *this;
    }

    void FileAccess::serialize ( AstSerializer & ser ) {
        ser.tag("FileAccess");
        if ( ser.writing ) {
            int tag = 0;
            ser << tag;
        }
        ser << files;
    }

    void ModuleFileAccess::serialize ( AstSerializer & ser ) {
        ser.tag("ModuleFileAccess");
        if ( ser.writing ) {
            int tag = 1;
            ser << tag;
        }
        ser << files;
    }

    AstSerializer & AstSerializer::operator << ( FileAccessPtr & ptr ) {
        if ( writing ) {
            ptr->serialize(*this);
        } else {
            int tag; *this << tag;
            switch ( tag ) {
                case 0: ptr = new FileAccess; break;
                case 1: ptr = new ModuleFileAccess; break;
                default: DAS_VERIFYF(false, "Unreachable");
            }
            ptr->serialize(*this);
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( Structure * & struct_ ) {
        return serializePointer(struct_, structureMap);
    }

    AstSerializer & AstSerializer::operator << ( StructurePtr & struct_ ) {
        serializeSmartPtr(struct_, smartStructureMap);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( Enumeration * & enum_type ) {
        return serializePointer(enum_type, enumerationMap);
    }

    // This method creates concrete (i.e. non-polymorphic types without duplications)
    template<typename T>
    void AstSerializer::serializeSmartPtr( smart_ptr<T> & obj, das_hash_map<uint64_t, smart_ptr<T>> & objMap) {
        uint64_t id = uint64_t(obj.get());
        *this << id;
        if ( writing ) {
            if ( id && objMap.find(id) == objMap.end() ) {
                objMap[id] = obj;
                obj->serialize(*this);
            }
        } else {
            if ( id ) {
                auto it = objMap.find(id);
                if (it == objMap.end()) {
                    obj = make_smart<T>();
                    objMap[id] = obj;
                    obj->serialize(*this);
                } else {
                    obj = it->second;
                }
            } else {
                obj = nullptr;
            }
        }
    }

    AstSerializer & AstSerializer::operator << ( EnumerationPtr & enum_type ) {
        serializeSmartPtr(enum_type, smartEnumerationMap);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( Enumeration::EnumEntry & entry ) {
        entry.serialize(*this);
        return *this;
    }

    // Note for review: this is the usual downward serialization, no need to backpatch
    AstSerializer & AstSerializer::operator << ( TypeAnnotationPtr & type_anno ) {
        AnnotationPtr a = static_pointer_cast<Annotation>(type_anno);
        *this << a;
        type_anno = static_pointer_cast<TypeAnnotation>(a);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( TypeAnnotation * & type_anno ) {
        TypeAnnotationPtr t = type_anno;
        *this << t;
        type_anno = t.orphan();
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( VariablePtr & var ) {
        serializeSmartPtr(var, smartVariableMap);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( Variable * & var ) {
        serializePointer(var, variableMap);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( Module * & module ) {
        bool is_null = module == nullptr;
        *this << is_null;
        if ( writing ) {
            if ( !is_null ) {
                *this << module->name;
            }
        } else {
            if ( !is_null ) {
                string name; *this << name;
                moduleRefs.emplace_back(move(name), &module);
            } else {
                module = nullptr;
            }
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( Function::AliasInfo & alias_info ) {
        alias_info.serialize(*this);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( ReaderMacroPtr & ptr ) {
        tag("ReaderMacroPtr");
        if ( writing ) {
            DAS_ASSERTF(ptr, "did not expext to see null ReaderMacroPtr");
            bool inThisModule = ptr->module == thisModule;
            DAS_ASSERTF(!inThisModule, "did not expect to find macro from the current module");
            *this << ptr->module->name;
            *this << ptr->name;
        } else {
            string moduleName, name;
            *this << moduleName << name;
            auto mod = moduleLibrary->findModule(moduleName);
            DAS_VERIFYF(mod!=nullptr, "module '%s' not found", moduleName.c_str());
            ptr = mod->findReaderMacro(name);
            DAS_VERIFYF(ptr, "Reader macro '%s' not found in the module '%s'",
                name.c_str(), mod->name.c_str()
            );
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( ExprBlock * & block ) {
        tag("ExprBlock*");
        if ( writing ) {
            DAS_ASSERTF(block, "block should be not null");
        }
        uint64_t addr = (uintptr_t) block;
        *this << addr;
        if ( !writing ) {
            blockRefs.emplace_back(&block, addr);
        }
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( InferHistory & history ) {
        tag("InferHistory");
        history.serialize(*this);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( CaptureEntry & entry ) {
        *this << entry.name;
        serialize_enum<CaptureMode>(entry.mode);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( MakeFieldDeclPtr & ptr ) {
        serializeSmartPtr(ptr, smartMakeFieldDeclMap);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( MakeStructPtr & ptr ) {
        serializeSmartPtr(ptr, smartMakeStructMap);
        return *this;
    }

    AstSerializer & AstSerializer::operator << ( Module & module ) {
        thisModule = &module;
        module.serialize(*this);
        return *this;
    }

// typedecl

    void TypeDecl::serialize ( AstSerializer & ser ) {
        ser.tag("TypeDecl");
        ser << baseType;
        ser << structType << enumType;
        ser << firstType  << secondType;
        ser << annotation;
        ser << argTypes   << argNames;
        ser << dim        << dimExpr;
        ser << flags      << alias;
        ser << at         << module;
    }

    void AnnotationArgument::serialize ( AstSerializer & ser ) {
        ser.tag("AnnotationArgument");
        ser << type << name << sValue << iValue << at;
    }

    void AnnotationArgumentList::serialize ( AstSerializer & ser ) {
        ser << * static_cast <AnnotationArguments *> (this);
    }

    void AnnotationDeclaration::serialize ( AstSerializer & ser ) {
        ser << annotation << arguments << at << flags;
        ptr_ref_count::serialize(ser);
    }

    void BasicAnnotation::serialize ( AstSerializer & ser ) {
        ser << name << cppName;
        ptr_ref_count::serialize(ser);
    }

    void ptr_ref_count::serialize ( AstSerializer & ser ) {
        ser.tag("ptr_ref_count");
        #if DAS_SMART_PTR_ID
                ser << ref_count_id;
        #endif
        #if DAS_SMART_PTR_MAGIC
                ser << magic;
        #endif
        ser << ref_count;
    }

    void Structure::FieldDeclaration::serialize ( AstSerializer & ser ) {
        ser.tag("FieldDeclaration");
        ser << name << type << init << annotation << at << offset << flags;
    }

    void Enumeration::EnumEntry::serialize( AstSerializer & ser ) {
        ser << name << cppName << at << value;
    }

    void Enumeration::serialize ( AstSerializer & ser ) {
        ser << name << cppName << at << list << module << external << baseType
            << annotations << isPrivate;
        ptr_ref_count::serialize(ser);
    }

    void Structure::serialize ( AstSerializer & ser ) {
        ser.tag("Structure");
        ser << name << fields << fieldLookup << at << module
            << parent // parent could be in the current module or in some other
                      // module
            << annotations << flags;
        ptr_ref_count::serialize(ser);
    }

    void Variable::serialize ( AstSerializer & ser ) {
        ser << name << aka << type << init << source << at << index << stackTop
            << extraLocalOffset << module << useFunctions << useGlobalVariables
            << initStackSize << flags << access_flags << annotation;
        ptr_ref_count::serialize(ser);
    }

    void Function::AliasInfo::serialize ( AstSerializer & ser ) {
        ser << var << func << viaPointer;
    }

    void InferHistory::serialize ( AstSerializer & ser ) {
        ser << at << func;
    }

// function

    void Function::serialize ( AstSerializer & ser ) {
        ser.tag("Function");
        ser << annotations;
        ser << name;
        ser << arguments;
        ser << result;
        ser << body;
        ser << index;
        ser << totalStackSize;
        ser << totalGenLabel;
        ser << at;
        ser << atDecl;
        ser << module;
        ser << useFunctions;
        ser << useGlobalVariables;
        ser << classParent;
        ser << resultAliases;
        ser << argumentAliases;
        ser << resultAliasesGlobals;
        ser << flags;
        ser << moreFlags;
        ser << sideEffectFlags;
        ser << inferStack;
        ser << fromGeneric;
        ser << hash;
        ser << aotHash;
    }

// Expressions

    void ExprReader::serialize ( AstSerializer & ser ) {
        ser << macro << sequence;
        Expression::serialize(ser);
    }

    void ExprLabel::serialize ( AstSerializer & ser ) {
        ser << label << comment;
        Expression::serialize(ser);
    }

    void ExprGoto::serialize ( AstSerializer & ser ) {
        ser << label << subexpr;
        Expression::serialize(ser);
    }

    void ExprRef2Value::serialize ( AstSerializer & ser ) {
        ser << subexpr;
        Expression::serialize(ser);
    }

    void ExprRef2Ptr::serialize ( AstSerializer & ser ) {
        ser << subexpr;
        Expression::serialize(ser);
    }

    void ExprPtr2Ref::serialize ( AstSerializer & ser ) {
        ser << subexpr << unsafeDeref;
        Expression::serialize(ser);
    }

    void ExprAddr::serialize ( AstSerializer & ser ) {
        ser << target << funcType << func;
        Expression::serialize(ser);
    }

    void ExprNullCoalescing::serialize ( AstSerializer & ser ) {
        ser << defaultValue;
        ExprPtr2Ref::serialize(ser);
    }

    void ExprDelete::serialize ( AstSerializer & ser ) {
        ser << subexpr << sizeexpr << native;
        Expression::serialize(ser);
    }

    void ExprAt::serialize ( AstSerializer & ser ) {
        ser << subexpr << index;
        ser << atFlags;
        Expression::serialize(ser);
    }

    void ExprSafeAt::serialize ( AstSerializer & ser ) {
        ExprAt::serialize(ser);
    }

    void ExprBlock::serialize ( AstSerializer & ser ) {
        Expression::serialize(ser);
        ser << list << finalList << returnType << arguments << stackTop
            << stackVarTop << stackVarBottom << stackCleanVars << maxLabelIndex
            << annotations << annotationData << annotationDataSid << blockFlags
            << inFunction;
    }

    void ExprVar::serialize ( AstSerializer & ser ) {
        Expression::serialize(ser);
        ser << name << variable << pBlock << argumentIndex << varFlags;
    }

    void ExprTag::serialize ( AstSerializer & ser ) {
        ser << subexpr << value << name;
        Expression::serialize(ser);
    }

    void ExprField::serialize ( AstSerializer & ser ) {
        ser << value << name << atField
            // Note: `field` is const, save it for later backpatching
            << fieldIndex << annotation << derefFlags
            // Note: underClone is only used during infer and we don't need it
            << fieldFlags;
        if ( ser.writing ) {
            auto nam = type->structType->getMangledName();
            ser << type->module << name;
        } else {
            string module, mangledName;
            ser << module << mangledName;
            auto mod = ser.moduleLibrary->findModule(module);
            DAS_ASSERTF(mod, "expected to find a module for struct '%s'", mangledName.c_str());
            auto struct_ = mod->findStructure(mangledName);
        // set the missing field field
            field = struct_->findField(name);
        }
        Expression::serialize(ser);
    }

    void ExprSafeAsVariant::serialize ( AstSerializer & ser ) {
        ser << skipQQ;
        ExprField::serialize(ser);
    }

    void ExprSwizzle::serialize ( AstSerializer & ser ) {
        ser << value << mask << fields << fieldFlags;
        Expression::serialize(ser);
    }

    void ExprSafeField::serialize ( AstSerializer & ser ) {
        ser << skipQQ;
        ExprField::serialize(ser);
    }

    void ExprLooksLikeCall::serialize ( AstSerializer & ser ) {
        ser << name << arguments
            << argumentsFailedToInfer << aliasSubstitution << atEnclosure;
        Expression::serialize(ser);
    }

    void ExprCallMacro::serialize ( AstSerializer & ser ) {
        ser << macro;
        ExprLooksLikeCall::serialize(ser);
    }

    void ExprCallFunc::serialize ( AstSerializer & ser ) {
        ser << func << stackTop;
        ExprLooksLikeCall::serialize(ser);
    }

    void ExprOp::serialize ( AstSerializer & ser ) {
        ser << op;
        ExprCallFunc::serialize(ser);
    }

    void ExprOp1::serialize ( AstSerializer & ser ) {
        ser << subexpr;
        ExprOp::serialize(ser);
    }

    void ExprOp2::serialize ( AstSerializer & ser ) {
        ser << left << right;
        ExprOp::serialize(ser);
    }

    void ExprCopy::serialize ( AstSerializer & ser ) {
        ser << copyFlags;
        ExprOp2::serialize(ser);
    }

    void ExprMove::serialize ( AstSerializer & ser ) {
        ser << moveFlags;
        ExprOp2::serialize(ser);
    }

    void ExprClone::serialize ( AstSerializer & ser ) {
        ser << cloneSet;
        ExprOp2::serialize(ser);
    }

    void ExprOp3::serialize ( AstSerializer & ser ) {
        ser << subexpr << left << right;
        ExprOp::serialize(ser);
    }

    void ExprTryCatch::serialize ( AstSerializer & ser ) {
        ser << try_block << catch_block;
        Expression::serialize(ser);
    }

    void ExprReturn::serialize ( AstSerializer & ser ) {
        Expression::serialize(ser);
        ser << subexpr << returnFlags << stackTop << refStackTop << returnFunc
            << block << returnType;
    }

    void ExprConst::serialize ( AstSerializer & ser ) {
        ser << baseType << value;
        Expression::serialize(ser);
    }

    void ExprConstPtr::serialize( AstSerializer & ser ) {
        ser << isSmartPtr << ptrType;
        ExprConstT<void *,ExprConstPtr>::serialize(ser);
    }

     void ExprConstEnumeration::serialize( AstSerializer & ser ) {
        ser << enumType << text;
        ExprConst::serialize(ser);
     }

    void ExprConstString::serialize(AstSerializer& ser) {
        ser << text;
        ExprConst::serialize(ser);
    }

    void ExprStringBuilder::serialize(AstSerializer& ser) {
        ser << elements;
        Expression::serialize(ser);
    }

    void ExprLet::serialize(AstSerializer& ser) {
        ser << variables << visibility << atInit << letFlags;
        Expression::serialize(ser);
    }

    void ExprFor::serialize(AstSerializer& ser) {
        ser << iterators << iteratorsAka << iteratorsAt << iteratorsTags
            << iteratorVariables << sources << body << visibility
            << allowIteratorOptimization << canShadow;
        Expression::serialize(ser);
    }

    void ExprUnsafe::serialize(AstSerializer& ser) {
        ser << body;
        Expression::serialize(ser);
    }

    void ExprWhile::serialize(AstSerializer& ser) {
        ser << cond << body;
        Expression::serialize(ser);
    }

    void ExprWith::serialize(AstSerializer& ser) {
        ser << with << body;
        Expression::serialize(ser);
    }

    void ExprAssume::serialize(AstSerializer& ser) {
        ser << alias << subexpr;
        Expression::serialize(ser);
    }

    void ExprMakeBlock::serialize(AstSerializer & ser) {
        ser << capture << block << stackTop << mmFlags;
        Expression::serialize(ser);
    }

    void ExprMakeGenerator::serialize(AstSerializer & ser) {
        ser << iterType << capture;
        ExprLooksLikeCall::serialize(ser);
    }

    void ExprYield::serialize(AstSerializer & ser) {
        ser << subexpr << returnFlags;
        Expression::serialize(ser);
    }

    void ExprInvoke::serialize(AstSerializer & ser) {
        ser << stackTop << doesNotNeedSp << isInvokeMethod << cmresAlias;
        ExprLikeCall<ExprInvoke>::serialize(ser);
    }

    void ExprAssert::serialize(AstSerializer & ser) {
        ser << isVerify;
        ExprLikeCall<ExprAssert>::serialize(ser);
    }

    void ExprQuote::serialize(AstSerializer & ser) {
        ExprLikeCall<ExprQuote>::serialize(ser);
    }

    template <typename It, typename SimNodeT, bool first>
    void ExprTableKeysOrValues<It,SimNodeT,first>::serialize(AstSerializer & ser) {
        ExprLooksLikeCall::serialize(ser);
    }

    template <typename It, typename SimNodeT>
    void ExprArrayCallWithSizeOrIndex<It,SimNodeT>::serialize(AstSerializer & ser) {
        ExprLooksLikeCall::serialize(ser);
    }

    void ExprTypeInfo::serialize(AstSerializer & ser) {
        ser << trait << subexpr << typeexpr << subtrait << extratrait << macro;
        Expression::serialize(ser);
    }

    void ExprIs::serialize(AstSerializer & ser) {
        ser << subexpr << typeexpr;
        Expression::serialize(ser);
    }

    void ExprAscend::serialize(AstSerializer & ser) {
        ser << subexpr << ascType << stackTop << ascendFlags;
        Expression::serialize(ser);
    }

    void ExprCast::serialize(AstSerializer & ser) {
        ser << subexpr << castType << castFlags;
        Expression::serialize(ser);
    }

    void ExprNew::serialize(AstSerializer & ser) {
        ser << typeexpr << initializer;
        ExprCallFunc::serialize(ser);
    }

    void ExprCall::serialize(AstSerializer & ser) {
        ser << doesNotNeedSp << cmresAlias;
        ExprCallFunc::serialize(ser);
    }

    void ExprIfThenElse::serialize ( AstSerializer & ser ) {
        ser << cond << if_true << if_false << ifFlags;
        Expression::serialize(ser);
    }

    void MakeFieldDecl::serialize ( AstSerializer & ser ) {
        ser << at << name << value << tag << flags;
        ptr_ref_count::serialize(ser);
    }

    void MakeStruct::serialize( AstSerializer & ser ) {
        ser << static_cast <vector<MakeFieldDeclPtr> &> ( *this );
        ptr_ref_count::serialize(ser);
    }

    void ExprNamedCall::serialize ( AstSerializer & ser ) {
        ser << name << nonNamedArguments << arguments << argumentsFailedToInfer;
        Expression::serialize(ser);
    }

    void ExprMakeLocal::serialize ( AstSerializer & ser ) {
        ser << makeType << stackTop << extraOffset << makeFlags;
        Expression::serialize(ser);
    }

    void ExprMakeStruct::serialize ( AstSerializer & ser ) {
        ser << structs << block << makeStructFlags;
        ExprMakeLocal::serialize(ser);
    }

    void ExprMakeVariant::serialize ( AstSerializer & ser ) {
        ser << variants;
        ExprMakeLocal::serialize(ser);
    }

    void ExprMakeArray::serialize ( AstSerializer & ser ) {
        ser << recordType << values;
        ExprMakeLocal::serialize(ser);
    }

    void ExprMakeTuple::serialize ( AstSerializer & ser ) {
        ser << isKeyValue;
        ExprMakeArray::serialize(ser);
    }

    void ExprArrayComprehension::serialize ( AstSerializer & ser ) {
        ser << exprFor << exprWhere << subexpr << generatorSyntax;
        Expression::serialize(ser);
    }

    void ExprTypeDecl::serialize ( AstSerializer & ser ) {
        ser << typeexpr;
        Expression::serialize(ser);
    }

    void Expression::serialize ( AstSerializer & ser ) {
        ser << at
            << type
            << __rtti
            << genFlags
            << flags
            << printFlags;
        ptr_ref_count::serialize(ser);
    }

    void FileInfo::serialize ( AstSerializer & ser ) {
        ser.tag("FileInfo");
        int tag = 0;
        ser << tag << name << tabSize;
        // Note: we do not serialize profileData
    }

    void TextFileInfo::serialize ( AstSerializer & ser ) {
        ser.tag("TextFileInfo");
        int tag = 1; // Signify the text file info
        ser << tag    << name        << tabSize;
        ser << source << sourceLength << owner;
    }

    AstSerializer & AstSerializer::operator << ( CallMacro * & ptr ) {
        tag("CallMacro *");
        if ( writing ) {
            DAS_ASSERTF ( ptr, "did not expect to see a nullptr CallMacro *" );
            bool inThisModule = ptr->module == thisModule;
            DAS_ASSERTF ( !inThisModule, "did not expect to find macro from the current module" );
            *this << ptr->module->name;
            *this << ptr->name;
        } else {
            string moduleName, name;
            *this << moduleName << name;
            auto mod = moduleLibrary->findModule(moduleName);
            DAS_VERIFYF(mod!=nullptr, "module '%s' not found", moduleName.c_str());
        // perform a litte dance to access the internal macro; for details see: src/builtin/module_builtin_ast_adapters.cpp
        // 1564: void addModuleCallMacro ( .... CallMacroPtr & .... )
            auto callFactory = mod->findCall(name);
            DAS_VERIFYF(
                callFactory, "could not find CallMacro '%s' in the module '%s'",
                name.c_str(), mod->name.c_str()
            );
            auto exprLooksLikeCall = (*callFactory)({});
            DAS_ASSERTF(
                strncmp("ExprCallMacro", exprLooksLikeCall->__rtti, 14) == 0,
                "excepted to see an ExprCallMacro"
            );
            ptr = static_cast<ExprCallMacro *>(exprLooksLikeCall)->macro;
        }
        return *this;
    }

    // Restores the internal state of macro module
    Module * reinstantiateMacroModuleState ( ModuleLibrary & lib, Module * this_mod ) {
        TextWriter ignore_logs;
        // ModuleGroup libGroup;
        ReuseCacheGuard rcg;
    // initialize program
        auto program = make_smart<Program>();
        program->promoteToBuiltin = false;
        program->isDependency = true;
        program->thisModuleGroup = nullptr;
        // program->thisModuleGroup = &libGroup;
        program->thisModuleName.clear();
        lib.foreach([&](Module * pm){
            program->library.addModule(pm);
            return true;
        },"*");
    // set the current module
        program->thisModule.reset(this_mod);
    // create the module macro state
        program->isCompiling = false;
        program->markMacroSymbolUse();
        program->allocateStack(ignore_logs);
        program->makeMacroModule(ignore_logs);
    // unbind the module from the program
        return program->thisModule.release();
    }

    void Module::serialize ( AstSerializer & ser ) {
        ser << aliasTypes     << handleTypes << structures << enumerations << globals;
        ser << functions      << functionsByName;
        ser << generics       << genericsByName;
        ser << annotationData << requireModule;
        ser << name           << moduleFlags;

        // Now we need to restore the internal state in case this has been a macro module

        if ( ser.writing ) {
            bool is_macro_module = macroContext; // it's a macro module if it has macroContext
            ser << is_macro_module;
        } else {
            bool is_macro_module = false;
            ser << is_macro_module;
            if ( is_macro_module ) {
                reinstantiateMacroModuleState (*ser.moduleLibrary, this);
            }
        }

        ser << ownFileInfo << promotedAccess;

        ser.patch();
    }


    void Program::serialize ( AstSerializer & ser ) {
        if ( ser.writing ) {
            ser.moduleLibrary = &library;
            uint64_t size = library.modules.size();
            ser << size;
            for ( auto & m : library.modules ) {
                bool builtin = m->builtIn;
                ser << builtin;
                ser << m->name;
                if ( !builtin )
                    ser << *m; // Serialize the whole module
            }
        } else {
            ModuleLibrary * dummy = new ModuleLibrary;
            ser.moduleLibrary = dummy;

            uint64_t size = 0; ser << size;
            for ( uint64_t i = 0; i < size; i++ ) {
                bool builtin; string name;
                ser << builtin << name;
                if ( name == "$" )
                    dummy->addBuiltInModule();
                else if ( builtin ) {
                    Module * m = Module::require(name);
                    dummy->addModule(m);
                } else {
                    auto deser = new Module;
                    ser << *deser;
                    dummy->addModule(deser);
                }
            }
        }
    }

}
