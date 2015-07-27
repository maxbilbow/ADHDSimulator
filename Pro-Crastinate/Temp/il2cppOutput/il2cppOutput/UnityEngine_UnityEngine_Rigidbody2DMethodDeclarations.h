#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t49;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2D.h"

// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C" Vector2_t44  Rigidbody2D_get_position_m970 (Rigidbody2D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_position(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_position_m3417 (Rigidbody2D_t49 * __this, Vector2_t44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_rotation()
extern "C" float Rigidbody2D_get_rotation_m969 (Rigidbody2D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" Vector2_t44  Rigidbody2D_get_velocity_m550 (Rigidbody2D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m556 (Rigidbody2D_t49 * __this, Vector2_t44  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m3418 (Rigidbody2D_t49 * __this, Vector2_t44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m3419 (Rigidbody2D_t49 * __this, Vector2_t44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_mass()
extern "C" float Rigidbody2D_get_mass_m912 (Rigidbody2D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_mass(System.Single)
extern "C" void Rigidbody2D_set_mass_m913 (Rigidbody2D_t49 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_drag()
extern "C" float Rigidbody2D_get_drag_m916 (Rigidbody2D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_drag(System.Single)
extern "C" void Rigidbody2D_set_drag_m917 (Rigidbody2D_t49 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_angularDrag()
extern "C" float Rigidbody2D_get_angularDrag_m914 (Rigidbody2D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_angularDrag(System.Single)
extern "C" void Rigidbody2D_set_angularDrag_m915 (Rigidbody2D_t49 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody2D::get_isKinematic()
extern "C" bool Rigidbody2D_get_isKinematic_m894 (Rigidbody2D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
extern "C" void Rigidbody2D_set_isKinematic_m891 (Rigidbody2D_t49 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForce_m557 (Rigidbody2D_t49 * __this, Vector2_t44  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m3420 (Object_t * __this /* static, unused */, Rigidbody2D_t49 * ___self, Vector2_t44 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
