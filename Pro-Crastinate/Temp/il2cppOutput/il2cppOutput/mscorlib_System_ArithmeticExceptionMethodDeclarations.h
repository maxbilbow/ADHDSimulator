#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArithmeticException
struct ArithmeticException_t1040;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArithmeticException::.ctor()
extern "C" void ArithmeticException__ctor_m10284 (ArithmeticException_t1040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.String)
extern "C" void ArithmeticException__ctor_m5075 (ArithmeticException_t1040 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArithmeticException__ctor_m10285 (ArithmeticException_t1040 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
