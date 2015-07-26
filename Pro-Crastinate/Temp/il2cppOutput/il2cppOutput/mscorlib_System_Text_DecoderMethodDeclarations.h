#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1403;
// System.Text.DecoderFallback
struct DecoderFallback_t1736;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1737;
// System.Byte[]
struct ByteU5BU5D_t616;
// System.Char[]
struct CharU5BU5D_t163;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m9914 (Decoder_t1403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m9915 (Decoder_t1403 * __this, DecoderFallback_t1736 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1737 * Decoder_get_FallbackBuffer_m9916 (Decoder_t1403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
