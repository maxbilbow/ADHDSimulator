#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t1444;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t165;

// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern "C" void NullTextWriter__ctor_m8297 (NullTextWriter_t1444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern "C" void NullTextWriter_Write_m8298 (NullTextWriter_t1444 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern "C" void NullTextWriter_Write_m8299 (NullTextWriter_t1444 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void NullTextWriter_Write_m8300 (NullTextWriter_t1444 * __this, CharU5BU5D_t165* ___value, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
