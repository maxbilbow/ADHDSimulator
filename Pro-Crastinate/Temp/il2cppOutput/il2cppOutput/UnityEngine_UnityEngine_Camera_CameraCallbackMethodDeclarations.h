#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t631;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t85;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CameraCallback__ctor_m3250 (CameraCallback_t631 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C" void CameraCallback_Invoke_m3251 (CameraCallback_t631 * __this, Camera_t85 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t631(Il2CppObject* delegate, Camera_t85 * ___cam);
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C" Object_t * CameraCallback_BeginInvoke_m3252 (CameraCallback_t631 * __this, Camera_t85 * ___cam, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m3253 (CameraCallback_t631 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
