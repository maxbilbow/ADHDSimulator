#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.DragRigidbody
struct DragRigidbody_t86;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// UnityEngine.Camera
struct Camera_t82;

// System.Void UnityStandardAssets.Utility.DragRigidbody::.ctor()
extern "C" void DragRigidbody__ctor_m286 (DragRigidbody_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.DragRigidbody::Update()
extern "C" void DragRigidbody_Update_m287 (DragRigidbody_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.DragRigidbody::DragObject(System.Single)
extern "C" Object_t * DragRigidbody_DragObject_m288 (DragRigidbody_t86 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody::FindCamera()
extern "C" Camera_t82 * DragRigidbody_FindCamera_m289 (DragRigidbody_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
