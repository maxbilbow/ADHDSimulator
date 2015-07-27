#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.FormatException
struct FormatException_t838;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FormatException::.ctor()
extern "C" void FormatException__ctor_m10746 (FormatException_t838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String)
extern "C" void FormatException__ctor_m4064 (FormatException_t838 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FormatException__ctor_m6185 (FormatException_t838 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
