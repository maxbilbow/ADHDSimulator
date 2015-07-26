#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.Version
struct Version_t252;
// System.String
struct String_t;
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// Procrastinate.Version/Type
#include "AssemblyU2DCSharp_Procrastinate_Version_Type.h"

// System.Void Procrastinate.Version::.ctor()
extern "C" void Version__ctor_m856 (Version_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::.cctor()
extern "C" void Version__cctor_m857 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.Version::get_latest()
extern "C" float Version_get_latest_m858 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.Version::get_currentVersion()
extern "C" float Version_get_currentVersion_m859 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::set_currentVersion(System.Single)
extern "C" void Version_set_currentVersion_m860 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.Version::get_needsPatch()
extern "C" bool Version_get_needsPatch_m861 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Patch()
extern "C" void Version_Patch_m862 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::PatchX()
extern "C" void Version_PatchX_m863 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Patchv0_3_6()
extern "C" void Version_Patchv0_3_6_m864 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Patchv0_3_5()
extern "C" void Version_Patchv0_3_5_m865 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Procrastinate.Version::OldKey(Procrastinate.UserData)
extern "C" String_t* Version_OldKey_m866 (Object_t * __this /* static, unused */, int32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Setf(Procrastinate.UserData)
extern "C" void Version_Setf_m867 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Set(Procrastinate.UserData)
extern "C" void Version_Set_m868 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.Version::Set(Procrastinate.UserData,Procrastinate.Version/Type)
extern "C" void Version_Set_m869 (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
