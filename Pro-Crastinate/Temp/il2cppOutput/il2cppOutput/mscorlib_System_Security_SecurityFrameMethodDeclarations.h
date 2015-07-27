#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t1753;
// System.Array
struct Array_t;
// System.Reflection.Assembly
struct Assembly_t1255;
// System.AppDomain
struct AppDomain_t820;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t920;
// System.Security.SecurityFrame
#include "mscorlib_System_Security_SecurityFrame.h"

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame__ctor_m9960 (SecurityFrame_t1754 * __this, RuntimeSecurityFrame_t1753 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C" Array_t * SecurityFrame__GetSecurityStack_m9961 (Object_t * __this /* static, unused */, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame_InitFromRuntimeFrame_m9962 (SecurityFrame_t1754 * __this, RuntimeSecurityFrame_t1753 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C" Assembly_t1255 * SecurityFrame_get_Assembly_m9963 (SecurityFrame_t1754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C" AppDomain_t820 * SecurityFrame_get_Domain_m9964 (SecurityFrame_t1754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C" String_t* SecurityFrame_ToString_m9965 (SecurityFrame_t1754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C" ArrayList_t920 * SecurityFrame_GetStack_m9966 (Object_t * __this /* static, unused */, int32_t ___skipFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
