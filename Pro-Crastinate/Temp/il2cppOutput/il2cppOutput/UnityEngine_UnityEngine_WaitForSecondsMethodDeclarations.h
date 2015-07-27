#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t202;
struct WaitForSeconds_t202_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m673 (WaitForSeconds_t202 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WaitForSeconds_t202_marshal(const WaitForSeconds_t202& unmarshaled, WaitForSeconds_t202_marshaled& marshaled);
extern "C" void WaitForSeconds_t202_marshal_back(const WaitForSeconds_t202_marshaled& marshaled, WaitForSeconds_t202& unmarshaled);
extern "C" void WaitForSeconds_t202_marshal_cleanup(WaitForSeconds_t202_marshaled& marshaled);
