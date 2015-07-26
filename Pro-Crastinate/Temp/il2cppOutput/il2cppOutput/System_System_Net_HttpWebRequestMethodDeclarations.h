#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t982;
// System.Uri
struct Uri_t692;
// System.Net.ServicePoint
struct ServicePoint_t1064;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m5312 (HttpWebRequest_t982 * __this, Uri_t692 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m5313 (HttpWebRequest_t982 * __this, SerializationInfo_t809 * ___serializationInfo, StreamingContext_t810  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m5314 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m5315 (HttpWebRequest_t982 * __this, SerializationInfo_t809 * ___serializationInfo, StreamingContext_t810  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t692 * HttpWebRequest_get_Address_m5159 (HttpWebRequest_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1064 * HttpWebRequest_get_ServicePoint_m5163 (HttpWebRequest_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1064 * HttpWebRequest_GetServicePoint_m5316 (HttpWebRequest_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m5317 (HttpWebRequest_t982 * __this, SerializationInfo_t809 * ___serializationInfo, StreamingContext_t810  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
