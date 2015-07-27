#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t165;

// System.Void System.IO.Path::.cctor()
extern "C" void Path__cctor_m8183 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" String_t* Path_Combine_m5161 (Object_t * __this /* static, unused */, String_t* ___path1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::CleanPath(System.String)
extern "C" String_t* Path_CleanPath_m8184 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetDirectoryName(System.String)
extern "C" String_t* Path_GetDirectoryName_m8185 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFileName(System.String)
extern "C" String_t* Path_GetFileName_m8186 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFullPath(System.String)
extern "C" String_t* Path_GetFullPath_m8187 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
extern "C" String_t* Path_WindowsDriveAdjustment_m8188 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::InsecureGetFullPath(System.String)
extern "C" String_t* Path_InsecureGetFullPath_m8189 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::IsDsc(System.Char)
extern "C" bool Path_IsDsc_m8190 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetPathRoot(System.String)
extern "C" String_t* Path_GetPathRoot_m8191 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::IsPathRooted(System.String)
extern "C" bool Path_IsPathRooted_m8192 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.IO.Path::GetInvalidPathChars()
extern "C" CharU5BU5D_t165* Path_GetInvalidPathChars_m8193 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetServerAndShare(System.String)
extern "C" String_t* Path_GetServerAndShare_m8194 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
extern "C" bool Path_SameRoot_m8195 (Object_t * __this /* static, unused */, String_t* ___root, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::CanonicalizePath(System.String)
extern "C" String_t* Path_CanonicalizePath_m8196 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
