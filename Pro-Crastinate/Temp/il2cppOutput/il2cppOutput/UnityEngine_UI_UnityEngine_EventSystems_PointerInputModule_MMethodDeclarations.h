#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t329;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t327;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t140;
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"
// UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Fra.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
extern "C" void MouseState__ctor_m1252 (MouseState_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyPressesThisFrame()
extern "C" bool MouseState_AnyPressesThisFrame_m1253 (MouseState_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyReleasesThisFrame()
extern "C" bool MouseState_AnyReleasesThisFrame_m1254 (MouseState_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C" ButtonState_t327 * MouseState_GetButtonState_m1255 (MouseState_t329 * __this, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
extern "C" void MouseState_SetButtonState_m1256 (MouseState_t329 * __this, int32_t ___button, int32_t ___stateForMouseButton, PointerEventData_t140 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
