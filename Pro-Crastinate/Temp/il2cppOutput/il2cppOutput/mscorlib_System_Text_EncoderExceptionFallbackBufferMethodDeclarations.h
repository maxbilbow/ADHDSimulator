#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderExceptionFallbackBuffer
struct EncoderExceptionFallbackBuffer_t1769;

// System.Void System.Text.EncoderExceptionFallbackBuffer::.ctor()
extern "C" void EncoderExceptionFallbackBuffer__ctor_m10026 (EncoderExceptionFallbackBuffer_t1769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderExceptionFallbackBuffer::get_Remaining()
extern "C" int32_t EncoderExceptionFallbackBuffer_get_Remaining_m10027 (EncoderExceptionFallbackBuffer_t1769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderExceptionFallbackBuffer::Fallback(System.Char,System.Int32)
extern "C" bool EncoderExceptionFallbackBuffer_Fallback_m10028 (EncoderExceptionFallbackBuffer_t1769 * __this, uint16_t ___charUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderExceptionFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
extern "C" bool EncoderExceptionFallbackBuffer_Fallback_m10029 (EncoderExceptionFallbackBuffer_t1769 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderExceptionFallbackBuffer::GetNextChar()
extern "C" uint16_t EncoderExceptionFallbackBuffer_GetNextChar_m10030 (EncoderExceptionFallbackBuffer_t1769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
