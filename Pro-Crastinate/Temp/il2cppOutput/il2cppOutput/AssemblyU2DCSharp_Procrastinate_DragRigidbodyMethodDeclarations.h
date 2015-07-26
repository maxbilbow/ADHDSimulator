#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.DragRigidbody
struct DragRigidbody_t213;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t46;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Enum
struct Enum_t5;
// System.Object
struct Object_t;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void Procrastinate.DragRigidbody::.ctor()
extern "C" void DragRigidbody__ctor_m762 (DragRigidbody_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.DragRigidbody::get_fingerWidth()
extern "C" float DragRigidbody_get_fingerWidth_m763 (DragRigidbody_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.DragRigidbody::Update()
extern "C" void DragRigidbody_Update_m764 (DragRigidbody_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.DragRigidbody::AttachBody(UnityEngine.Rigidbody2D,UnityEngine.Touch,System.Single)
extern "C" void DragRigidbody_AttachBody_m765 (DragRigidbody_t213 * __this, Rigidbody2D_t46 * ___body, Touch_t185  ___touch, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Procrastinate.DragRigidbody::ToString()
extern "C" String_t* DragRigidbody_ToString_m766 (DragRigidbody_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Procrastinate.DragRigidbody::DragObject(System.Single)
extern "C" Object_t * DragRigidbody_DragObject_m767 (DragRigidbody_t213 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Procrastinate.DragRigidbody::MoveFinger(System.Single)
extern "C" Object_t * DragRigidbody_MoveFinger_m768 (DragRigidbody_t213 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.DragRigidbody::OnEventDidEnd(System.Enum,System.Object)
extern "C" void DragRigidbody_OnEventDidEnd_m769 (DragRigidbody_t213 * __this, Enum_t5 * ___theEvent, Object_t * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
