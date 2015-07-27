﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackTrace
struct StackTrace_t162;
// System.Exception
struct Exception_t154;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1397;
// System.Diagnostics.StackFrame
struct StackFrame_t161;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackTrace::.ctor()
extern "C" void StackTrace__ctor_m7833 (StackTrace_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32)
extern "C" void StackTrace__ctor_m458 (StackTrace_t162 * __this, int32_t ___skipFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m4133 (StackTrace_t162 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
extern "C" void StackTrace__ctor_m7834 (StackTrace_t162 * __this, Exception_t154 * ___e, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m7835 (StackTrace_t162 * __this, Exception_t154 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
extern "C" void StackTrace__ctor_m7836 (StackTrace_t162 * __this, Exception_t154 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
extern "C" void StackTrace_init_frames_m7837 (StackTrace_t162 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
extern "C" StackFrameU5BU5D_t1397* StackTrace_get_trace_m7838 (Object_t * __this /* static, unused */, Exception_t154 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
extern "C" int32_t StackTrace_get_FrameCount_m7839 (StackTrace_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
extern "C" StackFrame_t161 * StackTrace_GetFrame_m7840 (StackTrace_t162 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
extern "C" String_t* StackTrace_ToString_m7841 (StackTrace_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;