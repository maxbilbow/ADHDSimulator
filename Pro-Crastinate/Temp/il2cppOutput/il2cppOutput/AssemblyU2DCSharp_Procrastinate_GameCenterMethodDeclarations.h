#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.GameCenter
struct GameCenter_t219;
// System.Enum
struct Enum_t5;
// System.Object
struct Object_t;
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void Procrastinate.GameCenter::.ctor()
extern "C" void GameCenter__ctor_m774 (GameCenter_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::.cctor()
extern "C" void GameCenter__cctor_m775 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::Start()
extern "C" void GameCenter_Start_m776 (GameCenter_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::UpdateGameCenterAchievements()
extern "C" void GameCenter_UpdateGameCenterAchievements_m777 (GameCenter_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::OnEventDidStart(System.Enum,System.Object)
extern "C" void GameCenter_OnEventDidStart_m778 (GameCenter_t219 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::OnEventDidEnd(System.Enum,System.Object)
extern "C" void GameCenter_OnEventDidEnd_m779 (GameCenter_t219 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::OnEvent(System.Enum,System.Object)
extern "C" void GameCenter_OnEvent_m780 (GameCenter_t219 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::Authenticate()
extern "C" void GameCenter_Authenticate_m781 (GameCenter_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::ReportScore(System.Int64,Procrastinate.UserData)
extern "C" void GameCenter_ReportScore_m782 (GameCenter_t219 * __this, int64_t ___score, int32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::Update()
extern "C" void GameCenter_Update_m783 (GameCenter_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameCenter::HasPlayerAlreadyAchieved(Procrastinate.UserData)
extern "C" bool GameCenter_HasPlayerAlreadyAchieved_m784 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameCenter::HasMetTimeCriteria(Procrastinate.UserData)
extern "C" bool GameCenter_HasMetTimeCriteria_m785 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameCenter::get_UserAuthenticated()
extern "C" bool GameCenter_get_UserAuthenticated_m786 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::ReportProgress(Procrastinate.UserData)
extern "C" void GameCenter_ReportProgress_m787 (GameCenter_t219 * __this, int32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameCenter::CheckAchievementsWithGameCenter(Procrastinate.UserData)
extern "C" bool GameCenter_CheckAchievementsWithGameCenter_m788 (GameCenter_t219 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::InitializeKeys()
extern "C" void GameCenter_InitializeKeys_m789 (GameCenter_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameCenter::OnApplicationQuit()
extern "C" void GameCenter_OnApplicationQuit_m790 (GameCenter_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
