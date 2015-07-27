#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1451;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1453;
// System.Type[]
struct TypeU5BU5D_t707;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1455;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t868;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t875;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Globalization.CultureInfo
struct CultureInfo_t844;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1452;
// System.Reflection.Module
struct Module_t1467;
// System.Exception
struct Exception_t154;
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.Emit.MethodToken
#include "mscorlib_System_Reflection_Emit_MethodToken.h"

// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" void ConstructorBuilder__ctor_m8343 (ConstructorBuilder_t1451 * __this, TypeBuilder_t1453 * ___tb, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t707* ___parameterTypes, TypeU5BU5DU5BU5D_t1455* ___paramModReq, TypeU5BU5DU5BU5D_t1455* ___paramModOpt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m8344 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1453 * ConstructorBuilder_get_TypeBuilder_m8345 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t868* ConstructorBuilder_GetParameters_m8346 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C" ParameterInfoU5BU5D_t868* ConstructorBuilder_GetParametersInternal_m8347 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C" int32_t ConstructorBuilder_GetParameterCount_m8348 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m8349 (ConstructorBuilder_t1451 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t875 * ___binder, ObjectU5BU5D_t148* ___parameters, CultureInfo_t844 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m8350 (ConstructorBuilder_t1451 * __this, int32_t ___invokeAttr, Binder_t875 * ___binder, ObjectU5BU5D_t148* ___parameters, CultureInfo_t844 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1862  ConstructorBuilder_get_MethodHandle_m8351 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C" int32_t ConstructorBuilder_get_Attributes_m8352 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m8353 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m8354 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C" String_t* ConstructorBuilder_get_Name_m8355 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool ConstructorBuilder_IsDefined_m8356 (ConstructorBuilder_t1451 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t148* ConstructorBuilder_GetCustomAttributes_m8357 (ConstructorBuilder_t1451 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t148* ConstructorBuilder_GetCustomAttributes_m8358 (ConstructorBuilder_t1451 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C" ILGenerator_t1452 * ConstructorBuilder_GetILGenerator_m8359 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern "C" ILGenerator_t1452 * ConstructorBuilder_GetILGenerator_m8360 (ConstructorBuilder_t1451 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C" MethodToken_t1470  ConstructorBuilder_GetToken_m8361 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C" Module_t1467 * ConstructorBuilder_get_Module_m8362 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C" String_t* ConstructorBuilder_ToString_m8363 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ConstructorBuilder::fixup()
extern "C" void ConstructorBuilder_fixup_m8364 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t ConstructorBuilder_get_next_table_index_m8365 (ConstructorBuilder_t1451 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m8366 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t154 * ConstructorBuilder_not_supported_m8367 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t154 * ConstructorBuilder_not_created_m8368 (ConstructorBuilder_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
