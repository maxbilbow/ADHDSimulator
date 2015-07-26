#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t58;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t140;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
extern "C" void Joystick__ctor_m194 (Joystick_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
extern "C" void Joystick_OnEnable_m195 (Joystick_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
extern "C" void Joystick_Start_m196 (Joystick_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" void Joystick_UpdateVirtualAxes_m197 (Joystick_t58 * __this, Vector3_t40  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
extern "C" void Joystick_CreateVirtualAxes_m198 (Joystick_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnDrag_m199 (Joystick_t58 * __this, PointerEventData_t140 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerUp_m200 (Joystick_t58 * __this, PointerEventData_t140 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerDown_m201 (Joystick_t58 * __this, PointerEventData_t140 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
extern "C" void Joystick_OnDisable_m202 (Joystick_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
