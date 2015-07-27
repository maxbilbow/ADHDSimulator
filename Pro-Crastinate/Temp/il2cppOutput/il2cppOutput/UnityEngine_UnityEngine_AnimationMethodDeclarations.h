#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t190;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// UnityEngine.AnimationState
struct AnimationState_t658;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// System.Boolean UnityEngine.Animation::Play()
extern "C" bool Animation_Play_m603 (Animation_t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m3476 (Animation_t190 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m3477 (Animation_t190 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m3478 (Animation_t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t658 * Animation_GetStateAtIndex_m3479 (Animation_t190 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m3480 (Animation_t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
