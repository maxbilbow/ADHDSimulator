#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RMX.Bugger/Log
struct Log_t6;
// System.String
struct String_t;
// System.Enum
struct Enum_t5;

// System.Void RMX.Bugger/Log::.ctor(System.Enum,System.String)
extern "C" void Log__ctor_m6 (Log_t6 * __this, Enum_t5 * ___feature, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.Bugger/Log::get_isEmpty()
extern "C" bool Log_get_isEmpty_m7 (Log_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.Bugger/Log::get_isActive()
extern "C" bool Log_get_isActive_m8 (Log_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.Bugger/Log::get_color()
extern "C" String_t* Log_get_color_m9 (Log_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.Bugger/Log::ToString()
extern "C" String_t* Log_ToString_m10 (Log_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
