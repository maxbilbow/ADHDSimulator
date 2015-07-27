#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t552;
// UnityEngine.Object
struct Object_t76;
struct Object_t76_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t182;

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C" Object_t76 * AssetBundle_LoadAsset_m2699 (AssetBundle_t552 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t76 * AssetBundle_LoadAsset_Internal_m2700 (AssetBundle_t552 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t182* AssetBundle_LoadAssetWithSubAssets_Internal_m2701 (AssetBundle_t552 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
