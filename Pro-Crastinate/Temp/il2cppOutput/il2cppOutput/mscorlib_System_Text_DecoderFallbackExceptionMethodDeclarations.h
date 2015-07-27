#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderFallbackException
struct DecoderFallbackException_t1764;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void System.Text.DecoderFallbackException::.ctor()
extern "C" void DecoderFallbackException__ctor_m10008 (DecoderFallbackException_t1764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String)
extern "C" void DecoderFallbackException__ctor_m10009 (DecoderFallbackException_t1764 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String,System.Byte[],System.Int32)
extern "C" void DecoderFallbackException__ctor_m10010 (DecoderFallbackException_t1764 * __this, String_t* ___message, ByteU5BU5D_t625* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
