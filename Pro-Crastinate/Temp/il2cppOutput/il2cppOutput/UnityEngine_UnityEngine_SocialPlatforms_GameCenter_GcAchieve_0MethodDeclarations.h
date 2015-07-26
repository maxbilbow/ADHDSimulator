#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t729;
struct GcAchievementData_t729_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t738;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t738 * GcAchievementData_ToAchievement_m3799 (GcAchievementData_t729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t729_marshal(const GcAchievementData_t729& unmarshaled, GcAchievementData_t729_marshaled& marshaled);
void GcAchievementData_t729_marshal_back(const GcAchievementData_t729_marshaled& marshaled, GcAchievementData_t729& unmarshaled);
void GcAchievementData_t729_marshal_cleanup(GcAchievementData_t729_marshaled& marshaled);
