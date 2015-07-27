#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.GameData
struct GameData_t230;
// System.Enum
struct Enum_t6;
// System.Object
struct Object_t;
// Procrastinate.Wychd
struct Wychd_t212;

// System.Void Procrastinate.GameData::.ctor()
extern "C" void GameData__ctor_m824 (GameData_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_totalTime()
extern "C" float GameData_get_totalTime_m825 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_totalTime(System.Single)
extern "C" void GameData_set_totalTime_m826 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_currentProcrastination()
extern "C" float GameData_get_currentProcrastination_m827 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_currentProcrastination(System.Single)
extern "C" void GameData_set_currentProcrastination_m828 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_lastProcrastination()
extern "C" float GameData_get_lastProcrastination_m829 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_lastProcrastination(System.Single)
extern "C" void GameData_set_lastProcrastination_m830 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_currentSessionTime()
extern "C" float GameData_get_currentSessionTime_m831 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_currentSessionTime(System.Single)
extern "C" void GameData_set_currentSessionTime_m832 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_lastSessionTime()
extern "C" float GameData_get_lastSessionTime_m833 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_lastSessionTime(System.Single)
extern "C" void GameData_set_lastSessionTime_m834 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameData::get_longestProcrastination()
extern "C" float GameData_get_longestProcrastination_m835 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::set_longestProcrastination(System.Single)
extern "C" void GameData_set_longestProcrastination_m836 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::Update()
extern "C" void GameData_Update_m837 (GameData_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::OnApplicationQuit()
extern "C" void GameData_OnApplicationQuit_m838 (GameData_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Procrastinate.GameData::get_PercentageOfDevTimeWastedX10000()
extern "C" int64_t GameData_get_PercentageOfDevTimeWastedX10000_m839 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Procrastinate.GameData::get_PercentageOfDevTimeWasted()
extern "C" double GameData_get_PercentageOfDevTimeWasted_m840 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::UpdateScoresAndReset(System.Boolean,System.Boolean)
extern "C" void GameData_UpdateScoresAndReset_m841 (GameData_t230 * __this, bool ___reset, bool ___final, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::OnEventDidStart(System.Enum,System.Object)
extern "C" void GameData_OnEventDidStart_m842 (GameData_t230 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameData::TestData()
extern "C" void GameData_TestData_m843 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Procrastinate.Wychd Procrastinate.GameData::DefaultList(System.Single)
extern "C" Wychd_t212 * GameData_DefaultList_m844 (Object_t * __this /* static, unused */, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Procrastinate.Wychd Procrastinate.GameData::WhatYouCouldHaveDone(System.Single)
extern "C" Wychd_t212 * GameData_WhatYouCouldHaveDone_m845 (Object_t * __this /* static, unused */, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
