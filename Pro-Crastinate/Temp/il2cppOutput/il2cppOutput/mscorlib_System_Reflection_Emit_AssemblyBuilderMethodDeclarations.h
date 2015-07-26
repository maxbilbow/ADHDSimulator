#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1438;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1437;
// System.Type[]
struct TypeU5BU5D_t702;
// System.Exception
struct Exception_t143;
// System.Reflection.AssemblyName
struct AssemblyName_t1486;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m8313 (AssemblyBuilder_t1438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1437* AssemblyBuilder_GetModulesInternal_m8314 (AssemblyBuilder_t1438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t702* AssemblyBuilder_GetTypes_m8315 (AssemblyBuilder_t1438 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m8316 (AssemblyBuilder_t1438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t143 * AssemblyBuilder_not_supported_m8317 (AssemblyBuilder_t1438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1486 * AssemblyBuilder_UnprotectedGetName_m8318 (AssemblyBuilder_t1438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
