#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera
struct Camera_t82;
// UnityEngine.RenderTexture
struct RenderTexture_t566;
// UnityEngine.Camera[]
struct CameraU5BU5D_t746;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" float Camera_get_fieldOfView_m656 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C" void Camera_set_fieldOfView_m657 (Camera_t82 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m2319 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m2318 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m2233 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m2328 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m3231 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t148  Camera_get_pixelRect_m3232 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m3233 (Camera_t82 * __this, Rect_t148 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t566 * Camera_get_targetTexture_m3234 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C" Matrix4x4_t529  Camera_get_worldToCameraMatrix_m3235 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_worldToCameraMatrix_m3236 (Camera_t82 * __this, Matrix4x4_t529 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" Matrix4x4_t529  Camera_get_projectionMatrix_m3237 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m3238 (Camera_t82 * __this, Matrix4x4_t529 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m3239 (Camera_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t40  Camera_ScreenToWorldPoint_m911 (Camera_t82 * __this, Vector3_t40  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t40  Camera_INTERNAL_CALL_ScreenToWorldPoint_m3240 (Object_t * __this /* static, unused */, Camera_t82 * ___self, Vector3_t40 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t40  Camera_ScreenToViewportPoint_m2399 (Camera_t82 * __this, Vector3_t40  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t40  Camera_INTERNAL_CALL_ScreenToViewportPoint_m3241 (Object_t * __this /* static, unused */, Camera_t82 * ___self, Vector3_t40 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t88  Camera_ScreenPointToRay_m625 (Camera_t82 * __this, Vector3_t40  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t88  Camera_INTERNAL_CALL_ScreenPointToRay_m3242 (Object_t * __this /* static, unused */, Camera_t82 * ___self, Vector3_t40 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t82 * Camera_get_main_m646 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern "C" Camera_t82 * Camera_get_current_m923 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m3243 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m3244 (Object_t * __this /* static, unused */, CameraU5BU5D_t746* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C" void Camera_FireOnPreCull_m3245 (Object_t * __this /* static, unused */, Camera_t82 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPreRender_m3246 (Object_t * __this /* static, unused */, Camera_t82 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPostRender_m3247 (Object_t * __this /* static, unused */, Camera_t82 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t9 * Camera_RaycastTry_m3248 (Camera_t82 * __this, Ray_t88  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t9 * Camera_INTERNAL_CALL_RaycastTry_m3249 (Object_t * __this /* static, unused */, Camera_t82 * ___self, Ray_t88 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t9 * Camera_RaycastTry2D_m3250 (Camera_t82 * __this, Ray_t88  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t9 * Camera_INTERNAL_CALL_RaycastTry2D_m3251 (Object_t * __this /* static, unused */, Camera_t82 * ___self, Ray_t88 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
