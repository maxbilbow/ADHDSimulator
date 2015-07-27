#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t777;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Delegate
struct Delegate_t520;

// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m3948 (BaseInvokableCall_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void BaseInvokableCall__ctor_m3949 (BaseInvokableCall_t777 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" bool BaseInvokableCall_AllowInvoke_m3950 (Object_t * __this /* static, unused */, Delegate_t520 * ___delegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
