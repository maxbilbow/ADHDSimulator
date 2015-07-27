#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.ClockBehaviour
struct ClockBehaviour_t207;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t258;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t49;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t259;
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
struct List_1_t211;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Procrastinate.ClockBehaviour::.ctor()
extern "C" void ClockBehaviour__ctor_m722 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.ClockBehaviour::get_didPop()
extern "C" bool ClockBehaviour_get_didPop_m723 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SpriteRenderer Procrastinate.ClockBehaviour::get_spriteRenderer()
extern "C" SpriteRenderer_t258 * ClockBehaviour_get_spriteRenderer_m724 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.ClockBehaviour::IsVisible(Procrastinate.ClockBehaviour)
extern "C" bool ClockBehaviour_IsVisible_m725 (Object_t * __this /* static, unused */, ClockBehaviour_t207 * ___clock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Procrastinate.ClockBehaviour::get_VisibleClockCount()
extern "C" int32_t ClockBehaviour_get_VisibleClockCount_m726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D Procrastinate.ClockBehaviour::get_body()
extern "C" Rigidbody2D_t49 * ClockBehaviour_get_body_m727 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CircleCollider2D Procrastinate.ClockBehaviour::get_collisionBody()
extern "C" CircleCollider2D_t259 * ClockBehaviour_get_collisionBody_m728 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Procrastinate.ClockBehaviour Procrastinate.ClockBehaviour::New()
extern "C" ClockBehaviour_t207 * ClockBehaviour_New_m729 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour> Procrastinate.ClockBehaviour::CheckVisibleClocks()
extern "C" List_1_t211 * ClockBehaviour_CheckVisibleClocks_m730 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockBehaviour::Start()
extern "C" void ClockBehaviour_Start_m731 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockBehaviour::OnDestroy()
extern "C" void ClockBehaviour_OnDestroy_m732 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockBehaviour::Update()
extern "C" void ClockBehaviour_Update_m733 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.ClockBehaviour::get_willBeOnScreen()
extern "C" bool ClockBehaviour_get_willBeOnScreen_m734 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockBehaviour::OnBecameInvisible()
extern "C" void ClockBehaviour_OnBecameInvisible_m735 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockBehaviour::OnBecameVisible()
extern "C" void ClockBehaviour_OnBecameVisible_m736 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Procrastinate.ClockBehaviour::GetScreenSizeInWorld()
extern "C" Bounds_t260  ClockBehaviour_GetScreenSizeInWorld_m737 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockBehaviour::ResetWithVelocity(UnityEngine.Vector2)
extern "C" void ClockBehaviour_ResetWithVelocity_m738 (ClockBehaviour_t207 * __this, Vector2_t44  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockBehaviour::ResetWithPosition(UnityEngine.Vector3)
extern "C" void ClockBehaviour_ResetWithPosition_m739 (ClockBehaviour_t207 * __this, Vector3_t42  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockBehaviour::Reset()
extern "C" void ClockBehaviour_Reset_m740 (ClockBehaviour_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
