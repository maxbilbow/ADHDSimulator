#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t87;
struct AnimationCurve_t87_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t197;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m624 (AnimationCurve_t87 * __this, KeyframeU5BU5D_t197* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3468 (AnimationCurve_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3469 (AnimationCurve_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3470 (AnimationCurve_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m629 (AnimationCurve_t87 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" Keyframe_t198  AnimationCurve_get_Item_m627 (AnimationCurve_t87 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m626 (AnimationCurve_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t198  AnimationCurve_GetKey_Internal_m3471 (AnimationCurve_t87 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3472 (AnimationCurve_t87 * __this, KeyframeU5BU5D_t197* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t87_marshal(const AnimationCurve_t87& unmarshaled, AnimationCurve_t87_marshaled& marshaled);
extern "C" void AnimationCurve_t87_marshal_back(const AnimationCurve_t87_marshaled& marshaled, AnimationCurve_t87& unmarshaled);
extern "C" void AnimationCurve_t87_marshal_cleanup(AnimationCurve_t87_marshaled& marshaled);
