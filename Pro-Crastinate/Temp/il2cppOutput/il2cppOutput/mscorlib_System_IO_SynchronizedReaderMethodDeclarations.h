#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedReader
struct SynchronizedReader_t1443;
// System.IO.TextReader
struct TextReader_t1363;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t165;

// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern "C" void SynchronizedReader__ctor_m8291 (SynchronizedReader_t1443 * __this, TextReader_t1363 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Peek()
extern "C" int32_t SynchronizedReader_Peek_m8292 (SynchronizedReader_t1443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadLine()
extern "C" String_t* SynchronizedReader_ReadLine_m8293 (SynchronizedReader_t1443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern "C" String_t* SynchronizedReader_ReadToEnd_m8294 (SynchronizedReader_t1443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read()
extern "C" int32_t SynchronizedReader_Read_m8295 (SynchronizedReader_t1443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t SynchronizedReader_Read_m8296 (SynchronizedReader_t1443 * __this, CharU5BU5D_t165* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
