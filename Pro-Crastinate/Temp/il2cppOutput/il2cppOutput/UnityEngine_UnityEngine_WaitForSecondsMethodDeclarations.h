#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t199;
struct WaitForSeconds_t199_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m664 (WaitForSeconds_t199 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t199_marshal(const WaitForSeconds_t199& unmarshaled, WaitForSeconds_t199_marshaled& marshaled);
void WaitForSeconds_t199_marshal_back(const WaitForSeconds_t199_marshaled& marshaled, WaitForSeconds_t199& unmarshaled);
void WaitForSeconds_t199_marshal_cleanup(WaitForSeconds_t199_marshaled& marshaled);
