#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t1821;
// System.Delegate
struct Delegate_t520;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m10698 (DelegateEntry_t1821 * __this, Delegate_t520 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t520 * DelegateEntry_DeserializeDelegate_m10699 (DelegateEntry_t1821 * __this, SerializationInfo_t818 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
