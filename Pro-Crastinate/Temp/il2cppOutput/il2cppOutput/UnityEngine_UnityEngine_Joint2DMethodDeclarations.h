﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Joint2D
struct Joint2D_t649;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t49;

// UnityEngine.Rigidbody2D UnityEngine.Joint2D::get_connectedBody()
extern "C" Rigidbody2D_t49 * Joint2D_get_connectedBody_m951 (Joint2D_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint2D::set_connectedBody(UnityEngine.Rigidbody2D)
extern "C" void Joint2D_set_connectedBody_m952 (Joint2D_t649 * __this, Rigidbody2D_t49 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;