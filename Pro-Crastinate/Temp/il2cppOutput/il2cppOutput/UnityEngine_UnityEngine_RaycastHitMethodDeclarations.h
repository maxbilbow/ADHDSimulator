#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t144;
// UnityEngine.Rigidbody
struct Rigidbody_t108;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t42  RaycastHit_get_point_m621 (RaycastHit_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t42  RaycastHit_get_normal_m2350 (RaycastHit_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m653 (RaycastHit_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t144 * RaycastHit_get_collider_m2349 (RaycastHit_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t108 * RaycastHit_get_rigidbody_m644 (RaycastHit_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
