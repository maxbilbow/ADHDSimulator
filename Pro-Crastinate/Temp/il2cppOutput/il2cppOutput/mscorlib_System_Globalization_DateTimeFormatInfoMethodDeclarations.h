﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1392;
// System.String[]
struct StringU5BU5D_t31;
// System.String
struct String_t;
// System.Globalization.Calendar
struct Calendar_t1386;
// System.IFormatProvider
struct IFormatProvider_t1880;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
extern "C" void DateTimeFormatInfo__ctor_m7900 (DateTimeFormatInfo_t1392 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
extern "C" void DateTimeFormatInfo__ctor_m7901 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
extern "C" void DateTimeFormatInfo__cctor_m7902 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
extern "C" DateTimeFormatInfo_t1392 * DateTimeFormatInfo_GetInstance_m7903 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
extern "C" bool DateTimeFormatInfo_get_IsReadOnly_m7904 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
extern "C" DateTimeFormatInfo_t1392 * DateTimeFormatInfo_ReadOnly_m7905 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t1392 * ___dtfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
extern "C" Object_t * DateTimeFormatInfo_Clone_m7906 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
extern "C" Object_t * DateTimeFormatInfo_GetFormat_m7907 (DateTimeFormatInfo_t1392 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m7908 (DateTimeFormatInfo_t1392 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetEraName_m7909 (DateTimeFormatInfo_t1392 * __this, int32_t ___era, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetMonthName_m7910 (DateTimeFormatInfo_t1392 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
extern "C" StringU5BU5D_t31* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m7911 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
extern "C" StringU5BU5D_t31* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m7912 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
extern "C" StringU5BU5D_t31* DateTimeFormatInfo_get_RawDayNames_m7913 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
extern "C" StringU5BU5D_t31* DateTimeFormatInfo_get_RawMonthNames_m7914 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_AMDesignator_m7915 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_PMDesignator_m7916 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
extern "C" String_t* DateTimeFormatInfo_get_DateSeparator_m7917 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
extern "C" String_t* DateTimeFormatInfo_get_TimeSeparator_m7918 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongDatePattern_m7919 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortDatePattern_m7920 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortTimePattern_m7921 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongTimePattern_m7922 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
extern "C" String_t* DateTimeFormatInfo_get_MonthDayPattern_m7923 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
extern "C" String_t* DateTimeFormatInfo_get_YearMonthPattern_m7924 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_FullDateTimePattern_m7925 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
extern "C" DateTimeFormatInfo_t1392 * DateTimeFormatInfo_get_CurrentInfo_m7926 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C" DateTimeFormatInfo_t1392 * DateTimeFormatInfo_get_InvariantInfo_m7927 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
extern "C" Calendar_t1386 * DateTimeFormatInfo_get_Calendar_m7928 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
extern "C" void DateTimeFormatInfo_set_Calendar_m7929 (DateTimeFormatInfo_t1392 * __this, Calendar_t1386 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
extern "C" String_t* DateTimeFormatInfo_get_RFC1123Pattern_m7930 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
extern "C" String_t* DateTimeFormatInfo_get_RoundtripPattern_m7931 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m7932 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m7933 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
extern "C" StringU5BU5D_t31* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m7934 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
extern "C" void DateTimeFormatInfo_FillAllDateTimePatterns_m7935 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
extern "C" StringU5BU5D_t31* DateTimeFormatInfo_GetAllRawDateTimePatterns_m7936 (DateTimeFormatInfo_t1392 * __this, uint16_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetDayName_m7937 (DateTimeFormatInfo_t1392 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m7938 (DateTimeFormatInfo_t1392 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
extern "C" void DateTimeFormatInfo_FillInvariantPatterns_m7939 (DateTimeFormatInfo_t1392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
extern "C" StringU5BU5D_t31* DateTimeFormatInfo_PopulateCombinedList_m7940 (DateTimeFormatInfo_t1392 * __this, StringU5BU5D_t31* ___dates, StringU5BU5D_t31* ___times, const MethodInfo* method) IL2CPP_METHOD_ATTR;
