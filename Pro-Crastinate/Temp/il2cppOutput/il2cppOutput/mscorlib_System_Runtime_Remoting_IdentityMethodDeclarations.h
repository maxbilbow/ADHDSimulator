#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Identity
struct Identity_t1629;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1579;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t1577;

// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern "C" void Identity__ctor_m9252 (Identity_t1629 * __this, String_t* ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C" Object_t * Identity_get_ChannelSink_m9253 (Identity_t1629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void Identity_set_ChannelSink_m9254 (Identity_t1629 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C" String_t* Identity_get_ObjectUri_m9255 (Identity_t1629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C" bool Identity_get_Disposed_m9256 (Identity_t1629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern "C" void Identity_set_Disposed_m9257 (Identity_t1629 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ClientDynamicProperties()
extern "C" DynamicPropertyCollection_t1577 * Identity_get_ClientDynamicProperties_m9258 (Identity_t1629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ServerDynamicProperties()
extern "C" DynamicPropertyCollection_t1577 * Identity_get_ServerDynamicProperties_m9259 (Identity_t1629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
