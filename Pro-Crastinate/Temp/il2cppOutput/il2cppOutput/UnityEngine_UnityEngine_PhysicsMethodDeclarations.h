#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics
struct Physics_t637;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t503;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m3377 (Object_t * __this /* static, unused */, Vector3_t40  ___origin, Vector3_t40  ___direction, RaycastHit_t193 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m3378 (Object_t * __this /* static, unused */, Vector3_t40 * ___origin, Vector3_t40 * ___direction, RaycastHit_t193 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m610 (Object_t * __this /* static, unused */, Vector3_t40  ___origin, Vector3_t40  ___direction, RaycastHit_t193 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m636 (Object_t * __this /* static, unused */, Vector3_t40  ___origin, Vector3_t40  ___direction, RaycastHit_t193 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" bool Physics_Raycast_m651 (Object_t * __this /* static, unused */, Ray_t88  ___ray, RaycastHit_t193 * ___hitInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2400 (Object_t * __this /* static, unused */, Ray_t88  ___ray, RaycastHit_t193 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t503* Physics_RaycastAll_m2329 (Object_t * __this /* static, unused */, Ray_t88  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t503* Physics_RaycastAll_m3379 (Object_t * __this /* static, unused */, Vector3_t40  ___origin, Vector3_t40  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t503* Physics_INTERNAL_CALL_RaycastAll_m3380 (Object_t * __this /* static, unused */, Vector3_t40 * ___origin, Vector3_t40 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
