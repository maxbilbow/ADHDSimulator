#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.DragRigidbody
struct DragRigidbody_t217;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t49;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Enum
struct Enum_t6;
// System.Object
struct Object_t;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void Procrastinate.DragRigidbody::.ctor()
extern "C" void DragRigidbody__ctor_m773 (DragRigidbody_t217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.DragRigidbody::get_fingerWidth()
extern "C" float DragRigidbody_get_fingerWidth_m774 (DragRigidbody_t217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.DragRigidbody::Update()
extern "C" void DragRigidbody_Update_m775 (DragRigidbody_t217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.DragRigidbody::AttachBody(UnityEngine.Rigidbody2D,UnityEngine.Touch,System.Single)
extern "C" void DragRigidbody_AttachBody_m776 (DragRigidbody_t217 * __this, Rigidbody2D_t49 * ___body, Touch_t188  ___touch, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Procrastinate.DragRigidbody::ToString()
extern "C" String_t* DragRigidbody_ToString_m777 (DragRigidbody_t217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Procrastinate.DragRigidbody::DragObject(System.Single)
extern "C" Object_t * DragRigidbody_DragObject_m778 (DragRigidbody_t217 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Procrastinate.DragRigidbody::MoveFinger(System.Single)
extern "C" Object_t * DragRigidbody_MoveFinger_m779 (DragRigidbody_t217 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.DragRigidbody::OnEventDidEnd(System.Enum,System.Object)
extern "C" void DragRigidbody_OnEventDidEnd_m780 (DragRigidbody_t217 * __this, Enum_t6 * ___theEvent, Object_t * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
