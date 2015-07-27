#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Timer
struct Timer_t1590;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Timer::.cctor()
extern "C" void Timer__cctor_m10303 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C" bool Timer_Change_m10304 (Timer_t1590 * __this, TimeSpan_t1156  ___dueTime, TimeSpan_t1156  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C" void Timer_Dispose_m10305 (Timer_t1590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C" bool Timer_Change_m10306 (Timer_t1590 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
