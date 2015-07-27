#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.GameCenter
struct GameCenter_t223;
// System.Enum
struct Enum_t6;
// System.Object
struct Object_t;
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void Procrastinate.GameCenter::.ctor()
extern "C" void GameCenter__ctor_m787 (GameCenter_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::.cctor()
extern "C" void GameCenter__cctor_m788 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::Start()
extern "C" void GameCenter_Start_m789 (GameCenter_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::UpdateGameCenterAchievements()
extern "C" void GameCenter_UpdateGameCenterAchievements_m790 (GameCenter_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::OnEventDidStart(System.Enum,System.Object)
extern "C" void GameCenter_OnEventDidStart_m791 (GameCenter_t223 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::OnEventDidEnd(System.Enum,System.Object)
extern "C" void GameCenter_OnEventDidEnd_m792 (GameCenter_t223 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::OnEvent(System.Enum,System.Object)
extern "C" void GameCenter_OnEvent_m793 (GameCenter_t223 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::Authenticate()
extern "C" void GameCenter_Authenticate_m794 (GameCenter_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::ReportScore(System.Int64,Procrastinate.UserData)
extern "C" void GameCenter_ReportScore_m795 (GameCenter_t223 * __this, int64_t ___score, int32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::Update()
extern "C" void GameCenter_Update_m796 (GameCenter_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameCenter::HasPlayerAlreadyAchieved(Procrastinate.UserData)
extern "C" bool GameCenter_HasPlayerAlreadyAchieved_m797 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameCenter::HasMetTimeCriteria(Procrastinate.UserData)
extern "C" bool GameCenter_HasMetTimeCriteria_m798 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::ReportProgress(Procrastinate.UserData)
extern "C" void GameCenter_ReportProgress_m799 (GameCenter_t223 * __this, int32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameCenter::CheckAchievementsWithGameCenter(Procrastinate.UserData)
extern "C" bool GameCenter_CheckAchievementsWithGameCenter_m800 (GameCenter_t223 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::OnApplicationQuit()
extern "C" void GameCenter_OnApplicationQuit_m801 (GameCenter_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
