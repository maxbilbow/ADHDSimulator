#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArithmeticException
struct ArithmeticException_t1052;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArithmeticException::.ctor()
extern "C" void ArithmeticException__ctor_m10362 (ArithmeticException_t1052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.String)
extern "C" void ArithmeticException__ctor_m5100 (ArithmeticException_t1052 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArithmeticException__ctor_m10363 (ArithmeticException_t1052 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
