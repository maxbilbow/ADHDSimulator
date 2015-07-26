#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.GameData
struct GameData_t227;
// System.Enum
struct Enum_t5;
// System.Object
struct Object_t;
// Procrastinate.Wychd
struct Wychd_t209;

// System.Void Procrastinate.GameData::.ctor()
extern "C" void GameData__ctor_m810 (GameData_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_totalTime()
extern "C" float GameData_get_totalTime_m811 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_totalTime(System.Single)
extern "C" void GameData_set_totalTime_m812 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_currentProcrastination()
extern "C" float GameData_get_currentProcrastination_m813 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_currentProcrastination(System.Single)
extern "C" void GameData_set_currentProcrastination_m814 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_currentSessionTime()
extern "C" float GameData_get_currentSessionTime_m815 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_currentSessionTime(System.Single)
extern "C" void GameData_set_currentSessionTime_m816 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_longestProcrastination()
extern "C" float GameData_get_longestProcrastination_m817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_longestProcrastination(System.Single)
extern "C" void GameData_set_longestProcrastination_m818 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::Update()
extern "C" void GameData_Update_m819 (GameData_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::OnApplicationQuit()
extern "C" void GameData_OnApplicationQuit_m820 (GameData_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Procrastinate.GameData::get_PercentageOfDevTimeWastedX10000()
extern "C" int64_t GameData_get_PercentageOfDevTimeWastedX10000_m821 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Procrastinate.GameData::get_PercentageOfDevTimeWasted()
extern "C" double GameData_get_PercentageOfDevTimeWasted_m822 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::UpdateScoresAndReset(System.Boolean)
extern "C" void GameData_UpdateScoresAndReset_m823 (GameData_t227 * __this, bool ___reset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::OnEventDidStart(System.Enum,System.Object)
extern "C" void GameData_OnEventDidStart_m824 (GameData_t227 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::TestData()
extern "C" void GameData_TestData_m825 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Procrastinate.Wychd Procrastinate.GameData::DefaultList(System.Single)
extern "C" Wychd_t209 * GameData_DefaultList_m826 (Object_t * __this /* static, unused */, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Procrastinate.Wychd Procrastinate.GameData::WhatYouCouldHaveDone(System.Single)
extern "C" Wychd_t209 * GameData_WhatYouCouldHaveDone_m827 (Object_t * __this /* static, unused */, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
