#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1597;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1607;
// System.Reflection.MethodBase
struct MethodBase_t163;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t154;

// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t148* MonoMethodMessage_get_Args_m9163 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1607 * MonoMethodMessage_get_LogicalCallContext_m9164 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t163 * MonoMethodMessage_get_MethodBase_m9165 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern "C" String_t* MonoMethodMessage_get_MethodName_m9166 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m9167 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern "C" String_t* MonoMethodMessage_get_TypeName_m9168 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m9169 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m9170 (MonoMethodMessage_t1597 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t154 * MonoMethodMessage_get_Exception_m9171 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m9172 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t148* MonoMethodMessage_get_OutArgs_m9173 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m9174 (MonoMethodMessage_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
