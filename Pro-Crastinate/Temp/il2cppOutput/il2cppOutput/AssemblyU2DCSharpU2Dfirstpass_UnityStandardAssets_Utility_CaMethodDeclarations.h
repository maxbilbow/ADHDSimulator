#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t83;
// UnityEngine.Camera
struct Camera_t82;
// UnityEngine.Transform
struct Transform_t38;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void CameraRefocus__ctor_m273 (CameraRefocus_t83 * __this, Camera_t82 * ___camera, Transform_t38 * ___parent, Vector3_t40  ___origCameraPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C" void CameraRefocus_ChangeCamera_m274 (CameraRefocus_t83 * __this, Camera_t82 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C" void CameraRefocus_ChangeParent_m275 (CameraRefocus_t83 * __this, Transform_t38 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C" void CameraRefocus_GetFocusPoint_m276 (CameraRefocus_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C" void CameraRefocus_SetFocusPoint_m277 (CameraRefocus_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
