#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.ClockSpawner
struct ClockSpawner_t207;
// System.Enum
struct Enum_t5;
// System.Object
struct Object_t;
// Procrastinate.ClockSpawner/SpawnMode
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawner_SpawnMode.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Procrastinate.ClockSpawner::.ctor()
extern "C" void ClockSpawner__ctor_m731 (ClockSpawner_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Procrastinate.ClockSpawner/SpawnMode Procrastinate.ClockSpawner::get_spawnMode()
extern "C" int32_t ClockSpawner_get_spawnMode_m732 (ClockSpawner_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.ClockSpawner::get_ShouldKillClocks()
extern "C" bool ClockSpawner_get_ShouldKillClocks_m733 (ClockSpawner_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockSpawner::Update()
extern "C" void ClockSpawner_Update_m734 (ClockSpawner_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Procrastinate.ClockSpawner::get_SpawnPoint()
extern "C" Vector3_t40  ClockSpawner_get_SpawnPoint_m735 (ClockSpawner_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.ClockSpawner::Spawn()
extern "C" bool ClockSpawner_Spawn_m736 (ClockSpawner_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.ClockSpawner::OnEventDidEnd(System.Enum,System.Object)
extern "C" void ClockSpawner_OnEventDidEnd_m737 (ClockSpawner_t207 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
