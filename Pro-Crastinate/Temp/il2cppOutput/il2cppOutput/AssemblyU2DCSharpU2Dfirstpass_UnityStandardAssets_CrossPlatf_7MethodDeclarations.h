﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t60;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t143;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
extern "C" void Joystick__ctor_m199 (Joystick_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
extern "C" void Joystick_OnEnable_m200 (Joystick_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
extern "C" void Joystick_Start_m201 (Joystick_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" void Joystick_UpdateVirtualAxes_m202 (Joystick_t60 * __this, Vector3_t42  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
extern "C" void Joystick_CreateVirtualAxes_m203 (Joystick_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnDrag_m204 (Joystick_t60 * __this, PointerEventData_t143 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerUp_m205 (Joystick_t60 * __this, PointerEventData_t143 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerDown_m206 (Joystick_t60 * __this, PointerEventData_t143 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
extern "C" void Joystick_OnDisable_m207 (Joystick_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;