#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t46;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2D.h"

// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C" Vector2_t42  Rigidbody2D_get_position_m957 (Rigidbody2D_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_position(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_position_m3394 (Rigidbody2D_t46 * __this, Vector2_t42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_rotation()
extern "C" float Rigidbody2D_get_rotation_m956 (Rigidbody2D_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" Vector2_t42  Rigidbody2D_get_velocity_m541 (Rigidbody2D_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m547 (Rigidbody2D_t46 * __this, Vector2_t42  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m3395 (Rigidbody2D_t46 * __this, Vector2_t42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m3396 (Rigidbody2D_t46 * __this, Vector2_t42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_mass()
extern "C" float Rigidbody2D_get_mass_m898 (Rigidbody2D_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_mass(System.Single)
extern "C" void Rigidbody2D_set_mass_m899 (Rigidbody2D_t46 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_drag()
extern "C" float Rigidbody2D_get_drag_m902 (Rigidbody2D_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_drag(System.Single)
extern "C" void Rigidbody2D_set_drag_m903 (Rigidbody2D_t46 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_angularDrag()
extern "C" float Rigidbody2D_get_angularDrag_m900 (Rigidbody2D_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_angularDrag(System.Single)
extern "C" void Rigidbody2D_set_angularDrag_m901 (Rigidbody2D_t46 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody2D::get_isKinematic()
extern "C" bool Rigidbody2D_get_isKinematic_m877 (Rigidbody2D_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
extern "C" void Rigidbody2D_set_isKinematic_m874 (Rigidbody2D_t46 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForce_m548 (Rigidbody2D_t46 * __this, Vector2_t42  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m3397 (Object_t * __this /* static, unused */, Rigidbody2D_t46 * ___self, Vector2_t42 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
