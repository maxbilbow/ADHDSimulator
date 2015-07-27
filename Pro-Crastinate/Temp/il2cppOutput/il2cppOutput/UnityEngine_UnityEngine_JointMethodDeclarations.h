#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Joint
struct Joint_t646;
// UnityEngine.Rigidbody
struct Rigidbody_t108;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C" Rigidbody_t108 * Joint_get_connectedBody_m630 (Joint_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C" void Joint_set_connectedBody_m638 (Joint_t646 * __this, Rigidbody_t108 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C" void Joint_set_anchor_m649 (Joint_t646 * __this, Vector3_t42  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C" void Joint_INTERNAL_set_anchor_m3406 (Joint_t646 * __this, Vector3_t42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
