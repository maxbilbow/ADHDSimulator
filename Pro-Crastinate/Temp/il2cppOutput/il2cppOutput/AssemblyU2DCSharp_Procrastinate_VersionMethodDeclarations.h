#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.Version
struct Version_t255;
// System.String
struct String_t;
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// Procrastinate.Version/Type
#include "AssemblyU2DCSharp_Procrastinate_Version_Type.h"

// System.Void Procrastinate.Version::.ctor()
extern "C" void Version__ctor_m874 (Version_t255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::.cctor()
extern "C" void Version__cctor_m875 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.Version::get_latest()
extern "C" float Version_get_latest_m876 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.Version::get_currentVersion()
extern "C" float Version_get_currentVersion_m877 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::set_currentVersion(System.Single)
extern "C" void Version_set_currentVersion_m878 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.Version::get_needsPatch()
extern "C" bool Version_get_needsPatch_m879 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Patch()
extern "C" void Version_Patch_m880 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::PatchX()
extern "C" void Version_PatchX_m881 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Patchv0_3_6()
extern "C" void Version_Patchv0_3_6_m882 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Patchv0_3_5()
extern "C" void Version_Patchv0_3_5_m883 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Procrastinate.Version::OldKey(Procrastinate.UserData)
extern "C" String_t* Version_OldKey_m884 (Object_t * __this /* static, unused */, int32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Setf(Procrastinate.UserData)
extern "C" void Version_Setf_m885 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Set(Procrastinate.UserData)
extern "C" void Version_Set_m886 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Set(Procrastinate.UserData,Procrastinate.Version/Type)
extern "C" void Version_Set_m887 (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
