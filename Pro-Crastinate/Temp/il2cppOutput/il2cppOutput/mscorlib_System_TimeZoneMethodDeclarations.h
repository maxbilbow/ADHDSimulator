#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t1868;
// System.Globalization.DaylightTime
struct DaylightTime_t1408;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m11067 (TimeZone_t1868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m11068 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1868 * TimeZone_get_CurrentTimeZone_m11069 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m11070 (TimeZone_t1868 * __this, DateTime_t586  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m11071 (Object_t * __this /* static, unused */, DateTime_t586  ___time, DaylightTime_t1408 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t586  TimeZone_ToLocalTime_m11072 (TimeZone_t1868 * __this, DateTime_t586  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t586  TimeZone_ToUniversalTime_m11073 (TimeZone_t1868 * __this, DateTime_t586  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t1156  TimeZone_GetLocalTimeDiff_m11074 (TimeZone_t1868 * __this, DateTime_t586  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t1156  TimeZone_GetLocalTimeDiff_m11075 (TimeZone_t1868 * __this, DateTime_t586  ___time, TimeSpan_t1156  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
