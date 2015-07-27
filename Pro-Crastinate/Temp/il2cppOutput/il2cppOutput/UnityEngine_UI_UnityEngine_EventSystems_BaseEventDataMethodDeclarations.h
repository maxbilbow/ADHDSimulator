#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t262;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t184;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t299;
// UnityEngine.GameObject
struct GameObject_t11;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void BaseEventData__ctor_m1190 (BaseEventData_t262 * __this, EventSystem_t184 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
extern "C" void BaseEventData_Reset_m1191 (BaseEventData_t262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
extern "C" void BaseEventData_Use_m1192 (BaseEventData_t262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
extern "C" bool BaseEventData_get_used_m1193 (BaseEventData_t262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C" BaseInputModule_t299 * BaseEventData_get_currentInputModule_m1194 (BaseEventData_t262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C" GameObject_t11 * BaseEventData_get_selectedObject_m1195 (BaseEventData_t262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" void BaseEventData_set_selectedObject_m1196 (BaseEventData_t262 * __this, GameObject_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
