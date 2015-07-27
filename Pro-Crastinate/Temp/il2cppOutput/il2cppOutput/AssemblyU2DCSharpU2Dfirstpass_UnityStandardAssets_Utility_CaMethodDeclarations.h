#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t84;
// UnityEngine.Camera
struct Camera_t85;
// UnityEngine.Transform
struct Transform_t41;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void CameraRefocus__ctor_m277 (CameraRefocus_t84 * __this, Camera_t85 * ___camera, Transform_t41 * ___parent, Vector3_t42  ___origCameraPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C" void CameraRefocus_ChangeCamera_m278 (CameraRefocus_t84 * __this, Camera_t85 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C" void CameraRefocus_ChangeParent_m279 (CameraRefocus_t84 * __this, Transform_t41 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C" void CameraRefocus_GetFocusPoint_m280 (CameraRefocus_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C" void CameraRefocus_SetFocusPoint_m281 (CameraRefocus_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
