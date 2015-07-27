#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t780;
// UnityEngine.Object
struct Object_t76;
struct Object_t76_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t776;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t777;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t785;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C" void PersistentCall__ctor_m3955 (PersistentCall_t780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t76 * PersistentCall_get_target_m3956 (PersistentCall_t780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m3957 (PersistentCall_t780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m3958 (PersistentCall_t780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t776 * PersistentCall_get_arguments_m3959 (PersistentCall_t780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C" bool PersistentCall_IsValid_m3960 (PersistentCall_t780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C" BaseInvokableCall_t777 * PersistentCall_GetRuntimeCall_m3961 (PersistentCall_t780 * __this, UnityEventBase_t785 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C" BaseInvokableCall_t777 * PersistentCall_GetObjectCall_m3962 (Object_t * __this /* static, unused */, Object_t76 * ___target, MethodInfo_t * ___method, ArgumentCache_t776 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
