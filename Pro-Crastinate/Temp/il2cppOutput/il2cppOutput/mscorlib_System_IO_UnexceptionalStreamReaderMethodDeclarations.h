#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t1446;
// System.IO.Stream
struct Stream_t1000;
// System.Text.Encoding
struct Encoding_t20;
// System.Char[]
struct CharU5BU5D_t165;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamReader__ctor_m8323 (UnexceptionalStreamReader_t1446 * __this, Stream_t1000 * ___stream, Encoding_t20 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
extern "C" void UnexceptionalStreamReader__cctor_m8324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
extern "C" int32_t UnexceptionalStreamReader_Peek_m8325 (UnexceptionalStreamReader_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
extern "C" int32_t UnexceptionalStreamReader_Read_m8326 (UnexceptionalStreamReader_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UnexceptionalStreamReader_Read_m8327 (UnexceptionalStreamReader_t1446 * __this, CharU5BU5D_t165* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
extern "C" bool UnexceptionalStreamReader_CheckEOL_m8328 (UnexceptionalStreamReader_t1446 * __this, uint16_t ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
extern "C" String_t* UnexceptionalStreamReader_ReadLine_m8329 (UnexceptionalStreamReader_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
extern "C" String_t* UnexceptionalStreamReader_ReadToEnd_m8330 (UnexceptionalStreamReader_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
