#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1435;
// System.IO.Stream
struct Stream_t987;
// System.Text.Encoding
struct Encoding_t17;
// System.Char[]
struct CharU5BU5D_t163;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m8307 (UnexceptionalStreamWriter_t1435 * __this, Stream_t987 * ___stream, Encoding_t17 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m8308 (UnexceptionalStreamWriter_t1435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m8309 (UnexceptionalStreamWriter_t1435 * __this, CharU5BU5D_t163* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m8310 (UnexceptionalStreamWriter_t1435 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m8311 (UnexceptionalStreamWriter_t1435 * __this, CharU5BU5D_t163* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m8312 (UnexceptionalStreamWriter_t1435 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
