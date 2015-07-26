#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Joint2D
struct Joint2D_t641;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t46;

// UnityEngine.Rigidbody2D UnityEngine.Joint2D::get_connectedBody()
extern "C" Rigidbody2D_t46 * Joint2D_get_connectedBody_m941 (Joint2D_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint2D::set_connectedBody(UnityEngine.Rigidbody2D)
extern "C" void Joint2D_set_connectedBody_m942 (Joint2D_t641 * __this, Rigidbody2D_t46 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
