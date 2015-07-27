#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t1630;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1637;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C" void RemotingProxy__ctor_m9235 (RemotingProxy_t1630 * __this, Type_t * ___type, ClientIdentity_t1637 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C" void RemotingProxy__ctor_m9236 (RemotingProxy_t1630 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t148* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern "C" void RemotingProxy__cctor_m9237 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern "C" String_t* RemotingProxy_get_TypeName_m9238 (RemotingProxy_t1630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern "C" void RemotingProxy_Finalize_m9239 (RemotingProxy_t1630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
