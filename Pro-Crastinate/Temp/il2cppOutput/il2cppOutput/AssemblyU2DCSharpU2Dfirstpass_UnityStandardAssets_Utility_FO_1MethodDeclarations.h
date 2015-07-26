#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.FOVKick
struct FOVKick_t92;
// UnityEngine.Camera
struct Camera_t82;
// System.Collections.IEnumerator
struct IEnumerator_t142;

// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
extern "C" void FOVKick__ctor_m305 (FOVKick_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
extern "C" void FOVKick_Setup_m306 (FOVKick_t92 * __this, Camera_t82 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
extern "C" void FOVKick_CheckStatus_m307 (FOVKick_t92 * __this, Camera_t82 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.FOVKick::ChangeCamera(UnityEngine.Camera)
extern "C" void FOVKick_ChangeCamera_m308 (FOVKick_t92 * __this, Camera_t82 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
extern "C" Object_t * FOVKick_FOVKickUp_m309 (FOVKick_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
extern "C" Object_t * FOVKick_FOVKickDown_m310 (FOVKick_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
