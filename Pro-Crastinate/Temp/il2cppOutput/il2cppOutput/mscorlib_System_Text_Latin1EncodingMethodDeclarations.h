#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Latin1Encoding
struct Latin1Encoding_t1775;
// System.Char[]
struct CharU5BU5D_t165;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1770;

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C" void Latin1Encoding__ctor_m10090 (Latin1Encoding_t1775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetByteCount_m10091 (Latin1Encoding_t1775 * __this, CharU5BU5D_t165* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C" int32_t Latin1Encoding_GetByteCount_m10092 (Latin1Encoding_t1775 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m10093 (Latin1Encoding_t1775 * __this, CharU5BU5D_t165* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m10094 (Latin1Encoding_t1775 * __this, CharU5BU5D_t165* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1770 ** ___buffer, CharU5BU5D_t165** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m10095 (Latin1Encoding_t1775 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m10096 (Latin1Encoding_t1775 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1770 ** ___buffer, CharU5BU5D_t165** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetCharCount_m10097 (Latin1Encoding_t1775 * __this, ByteU5BU5D_t625* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t Latin1Encoding_GetChars_m10098 (Latin1Encoding_t1775 * __this, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t165* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxByteCount_m10099 (Latin1Encoding_t1775 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxCharCount_m10100 (Latin1Encoding_t1775 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Latin1Encoding_GetString_m10101 (Latin1Encoding_t1775 * __this, ByteU5BU5D_t625* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C" String_t* Latin1Encoding_GetString_m10102 (Latin1Encoding_t1775 * __this, ByteU5BU5D_t625* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_HeaderName()
extern "C" String_t* Latin1Encoding_get_HeaderName_m10103 (Latin1Encoding_t1775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_WebName()
extern "C" String_t* Latin1Encoding_get_WebName_m10104 (Latin1Encoding_t1775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
