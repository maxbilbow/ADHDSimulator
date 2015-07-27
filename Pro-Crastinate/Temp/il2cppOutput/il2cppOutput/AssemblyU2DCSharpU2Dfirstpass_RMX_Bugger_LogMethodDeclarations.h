#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Enum
struct Enum_t6;
// System.String
struct String_t;
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"

// System.Void RMX.Bugger/Log::.ctor(System.Enum,System.String)
extern "C" void Log__ctor_m5 (Log_t5 * __this, Enum_t6 * ___feature, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.Bugger/Log::get_isEmpty()
extern "C" bool Log_get_isEmpty_m6 (Log_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.Bugger/Log::get_isActive()
extern "C" bool Log_get_isActive_m7 (Log_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.Bugger/Log::get_color()
extern "C" String_t* Log_get_color_m8 (Log_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.Bugger/Log::ToString()
extern "C" String_t* Log_ToString_m9 (Log_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
