#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t174;
// UnityEngine.Transform
struct Transform_t38;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t491;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m3313 (Component_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t38 * Component_get_transform_m511 (Component_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t9 * Component_get_gameObject_m422 (Component_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t174 * Component_GetComponent_m2652 (Component_t174 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m3314 (Component_t174 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t174 * Component_GetComponentInChildren_m3315 (Component_t174 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m3316 (Component_t174 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m2366 (Component_t174 * __this, Type_t * ___type, List_1_t491 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C" String_t* Component_get_tag_m551 (Component_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m3317 (Component_t174 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C" void Component_SendMessage_m669 (Component_t174 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m498 (Component_t174 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m3318 (Component_t174 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m679 (Component_t174 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
