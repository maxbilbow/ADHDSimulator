#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter
struct TextWriter_t1246;
// System.Char[]
struct CharU5BU5D_t163;
// System.String
struct String_t;

// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m8275 (TextWriter_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C" void TextWriter__cctor_m8276 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C" void TextWriter_Close_m8277 (TextWriter_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m8278 (TextWriter_t1246 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C" void TextWriter_Dispose_m8279 (TextWriter_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C" void TextWriter_Flush_m8280 (TextWriter_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C" TextWriter_t1246 * TextWriter_Synchronized_m8281 (Object_t * __this /* static, unused */, TextWriter_t1246 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m8282 (TextWriter_t1246 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m8283 (TextWriter_t1246 * __this, CharU5BU5D_t163* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m8284 (TextWriter_t1246 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void TextWriter_Write_m8285 (TextWriter_t1246 * __this, CharU5BU5D_t163* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m8286 (TextWriter_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C" void TextWriter_WriteLine_m8287 (TextWriter_t1246 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
