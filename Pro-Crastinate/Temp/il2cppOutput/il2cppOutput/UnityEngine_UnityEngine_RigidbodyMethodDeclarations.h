#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody
struct Rigidbody_t105;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_velocity_m667 (Rigidbody_t105 * __this, Vector3_t40  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m3381 (Rigidbody_t105 * __this, Vector3_t40 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_angularVelocity_m668 (Rigidbody_t105 * __this, Vector3_t40  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m3382 (Rigidbody_t105 * __this, Vector3_t40 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C" float Rigidbody_get_drag_m621 (Rigidbody_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C" void Rigidbody_set_drag_m623 (Rigidbody_t105 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C" float Rigidbody_get_angularDrag_m622 (Rigidbody_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C" void Rigidbody_set_angularDrag_m624 (Rigidbody_t105 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C" bool Rigidbody_get_isKinematic_m638 (Rigidbody_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m639 (Rigidbody_t105 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
