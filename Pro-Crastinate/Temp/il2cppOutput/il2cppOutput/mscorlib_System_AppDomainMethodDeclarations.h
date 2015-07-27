#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t820;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t821;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1255;
// System.Security.Policy.Evidence
struct Evidence_t1486;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1576;
// System.Object
struct Object_t;

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_add_UnhandledException_m4005 (AppDomain_t820 * __this, UnhandledExceptionEventHandler_t821 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_remove_UnhandledException_m10331 (AppDomain_t820 * __this, UnhandledExceptionEventHandler_t821 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m10332 (AppDomain_t820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t820 * AppDomain_getCurDomain_m10333 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t820 * AppDomain_get_CurrentDomain_m4003 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1255 * AppDomain_LoadAssembly_m10334 (AppDomain_t820 * __this, String_t* ___assemblyRef, Evidence_t1486 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t1255 * AppDomain_Load_m10335 (AppDomain_t820 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1255 * AppDomain_Load_m10336 (AppDomain_t820 * __this, String_t* ___assemblyString, Evidence_t1486 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1576 * AppDomain_InternalSetContext_m10337 (Object_t * __this /* static, unused */, Context_t1576 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1576 * AppDomain_InternalGetContext_m10338 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1576 * AppDomain_InternalGetDefaultContext_m10339 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m10340 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m10341 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m10342 (AppDomain_t820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C" Assembly_t1255 * AppDomain_DoTypeResolve_m10343 (AppDomain_t820 * __this, Object_t * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
