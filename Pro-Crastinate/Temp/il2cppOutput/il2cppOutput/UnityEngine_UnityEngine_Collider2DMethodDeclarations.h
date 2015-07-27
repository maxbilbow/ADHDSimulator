#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider2D
struct Collider2D_t142;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t49;
// UnityEngine.PhysicsMaterial2D
struct PhysicsMaterial2D_t270;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t49 * Collider2D_get_attachedRigidbody_m3421 (Collider2D_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
extern "C" Bounds_t260  Collider2D_get_bounds_m901 (Collider2D_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider2D::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Collider2D_INTERNAL_get_bounds_m3422 (Collider2D_t142 * __this, Bounds_t260 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PhysicsMaterial2D UnityEngine.Collider2D::get_sharedMaterial()
extern "C" PhysicsMaterial2D_t270 * Collider2D_get_sharedMaterial_m961 (Collider2D_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider2D::set_sharedMaterial(UnityEngine.PhysicsMaterial2D)
extern "C" void Collider2D_set_sharedMaterial_m960 (Collider2D_t142 * __this, PhysicsMaterial2D_t270 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
