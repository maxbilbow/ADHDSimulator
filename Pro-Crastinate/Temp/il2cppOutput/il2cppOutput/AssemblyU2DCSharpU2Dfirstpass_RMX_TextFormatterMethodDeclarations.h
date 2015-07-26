#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RMX.TextFormatter
struct TextFormatter_t37;
// System.String
struct String_t;
// RMX.TextFormatter/Method
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_Method.h"
// RMX.TextFormatter/Settings
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_Settings.h"

// System.Void RMX.TextFormatter::.cctor()
extern "C" void TextFormatter__cctor_m104 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.TextFormatter::debug(System.String)
extern "C" String_t* TextFormatter_debug_m105 (Object_t * __this /* static, unused */, String_t* ___log, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.TextFormatter::codify(System.String,RMX.TextFormatter/Method)
extern "C" String_t* TextFormatter_codify_m106 (Object_t * __this /* static, unused */, String_t* ___code, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.TextFormatter::Format(System.String)
extern "C" String_t* TextFormatter_Format_m107 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.TextFormatter::Format(System.String,System.String)
extern "C" String_t* TextFormatter_Format_m108 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.TextFormatter::Format(System.String,RMX.TextFormatter/Settings,RMX.TextFormatter/Method)
extern "C" String_t* TextFormatter_Format_m109 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___settings, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.TextFormatter::TimeDescription(System.Single)
extern "C" String_t* TextFormatter_TimeDescription_m110 (Object_t * __this /* static, unused */, float ___timeInSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
