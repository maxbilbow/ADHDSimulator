﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RMX.IRMXObject
struct IRMXObject_t136;
// System.String
struct String_t;
// System.Enum
struct Enum_t6;

// System.Void RMX.Bugger::.cctor()
extern "C" void Bugger__cctor_m22 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.Bugger::AddToWatchList(RMX.IRMXObject)
extern "C" void Bugger_AddToWatchList_m23 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.Bugger::LateLogs()
extern "C" void Bugger_LateLogs_m24 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.Bugger::get_Last()
extern "C" String_t* Bugger_get_Last_m25 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.Bugger::AddLateLog(System.Enum,System.String)
extern "C" void Bugger_AddLateLog_m26 (Object_t * __this /* static, unused */, Enum_t6 * ___feature, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.Bugger::Stack(System.String,System.Int32)
extern "C" String_t* Bugger_Stack_m27 (Object_t * __this /* static, unused */, String_t* ___message, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.Bugger::WillLog(System.Enum,System.String)
extern "C" bool Bugger_WillLog_m28 (Object_t * __this /* static, unused */, Enum_t6 * ___feature, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.Bugger::get_timesUp()
extern "C" bool Bugger_get_timesUp_m29 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RMX.Bugger::get_timeRemaining()
extern "C" int32_t Bugger_get_timeRemaining_m30 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.Bugger::AddToQueue(System.String)
extern "C" void Bugger_AddToQueue_m31 (Object_t * __this /* static, unused */, String_t* ___log, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.Bugger::Initialize()
extern "C" void Bugger_Initialize_m32 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;