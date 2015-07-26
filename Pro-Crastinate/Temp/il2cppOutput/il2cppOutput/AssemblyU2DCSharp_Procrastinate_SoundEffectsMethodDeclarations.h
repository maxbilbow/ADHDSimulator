#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.SoundEffects
struct SoundEffects_t246;
// System.String
struct String_t;
// System.Enum
struct Enum_t5;
// System.Object
struct Object_t;

// System.Void Procrastinate.SoundEffects::.ctor()
extern "C" void SoundEffects__ctor_m848 (SoundEffects_t246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.SoundEffects::Start()
extern "C" void SoundEffects_Start_m849 (SoundEffects_t246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.SoundEffects::Update()
extern "C" void SoundEffects_Update_m850 (SoundEffects_t246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.SoundEffects::Play(System.String)
extern "C" void SoundEffects_Play_m851 (SoundEffects_t246 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.SoundEffects::Play(System.String,System.UInt64)
extern "C" void SoundEffects_Play_m852 (SoundEffects_t246 * __this, String_t* ___name, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.SoundEffects::OnEventDidStart(System.Enum,System.Object)
extern "C" void SoundEffects_OnEventDidStart_m853 (SoundEffects_t246 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.SoundEffects::OnEvent(System.Enum,System.Object)
extern "C" void SoundEffects_OnEvent_m854 (SoundEffects_t246 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.SoundEffects::SwitchMainTrack(System.Boolean)
extern "C" void SoundEffects_SwitchMainTrack_m855 (SoundEffects_t246 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.SoundEffects::OnEventDidEnd(System.Enum,System.Object)
extern "C" void SoundEffects_OnEventDidEnd_m856 (SoundEffects_t246 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
