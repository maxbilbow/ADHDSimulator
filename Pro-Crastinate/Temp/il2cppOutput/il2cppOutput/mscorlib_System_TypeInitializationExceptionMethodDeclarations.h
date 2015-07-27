#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TypeInitializationException
struct TypeInitializationException_t1871;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException__ctor_m11084 (TypeInitializationException_t1871 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException_GetObjectData_m11085 (TypeInitializationException_t1871 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
