﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1645;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1592;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1652;
// System.Object
struct Object_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1653;
// System.Int32[]
struct Int32U5BU5D_t1025;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectManager__ctor_m9379 (ObjectManager_t1645 * __this, Object_t * ___selector, StreamingContext_t810  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern "C" void ObjectManager_DoFixups_m9380 (ObjectManager_t1645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern "C" ObjectRecord_t1652 * ObjectManager_GetObjectRecord_m9381 (ObjectManager_t1645 * __this, int64_t ___objectID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern "C" Object_t * ObjectManager_GetObject_m9382 (ObjectManager_t1645 * __this, int64_t ___objectID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern "C" void ObjectManager_RaiseDeserializationEvent_m9383 (ObjectManager_t1645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern "C" void ObjectManager_RaiseOnDeserializingEvent_m9384 (ObjectManager_t1645 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern "C" void ObjectManager_RaiseOnDeserializedEvent_m9385 (ObjectManager_t1645 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C" void ObjectManager_AddFixup_m9386 (ObjectManager_t1645 * __this, BaseFixupRecord_t1653 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern "C" void ObjectManager_RecordArrayElementFixup_m9387 (ObjectManager_t1645 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern "C" void ObjectManager_RecordArrayElementFixup_m9388 (ObjectManager_t1645 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t1025* ___indices, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern "C" void ObjectManager_RecordDelayedFixup_m9389 (ObjectManager_t1645 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern "C" void ObjectManager_RecordFixup_m9390 (ObjectManager_t1645 * __this, int64_t ___objectToBeFixed, MemberInfo_t * ___member, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern "C" void ObjectManager_RegisterObjectInternal_m9391 (ObjectManager_t1645 * __this, Object_t * ___obj, ObjectRecord_t1652 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C" void ObjectManager_RegisterObject_m9392 (ObjectManager_t1645 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t809 * ___info, int64_t ___idOfContainingObj, MemberInfo_t * ___member, Int32U5BU5D_t1025* ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
