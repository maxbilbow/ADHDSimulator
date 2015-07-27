#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t1766;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t1765;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
extern "C" void DecoderReplacementFallbackBuffer__ctor_m10017 (DecoderReplacementFallbackBuffer_t1766 * __this, DecoderReplacementFallback_t1765 * ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
extern "C" int32_t DecoderReplacementFallbackBuffer_get_Remaining_m10018 (DecoderReplacementFallbackBuffer_t1766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C" bool DecoderReplacementFallbackBuffer_Fallback_m10019 (DecoderReplacementFallbackBuffer_t1766 * __this, ByteU5BU5D_t625* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
extern "C" uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m10020 (DecoderReplacementFallbackBuffer_t1766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
extern "C" void DecoderReplacementFallbackBuffer_Reset_m10021 (DecoderReplacementFallbackBuffer_t1766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
