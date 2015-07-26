#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t730;
struct GcScoreData_t730_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t740;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t740 * GcScoreData_ToScore_m3800 (GcScoreData_t730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t730_marshal(const GcScoreData_t730& unmarshaled, GcScoreData_t730_marshaled& marshaled);
void GcScoreData_t730_marshal_back(const GcScoreData_t730_marshaled& marshaled, GcScoreData_t730& unmarshaled);
void GcScoreData_t730_marshal_cleanup(GcScoreData_t730_marshaled& marshaled);
