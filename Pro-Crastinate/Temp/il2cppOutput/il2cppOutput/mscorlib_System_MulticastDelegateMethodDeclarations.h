#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t384;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1882;
// System.Delegate
struct Delegate_t513;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m6722 (MulticastDelegate_t384 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m6723 (MulticastDelegate_t384 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m6724 (MulticastDelegate_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1882* MulticastDelegate_GetInvocationList_m6725 (MulticastDelegate_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t513 * MulticastDelegate_CombineImpl_m6726 (MulticastDelegate_t384 * __this, Delegate_t513 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6727 (MulticastDelegate_t384 * __this, MulticastDelegate_t384 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t384 * MulticastDelegate_KPM_m6728 (Object_t * __this /* static, unused */, MulticastDelegate_t384 * ___needle, MulticastDelegate_t384 * ___haystack, MulticastDelegate_t384 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t513 * MulticastDelegate_RemoveImpl_m6729 (MulticastDelegate_t384 * __this, Delegate_t513 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
