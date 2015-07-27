#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t1759;
// System.Char[]
struct CharU5BU5D_t165;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1770;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1761;
// System.Text.Decoder
struct Decoder_t1416;

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m9974 (ASCIIEncoding_t1759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9975 (ASCIIEncoding_t1759 * __this, CharU5BU5D_t165* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9976 (ASCIIEncoding_t1759 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9977 (ASCIIEncoding_t1759 * __this, CharU5BU5D_t165* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m9978 (ASCIIEncoding_t1759 * __this, CharU5BU5D_t165* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1770 ** ___buffer, CharU5BU5D_t165** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9979 (ASCIIEncoding_t1759 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m9980 (ASCIIEncoding_t1759 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1770 ** ___buffer, CharU5BU5D_t165** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m9981 (ASCIIEncoding_t1759 * __this, ByteU5BU5D_t625* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m9982 (ASCIIEncoding_t1759 * __this, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t165* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m9983 (ASCIIEncoding_t1759 * __this, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t165* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1761 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m9984 (ASCIIEncoding_t1759 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m9985 (ASCIIEncoding_t1759 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m9986 (ASCIIEncoding_t1759 * __this, ByteU5BU5D_t625* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9987 (ASCIIEncoding_t1759 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9988 (ASCIIEncoding_t1759 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1416 * ASCIIEncoding_GetDecoder_m9989 (ASCIIEncoding_t1759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
