#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t186;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// UnityEngine.AnimationState
struct AnimationState_t649;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// System.Boolean UnityEngine.Animation::Play()
extern "C" bool Animation_Play_m593 (Animation_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m3453 (Animation_t186 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m3454 (Animation_t186 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m3455 (Animation_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t649 * Animation_GetStateAtIndex_m3456 (Animation_t186 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m3457 (Animation_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
