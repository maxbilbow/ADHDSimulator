#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t193;
// UnityEngine.Collider
struct Collider_t141;
// UnityEngine.Rigidbody
struct Rigidbody_t105;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t40  RaycastHit_get_point_m611 (RaycastHit_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t40  RaycastHit_get_normal_m2332 (RaycastHit_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m644 (RaycastHit_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t141 * RaycastHit_get_collider_m2331 (RaycastHit_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t105 * RaycastHit_get_rigidbody_m637 (RaycastHit_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
