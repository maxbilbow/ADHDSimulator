#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t875;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t868;
// System.Globalization.CultureInfo
struct CultureInfo_t844;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t163;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1910;

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m8684 (Binder_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m8685 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t875 * Binder_get_DefaultBinder_m8686 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m8687 (Object_t * __this /* static, unused */, Binder_t875 * ___binder, ObjectU5BU5D_t148* ___args, ParameterInfoU5BU5D_t868* ___pinfo, CultureInfo_t844 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m8688 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t163 * Binder_FindMostDerivedMatch_m8689 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1910* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
