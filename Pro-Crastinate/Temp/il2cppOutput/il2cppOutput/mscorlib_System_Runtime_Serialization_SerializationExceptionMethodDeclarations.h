#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationException
struct SerializationException_t1252;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationException::.ctor()
extern "C" void SerializationException__ctor_m9506 (SerializationException_t1252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
extern "C" void SerializationException__ctor_m6119 (SerializationException_t1252 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationException__ctor_m9507 (SerializationException_t1252 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
