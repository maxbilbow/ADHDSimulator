#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.SByte
struct SByte_t838;
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
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.SByte::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool SByte_System_IConvertible_ToBoolean_m6326 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.SByte::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t SByte_System_IConvertible_ToByte_m6327 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.SByte::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t SByte_System_IConvertible_ToChar_m6328 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.SByte::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t578  SByte_System_IConvertible_ToDateTime_m6329 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.SByte::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t836  SByte_System_IConvertible_ToDecimal_m6330 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.SByte::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double SByte_System_IConvertible_ToDouble_m6331 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.SByte::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t SByte_System_IConvertible_ToInt16_m6332 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t SByte_System_IConvertible_ToInt32_m6333 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.SByte::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t SByte_System_IConvertible_ToInt64_m6334 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t SByte_System_IConvertible_ToSByte_m6335 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.SByte::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float SByte_System_IConvertible_ToSingle_m6336 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.SByte::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * SByte_System_IConvertible_ToType_m6337 (int8_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.SByte::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t SByte_System_IConvertible_ToUInt16_m6338 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.SByte::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t SByte_System_IConvertible_ToUInt32_m6339 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.SByte::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t SByte_System_IConvertible_ToUInt64_m6340 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::CompareTo(System.Object)
extern "C" int32_t SByte_CompareTo_m6341 (int8_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Equals(System.Object)
extern "C" bool SByte_Equals_m6342 (int8_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::GetHashCode()
extern "C" int32_t SByte_GetHashCode_m6343 (int8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::CompareTo(System.SByte)
extern "C" int32_t SByte_CompareTo_m6344 (int8_t* __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Equals(System.SByte)
extern "C" bool SByte_Equals_m6345 (int8_t* __this, int8_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Parse(System.String,System.Boolean,System.SByte&,System.Exception&)
extern "C" bool SByte_Parse_m6346 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, int8_t* ___result, Exception_t143 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::Parse(System.String,System.IFormatProvider)
extern "C" int8_t SByte_Parse_m6347 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" int8_t SByte_Parse_m6348 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::TryParse(System.String,System.SByte&)
extern "C" bool SByte_TryParse_m6349 (Object_t * __this /* static, unused */, String_t* ___s, int8_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString()
extern "C" String_t* SByte_ToString_m6350 (int8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.IFormatProvider)
extern "C" String_t* SByte_ToString_m6351 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.String)
extern "C" String_t* SByte_ToString_m6352 (int8_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.String,System.IFormatProvider)
extern "C" String_t* SByte_ToString_m6353 (int8_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
