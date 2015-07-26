#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1103;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1090;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
extern "C" void WebHeaderCollection__ctor_m5375 (WebHeaderCollection_t1103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection__ctor_m5376 (WebHeaderCollection_t1103 * __this, SerializationInfo_t809 * ___serializationInfo, StreamingContext_t810  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
extern "C" void WebHeaderCollection__ctor_m5377 (WebHeaderCollection_t1103 * __this, bool ___internallyCreated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
extern "C" void WebHeaderCollection__cctor_m5378 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m5379 (WebHeaderCollection_t1103 * __this, SerializationInfo_t809 * ___serializationInfo, StreamingContext_t810  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C" void WebHeaderCollection_Add_m5380 (WebHeaderCollection_t1103 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C" void WebHeaderCollection_AddWithoutValidate_m5381 (WebHeaderCollection_t1103 * __this, String_t* ___headerName, String_t* ___headerValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C" bool WebHeaderCollection_IsRestricted_m5382 (Object_t * __this /* static, unused */, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C" void WebHeaderCollection_OnDeserialization_m5383 (WebHeaderCollection_t1103 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
extern "C" String_t* WebHeaderCollection_ToString_m5384 (WebHeaderCollection_t1103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_GetObjectData_m5385 (WebHeaderCollection_t1103 * __this, SerializationInfo_t809 * ___serializationInfo, StreamingContext_t810  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
extern "C" int32_t WebHeaderCollection_get_Count_m5386 (WebHeaderCollection_t1103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
extern "C" KeysCollection_t1090 * WebHeaderCollection_get_Keys_m5387 (WebHeaderCollection_t1103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern "C" String_t* WebHeaderCollection_Get_m5388 (WebHeaderCollection_t1103 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C" String_t* WebHeaderCollection_GetKey_m5389 (WebHeaderCollection_t1103 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern "C" Object_t * WebHeaderCollection_GetEnumerator_m5390 (WebHeaderCollection_t1103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C" bool WebHeaderCollection_IsHeaderValue_m5391 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C" bool WebHeaderCollection_IsHeaderName_m5392 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
