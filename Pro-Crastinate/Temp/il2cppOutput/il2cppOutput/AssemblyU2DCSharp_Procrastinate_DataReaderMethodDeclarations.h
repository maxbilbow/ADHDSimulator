#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.DataReader
struct DataReader_t211;
// UnityEngine.TextAsset
struct TextAsset_t135;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t134;
// Procrastinate.Wychd
struct Wychd_t209;

// UnityEngine.TextAsset Procrastinate.DataReader::get_Database()
extern "C" TextAsset_t135 * DataReader_get_Database_m741 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.DataReader::TimeHMSToFloat(System.String,System.Char)
extern "C" float DataReader_TimeHMSToFloat_m742 (Object_t * __this /* static, unused */, String_t* ___time, uint16_t ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.DataReader::IsWithinTime(System.String,System.Single)
extern "C" bool DataReader_IsWithinTime_m743 (Object_t * __this /* static, unused */, String_t* ___time, float ___withinTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Procrastinate.DataReader::GetActivities(System.Single)
extern "C" List_1_t134 * DataReader_GetActivities_m744 (Object_t * __this /* static, unused */, float ___inTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Procrastinate.Wychd Procrastinate.DataReader::GetActivityList(System.Single)
extern "C" Wychd_t209 * DataReader_GetActivityList_m745 (Object_t * __this /* static, unused */, float ___forTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
