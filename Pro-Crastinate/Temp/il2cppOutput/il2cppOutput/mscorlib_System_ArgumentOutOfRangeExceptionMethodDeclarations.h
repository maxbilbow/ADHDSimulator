#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t845;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" void ArgumentOutOfRangeException__ctor_m6161 (ArgumentOutOfRangeException_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" void ArgumentOutOfRangeException__ctor_m5101 (ArgumentOutOfRangeException_t845 * __this, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" void ArgumentOutOfRangeException__ctor_m4096 (ArgumentOutOfRangeException_t845 * __this, String_t* ___paramName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
extern "C" void ArgumentOutOfRangeException__ctor_m10358 (ArgumentOutOfRangeException_t845 * __this, String_t* ___paramName, Object_t * ___actualValue, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentOutOfRangeException__ctor_m10359 (ArgumentOutOfRangeException_t845 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentOutOfRangeException::get_Message()
extern "C" String_t* ArgumentOutOfRangeException_get_Message_m10360 (ArgumentOutOfRangeException_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentOutOfRangeException_GetObjectData_m10361 (ArgumentOutOfRangeException_t845 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
