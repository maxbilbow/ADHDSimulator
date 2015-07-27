#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Plane[]
struct PlaneU5BU5D_t263;
// UnityEngine.Camera
struct Camera_t85;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
extern "C" PlaneU5BU5D_t263* GeometryUtility_CalculateFrustumPlanes_m899 (Object_t * __this /* static, unused */, Camera_t85 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Matrix4x4)
extern "C" PlaneU5BU5D_t263* GeometryUtility_CalculateFrustumPlanes_m2812 (Object_t * __this /* static, unused */, Matrix4x4_t536  ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4)
extern "C" void GeometryUtility_Internal_ExtractPlanes_m2813 (Object_t * __this /* static, unused */, PlaneU5BU5D_t263* ___planes, Matrix4x4_t536  ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::INTERNAL_CALL_Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4&)
extern "C" void GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m2814 (Object_t * __this /* static, unused */, PlaneU5BU5D_t263* ___planes, Matrix4x4_t536 * ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
extern "C" bool GeometryUtility_TestPlanesAABB_m902 (Object_t * __this /* static, unused */, PlaneU5BU5D_t263* ___planes, Bounds_t260  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::INTERNAL_CALL_TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds&)
extern "C" bool GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m2815 (Object_t * __this /* static, unused */, PlaneU5BU5D_t263* ___planes, Bounds_t260 * ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
