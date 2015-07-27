#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t1627;
// System.MarshalByRefObject
struct MarshalByRefObject_t1134;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1621;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1636;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1576;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t1911;

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C" MarshalByRefObject_t1134 * ProxyAttribute_CreateInstance_m9222 (ProxyAttribute_t1627 * __this, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C" RealProxy_t1621 * ProxyAttribute_CreateProxy_m9223 (ProxyAttribute_t1627 * __this, ObjRef_t1636 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1576 * ___serverContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m9224 (ProxyAttribute_t1627 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m9225 (ProxyAttribute_t1627 * __this, Context_t1576 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
