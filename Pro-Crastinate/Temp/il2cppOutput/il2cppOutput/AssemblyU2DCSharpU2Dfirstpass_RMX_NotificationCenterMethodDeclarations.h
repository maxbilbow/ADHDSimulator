#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RMX.EventListener
struct EventListener_t140;
// System.Enum
struct Enum_t6;
// System.Object
struct Object_t;
// System.String
struct String_t;
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"

// System.Void RMX.NotificationCenter::.cctor()
extern "C" void NotificationCenter__cctor_m55 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.NotificationCenter::HasListener(RMX.EventListener)
extern "C" bool NotificationCenter_HasListener_m56 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::Reset(System.Enum)
extern "C" void NotificationCenter_Reset_m57 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::AddListener(RMX.EventListener)
extern "C" void NotificationCenter_AddListener_m58 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::RemoveListener(RMX.EventListener)
extern "C" void NotificationCenter_RemoveListener_m59 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RMX.EventStatus RMX.NotificationCenter::StatusOf(System.Enum)
extern "C" int32_t NotificationCenter_StatusOf_m60 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.NotificationCenter::IsIdle(System.Enum)
extern "C" bool NotificationCenter_IsIdle_m61 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.NotificationCenter::IsActive(System.Enum)
extern "C" bool NotificationCenter_IsActive_m62 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::EventDidOccur(System.Enum)
extern "C" void NotificationCenter_EventDidOccur_m63 (Object_t * __this /* static, unused */, Enum_t6 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::EventDidOccur(System.Enum,System.Object)
extern "C" void NotificationCenter_EventDidOccur_m64 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.NotificationCenter::WasCompleted(System.Enum)
extern "C" bool NotificationCenter_WasCompleted_m65 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::EventWillStart(System.Enum)
extern "C" void NotificationCenter_EventWillStart_m66 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::EventWillStart(System.Enum,System.Object)
extern "C" void NotificationCenter_EventWillStart_m67 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::EventDidEnd(System.Enum)
extern "C" void NotificationCenter_EventDidEnd_m68 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::EventDidEnd(System.Enum,System.Object)
extern "C" void NotificationCenter_EventDidEnd_m69 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.NotificationCenter::NotifyListeners(System.String)
extern "C" void NotificationCenter_NotifyListeners_m70 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
