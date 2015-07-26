#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t1121;
// System.Uri
struct Uri_t692;
// System.String[]
struct StringU5BU5D_t31;
// System.Net.ICredentials
struct ICredentials_t1120;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m5393 (WebProxy_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m5394 (WebProxy_t1121 * __this, Uri_t692 * ___address, bool ___bypassOnLocal, StringU5BU5D_t31* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m5395 (WebProxy_t1121 * __this, SerializationInfo_t809 * ___serializationInfo, StreamingContext_t810  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m5396 (WebProxy_t1121 * __this, SerializationInfo_t809 * ___serializationInfo, StreamingContext_t810  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m5397 (WebProxy_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t692 * WebProxy_GetProxy_m5398 (WebProxy_t1121 * __this, Uri_t692 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m5399 (WebProxy_t1121 * __this, Uri_t692 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m5400 (WebProxy_t1121 * __this, SerializationInfo_t809 * ___serializationInfo, StreamingContext_t810  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m5401 (WebProxy_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
