#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t510;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m3400 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, RaycastHit_t196 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m3401 (Object_t * __this /* static, unused */, Vector3_t42 * ___origin, Vector3_t42 * ___direction, RaycastHit_t196 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m620 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, RaycastHit_t196 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m643 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, RaycastHit_t196 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" bool Physics_Raycast_m661 (Object_t * __this /* static, unused */, Ray_t89  ___ray, RaycastHit_t196 * ___hitInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2418 (Object_t * __this /* static, unused */, Ray_t89  ___ray, RaycastHit_t196 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t510* Physics_RaycastAll_m2346 (Object_t * __this /* static, unused */, Ray_t89  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t510* Physics_RaycastAll_m3402 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t510* Physics_INTERNAL_CALL_RaycastAll_m3403 (Object_t * __this /* static, unused */, Vector3_t42 * ___origin, Vector3_t42 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
