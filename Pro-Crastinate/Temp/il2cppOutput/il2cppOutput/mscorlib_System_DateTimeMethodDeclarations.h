#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTime
struct DateTime_t578;
// System.IFormatProvider
struct IFormatProvider_t1880;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t143;
// System.String[]
struct StringU5BU5D_t31;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1392;
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.DateTime/Which
#include "mscorlib_System_DateTime_Which.h"
// System.Globalization.DateTimeStyles
#include "mscorlib_System_Globalization_DateTimeStyles.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTime::.ctor(System.Int64)
extern "C" void DateTime__ctor_m10529 (DateTime_t578 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m10530 (DateTime_t578 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m4105 (DateTime_t578 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___millisecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Boolean,System.TimeSpan)
extern "C" void DateTime__ctor_m10531 (DateTime_t578 * __this, bool ___check, TimeSpan_t1144  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
extern "C" void DateTime__ctor_m10532 (DateTime_t578 * __this, int64_t ___ticks, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.cctor()
extern "C" void DateTime__cctor_m10533 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool DateTime_System_IConvertible_ToBoolean_m10534 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DateTime::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t DateTime_System_IConvertible_ToByte_m10535 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DateTime::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t DateTime_System_IConvertible_ToChar_m10536 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t578  DateTime_System_IConvertible_ToDateTime_m10537 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DateTime::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t836  DateTime_System_IConvertible_ToDecimal_m10538 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double DateTime_System_IConvertible_ToDouble_m10539 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DateTime::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t DateTime_System_IConvertible_ToInt16_m10540 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t DateTime_System_IConvertible_ToInt32_m10541 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t DateTime_System_IConvertible_ToInt64_m10542 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DateTime::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t DateTime_System_IConvertible_ToSByte_m10543 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DateTime::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float DateTime_System_IConvertible_ToSingle_m10544 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DateTime::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * DateTime_System_IConvertible_ToType_m10545 (DateTime_t578 * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DateTime::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t DateTime_System_IConvertible_ToUInt16_m10546 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DateTime::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t DateTime_System_IConvertible_ToUInt32_m10547 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DateTime::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t DateTime_System_IConvertible_ToUInt64_m10548 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::AbsoluteDays(System.Int32,System.Int32,System.Int32)
extern "C" int32_t DateTime_AbsoluteDays_m10549 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::FromTicks(System.DateTime/Which)
extern "C" int32_t DateTime_FromTicks_m10550 (DateTime_t578 * __this, int32_t ___what, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
extern "C" int32_t DateTime_get_Month_m10551 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
extern "C" int32_t DateTime_get_Day_m10552 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
extern "C" int32_t DateTime_get_DayOfWeek_m10553 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
extern "C" int32_t DateTime_get_Hour_m10554 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
extern "C" int32_t DateTime_get_Minute_m10555 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
extern "C" int32_t DateTime_get_Second_m10556 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetTimeMonotonic()
extern "C" int64_t DateTime_GetTimeMonotonic_m10557 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
extern "C" int64_t DateTime_GetNow_m10558 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C" DateTime_t578  DateTime_get_Now_m3993 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C" int64_t DateTime_get_Ticks_m5158 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Today()
extern "C" DateTime_t578  DateTime_get_Today_m10559 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
extern "C" DateTime_t578  DateTime_get_UtcNow_m5121 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
extern "C" int32_t DateTime_get_Year_m10560 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C" int32_t DateTime_get_Kind_m10561 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C" DateTime_t578  DateTime_Add_m10562 (DateTime_t578 * __this, TimeSpan_t1144  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
extern "C" DateTime_t578  DateTime_AddTicks_m10563 (DateTime_t578 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
extern "C" DateTime_t578  DateTime_AddMilliseconds_m6107 (DateTime_t578 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C" DateTime_t578  DateTime_AddSeconds_m4106 (DateTime_t578 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
extern "C" int32_t DateTime_Compare_m10564 (Object_t * __this /* static, unused */, DateTime_t578  ___t1, DateTime_t578  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.Object)
extern "C" int32_t DateTime_CompareTo_m10565 (DateTime_t578 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
extern "C" int32_t DateTime_CompareTo_m10566 (DateTime_t578 * __this, DateTime_t578  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.DateTime)
extern "C" bool DateTime_Equals_m10567 (DateTime_t578 * __this, DateTime_t578  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromBinary(System.Int64)
extern "C" DateTime_t578  DateTime_FromBinary_m10568 (Object_t * __this /* static, unused */, int64_t ___dateData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C" DateTime_t578  DateTime_SpecifyKind_m10569 (Object_t * __this /* static, unused */, DateTime_t578  ___value, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C" int32_t DateTime_DaysInMonth_m10570 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.Object)
extern "C" bool DateTime_Equals_m10571 (DateTime_t578 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckDateTimeKind(System.DateTimeKind)
extern "C" void DateTime_CheckDateTimeKind_m10572 (DateTime_t578 * __this, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
extern "C" int32_t DateTime_GetHashCode_m10573 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLeapYear(System.Int32)
extern "C" bool DateTime_IsLeapYear_m10574 (Object_t * __this /* static, unused */, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
extern "C" DateTime_t578  DateTime_Parse_m10575 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t578  DateTime_Parse_m10576 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::CoreParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&,System.DateTimeOffset&,System.Boolean,System.Exception&)
extern "C" bool DateTime_CoreParse_m10577 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, DateTime_t578 * ___result, DateTimeOffset_t851 * ___dto, bool ___setExceptionOnError, Exception_t143 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::YearMonthDayFormats(System.Globalization.DateTimeFormatInfo,System.Boolean,System.Exception&)
extern "C" StringU5BU5D_t31* DateTime_YearMonthDayFormats_m10578 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t1392 * ___dfi, bool ___setExceptionOnError, Exception_t143 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseNumber(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C" int32_t DateTime__ParseNumber_m10579 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___min_digits, int32_t ___digits, bool ___leadingzero, bool ___sloppy_parsing, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseEnum(System.String,System.Int32,System.String[],System.String[],System.Boolean,System.Int32&)
extern "C" int32_t DateTime__ParseEnum_m10580 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, StringU5BU5D_t31* ___values, StringU5BU5D_t31* ___invValues, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseString(System.String,System.Int32,System.Int32,System.String,System.Int32&)
extern "C" bool DateTime__ParseString_m10581 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, int32_t ___maxlength, String_t* ___value, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseAmPm(System.String,System.Int32,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&,System.Int32&)
extern "C" bool DateTime__ParseAmPm_m10582 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___num, DateTimeFormatInfo_t1392 * ___dfi, bool ___exact, int32_t* ___num_parsed, int32_t* ___ampm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseTimeSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C" bool DateTime__ParseTimeSeparator_m10583 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t1392 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseDateSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C" bool DateTime__ParseDateSeparator_m10584 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t1392 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLetter(System.String,System.Int32)
extern "C" bool DateTime_IsLetter_m10585 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_DoParse(System.String,System.String,System.String,System.Boolean,System.DateTime&,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.Boolean,System.Boolean&,System.Boolean&)
extern "C" bool DateTime__DoParse_m10586 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___firstPart, String_t* ___secondPart, bool ___exact, DateTime_t578 * ___result, DateTimeOffset_t851 * ___dto, DateTimeFormatInfo_t1392 * ___dfi, int32_t ___style, bool ___firstPartIsDate, bool* ___incompleteFormat, bool* ___longYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t578  DateTime_ParseExact_m5088 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___format, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t578  DateTime_ParseExact_m10587 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t31* ___formats, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckStyle(System.Globalization.DateTimeStyles)
extern "C" void DateTime_CheckStyle_m10588 (Object_t * __this /* static, unused */, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&,System.Boolean,System.Boolean&,System.Boolean,System.Exception&)
extern "C" bool DateTime_ParseExact_m10589 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t31* ___formats, DateTimeFormatInfo_t1392 * ___dfi, int32_t ___style, DateTime_t578 * ___ret, bool ___exact, bool* ___longYear, bool ___setExceptionOnError, Exception_t143 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
extern "C" DateTime_t578  DateTime_Subtract_m10590 (DateTime_t578 * __this, TimeSpan_t1144  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
extern "C" String_t* DateTime_ToString_m10591 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.IFormatProvider)
extern "C" String_t* DateTime_ToString_m10592 (DateTime_t578 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C" String_t* DateTime_ToString_m4093 (DateTime_t578 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
extern "C" DateTime_t578  DateTime_ToLocalTime_m6123 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" DateTime_t578  DateTime_ToUniversalTime_m4092 (DateTime_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C" DateTime_t578  DateTime_op_Addition_m10593 (Object_t * __this /* static, unused */, DateTime_t578  ___d, TimeSpan_t1144  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_Equality_m10594 (Object_t * __this /* static, unused */, DateTime_t578  ___d1, DateTime_t578  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_GreaterThan_m5122 (Object_t * __this /* static, unused */, DateTime_t578  ___t1, DateTime_t578  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_GreaterThanOrEqual_m6108 (Object_t * __this /* static, unused */, DateTime_t578  ___t1, DateTime_t578  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_Inequality_m10595 (Object_t * __this /* static, unused */, DateTime_t578  ___d1, DateTime_t578  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_LessThan_m6131 (Object_t * __this /* static, unused */, DateTime_t578  ___t1, DateTime_t578  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_LessThanOrEqual_m5123 (Object_t * __this /* static, unused */, DateTime_t578  ___t1, DateTime_t578  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C" DateTime_t578  DateTime_op_Subtraction_m10596 (Object_t * __this /* static, unused */, DateTime_t578  ___d, TimeSpan_t1144  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
