#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t509;
// UnityEngine.Collider2D
struct Collider2D_t142;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t179;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m3408 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Physics2D::get_gravity()
extern "C" Vector2_t44  Physics2D_get_gravity_m933 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::set_gravity(UnityEngine.Vector2)
extern "C" void Physics2D_set_gravity_m1022 (Object_t * __this /* static, unused */, Vector2_t44  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_get_gravity(UnityEngine.Vector2&)
extern "C" void Physics2D_INTERNAL_get_gravity_m3409 (Object_t * __this /* static, unused */, Vector2_t44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_set_gravity(UnityEngine.Vector2&)
extern "C" void Physics2D_INTERNAL_set_gravity_m3410 (Object_t * __this /* static, unused */, Vector2_t44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m3411 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t269 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m3412 (Object_t * __this /* static, unused */, Vector2_t44 * ___origin, Vector2_t44 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t269 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t269  Physics2D_Raycast_m2419 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" RaycastHit2D_t269  Physics2D_Raycast_m955 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t269  Physics2D_Raycast_m3413 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t509* Physics2D_RaycastAll_m2337 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t509* Physics2D_INTERNAL_CALL_RaycastAll_m3414 (Object_t * __this /* static, unused */, Vector2_t44 * ___origin, Vector2_t44 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" Collider2D_t142 * Physics2D_OverlapCircle_m553 (Object_t * __this /* static, unused */, Vector2_t44  ___point, float ___radius, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircle(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2D_t142 * Physics2D_INTERNAL_CALL_OverlapCircle_m3415 (Object_t * __this /* static, unused */, Vector2_t44 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" Collider2DU5BU5D_t179* Physics2D_OverlapCircleAll_m546 (Object_t * __this /* static, unused */, Vector2_t44  ___point, float ___radius, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2DU5BU5D_t179* Physics2D_INTERNAL_CALL_OverlapCircleAll_m3416 (Object_t * __this /* static, unused */, Vector2_t44 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
