#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t1845;
// System.Globalization.DaylightTime
struct DaylightTime_t1396;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m10986 (TimeZone_t1845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m10987 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1845 * TimeZone_get_CurrentTimeZone_m10988 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10989 (TimeZone_t1845 * __this, DateTime_t578  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10990 (Object_t * __this /* static, unused */, DateTime_t578  ___time, DaylightTime_t1396 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t578  TimeZone_ToLocalTime_m10991 (TimeZone_t1845 * __this, DateTime_t578  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t578  TimeZone_ToUniversalTime_m10992 (TimeZone_t1845 * __this, DateTime_t578  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t1144  TimeZone_GetLocalTimeDiff_m10993 (TimeZone_t1845 * __this, DateTime_t578  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t1144  TimeZone_GetLocalTimeDiff_m10994 (TimeZone_t1845 * __this, DateTime_t578  ___time, TimeSpan_t1144  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
