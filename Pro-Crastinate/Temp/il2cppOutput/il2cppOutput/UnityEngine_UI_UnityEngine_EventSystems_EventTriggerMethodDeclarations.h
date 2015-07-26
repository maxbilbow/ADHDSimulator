#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t282;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t240;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t259;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t140;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t321;
// UnityEngine.EventSystems.EventTriggerType
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTriggerType.h"

// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
extern "C" void EventTrigger__ctor_m1094 (EventTrigger_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::get_triggers()
extern "C" List_1_t240 * EventTrigger_get_triggers_m1095 (EventTrigger_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::set_triggers(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>)
extern "C" void EventTrigger_set_triggers_m1043 (EventTrigger_t282 * __this, List_1_t240 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::Execute(UnityEngine.EventSystems.EventTriggerType,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_Execute_m1096 (EventTrigger_t282 * __this, int32_t ___id, BaseEventData_t259 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerEnter_m1097 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerExit_m1098 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrag_m1099 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrop_m1100 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerDown_m1101 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerUp_m1102 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerClick_m1103 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSelect_m1104 (EventTrigger_t282 * __this, BaseEventData_t259 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnDeselect_m1105 (EventTrigger_t282 * __this, BaseEventData_t259 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnScroll_m1106 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void EventTrigger_OnMove_m1107 (EventTrigger_t282 * __this, AxisEventData_t321 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnUpdateSelected_m1108 (EventTrigger_t282 * __this, BaseEventData_t259 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnInitializePotentialDrag_m1109 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnBeginDrag_m1110 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnEndDrag_m1111 (EventTrigger_t282 * __this, PointerEventData_t140 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSubmit_m1112 (EventTrigger_t282 * __this, BaseEventData_t259 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnCancel_m1113 (EventTrigger_t282 * __this, BaseEventData_t259 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
