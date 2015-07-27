#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t243;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t289;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t143;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t262;
// System.Collections.IEnumerator
struct IEnumerator_t145;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m1376 (Button_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t289 * Button_get_onClick_m1055 (Button_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m1377 (Button_t243 * __this, ButtonClickedEvent_t289 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m1378 (Button_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m1379 (Button_t243 * __this, PointerEventData_t143 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m1380 (Button_t243 * __this, BaseEventData_t262 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m1381 (Button_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
