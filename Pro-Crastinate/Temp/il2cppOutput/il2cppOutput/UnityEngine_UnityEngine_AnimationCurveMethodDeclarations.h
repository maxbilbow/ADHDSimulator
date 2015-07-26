#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t84;
struct AnimationCurve_t84_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t194;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m613 (AnimationCurve_t84 * __this, KeyframeU5BU5D_t194* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3445 (AnimationCurve_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3446 (AnimationCurve_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3447 (AnimationCurve_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m618 (AnimationCurve_t84 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" Keyframe_t195  AnimationCurve_get_Item_m616 (AnimationCurve_t84 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m615 (AnimationCurve_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t195  AnimationCurve_GetKey_Internal_m3448 (AnimationCurve_t84 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3449 (AnimationCurve_t84 * __this, KeyframeU5BU5D_t194* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t84_marshal(const AnimationCurve_t84& unmarshaled, AnimationCurve_t84_marshaled& marshaled);
void AnimationCurve_t84_marshal_back(const AnimationCurve_t84_marshaled& marshaled, AnimationCurve_t84& unmarshaled);
void AnimationCurve_t84_marshal_cleanup(AnimationCurve_t84_marshaled& marshaled);
