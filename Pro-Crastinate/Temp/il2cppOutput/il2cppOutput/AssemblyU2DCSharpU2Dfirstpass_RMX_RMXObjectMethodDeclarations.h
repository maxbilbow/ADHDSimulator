#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RMX.RMXObject
struct RMXObject_t32;
// System.Enum
struct Enum_t5;
// System.Object
struct Object_t;
// System.String
struct String_t;
// RMX.KeyValueObserver
struct KeyValueObserver_t138;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void RMX.RMXObject::.ctor()
extern "C" void RMXObject__ctor_m69 (RMXObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::.cctor()
extern "C" void RMXObject__cctor_m70 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.RMXObject::get_AddToGlobalListeners()
extern "C" bool RMXObject_get_AddToGlobalListeners_m71 (RMXObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::Awake()
extern "C" void RMXObject_Awake_m72 (RMXObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::WillBeginEvent(System.Enum)
extern "C" void RMXObject_WillBeginEvent_m73 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::DidUpdateEvent(System.Enum)
extern "C" void RMXObject_DidUpdateEvent_m74 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::DidFinishEvent(System.Enum)
extern "C" void RMXObject_DidFinishEvent_m75 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::DidCauseEvent(System.Enum)
extern "C" void RMXObject_DidCauseEvent_m76 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::WillBeginEvent(System.Enum,System.Object)
extern "C" void RMXObject_WillBeginEvent_m77 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::DidUpdateEvent(System.Enum,System.Object)
extern "C" void RMXObject_DidUpdateEvent_m78 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::DidFinishEvent(System.Enum,System.Object)
extern "C" void RMXObject_DidFinishEvent_m79 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::DidCauseEvent(System.Enum,System.Object)
extern "C" void RMXObject_DidCauseEvent_m80 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::WillChangeValueForKey(System.String)
extern "C" void RMXObject_WillChangeValueForKey_m81 (RMXObject_t32 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::DidChangeValueForKey(System.String)
extern "C" void RMXObject_DidChangeValueForKey_m82 (RMXObject_t32 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::setValue(System.String,System.Object)
extern "C" void RMXObject_setValue_m83 (RMXObject_t32 * __this, String_t* ___forKey, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object RMX.RMXObject::getValue(System.String)
extern "C" Object_t * RMXObject_getValue_m84 (RMXObject_t32 * __this, String_t* ___forKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::AddObserver(RMX.KeyValueObserver)
extern "C" void RMXObject_AddObserver_m85 (RMXObject_t32 * __this, Object_t * ___observer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::RemoveObserver(RMX.KeyValueObserver)
extern "C" void RMXObject_RemoveObserver_m86 (RMXObject_t32 * __this, Object_t * ___observer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::OnValueForKeyWillChange(System.String,System.Object)
extern "C" void RMXObject_OnValueForKeyWillChange_m87 (RMXObject_t32 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::OnValueForKeyDidChange(System.String,System.Object)
extern "C" void RMXObject_OnValueForKeyDidChange_m88 (RMXObject_t32 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::OnEvent(System.Enum,System.Object)
extern "C" void RMXObject_OnEvent_m89 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::OnEventDidStart(System.Enum,System.Object)
extern "C" void RMXObject_OnEventDidStart_m90 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::OnEventDidEnd(System.Enum,System.Object)
extern "C" void RMXObject_OnEventDidEnd_m91 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RMX.RMXObject::get_OneIn10()
extern "C" bool RMXObject_get_OneIn10_m92 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.RMXObject::RMX.EventListener.SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void RMXObject_RMX_EventListener_SendMessage_m93 (RMXObject_t32 * __this, String_t* ___message, int32_t ___sendMessageOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.RMXObject::RMX.EventListener.get_name()
extern "C" String_t* RMXObject_RMX_EventListener_get_name_m94 (RMXObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
