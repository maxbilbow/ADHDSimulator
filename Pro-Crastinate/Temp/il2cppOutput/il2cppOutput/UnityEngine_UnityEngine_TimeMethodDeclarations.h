#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Time
struct Time_t632;

// System.Single UnityEngine.Time::get_time()
extern "C" float Time_get_time_m676 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m519 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_fixedTime()
extern "C" float Time_get_fixedTime_m424 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m2312 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m2338 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_timeScale()
extern "C" float Time_get_timeScale_m438 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" void Time_set_timeScale_m983 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" int32_t Time_get_frameCount_m556 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" float Time_get_realtimeSinceStartup_m606 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
