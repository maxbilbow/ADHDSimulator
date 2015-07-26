#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.PlayerPrefs
struct PlayerPrefs_t635;
// System.String
struct String_t;

// System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
extern "C" bool PlayerPrefs_TrySetSetString_m3357 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" int32_t PlayerPrefs_GetInt_m3358 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C" int32_t PlayerPrefs_GetInt_m1059 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
extern "C" float PlayerPrefs_GetFloat_m3359 (Object_t * __this /* static, unused */, String_t* ___key, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
extern "C" float PlayerPrefs_GetFloat_m1058 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C" void PlayerPrefs_SetString_m503 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m3360 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C" String_t* PlayerPrefs_GetString_m500 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" bool PlayerPrefs_HasKey_m499 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
extern "C" void PlayerPrefs_DeleteKey_m1062 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::Save()
extern "C" void PlayerPrefs_Save_m987 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
