#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t995;
// System.Uri
struct Uri_t701;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Net.ServicePoint
struct ServicePoint_t1076;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m5337 (HttpWebRequest_t995 * __this, Uri_t701 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m5338 (HttpWebRequest_t995 * __this, SerializationInfo_t818 * ___serializationInfo, StreamingContext_t819  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m5339 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m5340 (HttpWebRequest_t995 * __this, SerializationInfo_t818 * ___serializationInfo, StreamingContext_t819  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t701 * HttpWebRequest_get_Address_m5184 (HttpWebRequest_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1076 * HttpWebRequest_get_ServicePoint_m5188 (HttpWebRequest_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1076 * HttpWebRequest_GetServicePoint_m5341 (HttpWebRequest_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m5342 (HttpWebRequest_t995 * __this, SerializationInfo_t818 * ___serializationInfo, StreamingContext_t819  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
