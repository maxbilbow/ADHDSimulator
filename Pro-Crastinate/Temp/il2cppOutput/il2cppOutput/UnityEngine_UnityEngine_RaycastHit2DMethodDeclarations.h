#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider2D
struct Collider2D_t142;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t49;
// UnityEngine.Transform
struct Transform_t41;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t44  RaycastHit2D_get_point_m963 (RaycastHit2D_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t44  RaycastHit2D_get_normal_m2341 (RaycastHit2D_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_distance()
extern "C" float RaycastHit2D_get_distance_m973 (RaycastHit2D_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m2420 (RaycastHit2D_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t142 * RaycastHit2D_get_collider_m2338 (RaycastHit2D_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t49 * RaycastHit2D_get_rigidbody_m958 (RaycastHit2D_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t41 * RaycastHit2D_get_transform_m966 (RaycastHit2D_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
extern "C" bool RaycastHit2D_op_Implicit_m957 (Object_t * __this /* static, unused */, RaycastHit2D_t269  ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
