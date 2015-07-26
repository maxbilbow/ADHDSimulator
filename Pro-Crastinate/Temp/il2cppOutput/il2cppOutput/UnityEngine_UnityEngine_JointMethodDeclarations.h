#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Joint
struct Joint_t638;
// UnityEngine.Rigidbody
struct Rigidbody_t105;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C" Rigidbody_t105 * Joint_get_connectedBody_m620 (Joint_t638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C" void Joint_set_connectedBody_m628 (Joint_t638 * __this, Rigidbody_t105 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C" void Joint_set_anchor_m640 (Joint_t638 * __this, Vector3_t40  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C" void Joint_INTERNAL_set_anchor_m3383 (Joint_t638 * __this, Vector3_t40 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
