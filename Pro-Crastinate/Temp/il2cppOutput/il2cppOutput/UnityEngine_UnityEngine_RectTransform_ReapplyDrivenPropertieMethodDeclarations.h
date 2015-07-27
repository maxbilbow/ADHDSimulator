#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t544;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t361;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
extern "C" void ReapplyDrivenProperties__ctor_m2673 (ReapplyDrivenProperties_t544 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
extern "C" void ReapplyDrivenProperties_Invoke_m3152 (ReapplyDrivenProperties_t544 * __this, RectTransform_t361 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t544(Il2CppObject* delegate, RectTransform_t361 * ___driven);
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m3153 (ReapplyDrivenProperties_t544 * __this, RectTransform_t361 * ___driven, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern "C" void ReapplyDrivenProperties_EndInvoke_m3154 (ReapplyDrivenProperties_t544 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
