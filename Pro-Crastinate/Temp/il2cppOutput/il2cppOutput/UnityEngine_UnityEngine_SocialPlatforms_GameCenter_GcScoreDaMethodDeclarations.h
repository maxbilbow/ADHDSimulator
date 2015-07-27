#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t748;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t748 * GcScoreData_ToScore_m3821 (GcScoreData_t738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void GcScoreData_t738_marshal(const GcScoreData_t738& unmarshaled, GcScoreData_t738_marshaled& marshaled);
extern "C" void GcScoreData_t738_marshal_back(const GcScoreData_t738_marshaled& marshaled, GcScoreData_t738& unmarshaled);
extern "C" void GcScoreData_t738_marshal_cleanup(GcScoreData_t738_marshaled& marshaled);
