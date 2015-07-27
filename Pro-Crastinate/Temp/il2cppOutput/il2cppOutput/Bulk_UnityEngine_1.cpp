#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>

// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// System.Void UnityEngine.Behaviour::.ctor()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void Behaviour__ctor_m3249 (Behaviour_t189 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m3336(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" bool Behaviour_get_enabled_m1058 (Behaviour_t189 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m1058_ftn) (Behaviour_t189 *);
	static Behaviour_get_enabled_m1058_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m1058_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Behaviour_set_enabled_m601 (Behaviour_t189 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m601_ftn) (Behaviour_t189 *, bool);
	static Behaviour_set_enabled_m601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" bool Behaviour_get_isActiveAndEnabled_m2285 (Behaviour_t189 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m2285_ftn) (Behaviour_t189 *);
	static Behaviour_get_isActiveAndEnabled_m2285_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m2285_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void CameraCallback__ctor_m3250 (CameraCallback_t631 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern "C" void CameraCallback_Invoke_m3251 (CameraCallback_t631 * __this, Camera_t85 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m3251((CameraCallback_t631 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t85 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t85 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t631(Il2CppObject* delegate, Camera_t85 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t85 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * CameraCallback_BeginInvoke_m3252 (CameraCallback_t631 * __this, Camera_t85 * ___cam, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m3253 (CameraCallback_t631 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" float Camera_get_fieldOfView_m666 (Camera_t85 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_fieldOfView_m666_ftn) (Camera_t85 *);
	static Camera_get_fieldOfView_m666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_fieldOfView_m666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_fieldOfView()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Camera_set_fieldOfView_m667 (Camera_t85 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_fieldOfView_m667_ftn) (Camera_t85 *, float);
	static Camera_set_fieldOfView_m667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_fieldOfView_m667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_fieldOfView(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m2336 (Camera_t85 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m2336_ftn) (Camera_t85 *);
	static Camera_get_nearClipPlane_m2336_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m2336_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m2335 (Camera_t85 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m2335_ftn) (Camera_t85 *);
	static Camera_get_farClipPlane_m2335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m2335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m2249 (Camera_t85 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_depth_m2249_ftn) (Camera_t85 *);
	static Camera_get_depth_m2249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m2249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m2345 (Camera_t85 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m2345_ftn) (Camera_t85 *);
	static Camera_get_cullingMask_m2345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m2345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m3254 (Camera_t85 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m3254_ftn) (Camera_t85 *);
	static Camera_get_eventMask_m3254_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m3254_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" Rect_t150  Camera_get_pixelRect_m3255 (Camera_t85 * __this, const MethodInfo* method)
{
	Rect_t150  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m3256(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t150  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m3256 (Camera_t85 * __this, Rect_t150 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m3256_ftn) (Camera_t85 *, Rect_t150 *);
	static Camera_INTERNAL_get_pixelRect_m3256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m3256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t574 * Camera_get_targetTexture_m3257 (Camera_t85 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t574 * (*Camera_get_targetTexture_m3257_ftn) (Camera_t85 *);
	static Camera_get_targetTexture_m3257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m3257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C" Matrix4x4_t536  Camera_get_worldToCameraMatrix_m3258 (Camera_t85 * __this, const MethodInfo* method)
{
	Matrix4x4_t536  V_0 = {0};
	{
		Camera_INTERNAL_get_worldToCameraMatrix_m3259(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t536  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_worldToCameraMatrix_m3259 (Camera_t85 * __this, Matrix4x4_t536 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_worldToCameraMatrix_m3259_ftn) (Camera_t85 *, Matrix4x4_t536 *);
	static Camera_INTERNAL_get_worldToCameraMatrix_m3259_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_worldToCameraMatrix_m3259_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" Matrix4x4_t536  Camera_get_projectionMatrix_m3260 (Camera_t85 * __this, const MethodInfo* method)
{
	Matrix4x4_t536  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m3261(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t536  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m3261 (Camera_t85 * __this, Matrix4x4_t536 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m3261_ftn) (Camera_t85 *, Matrix4x4_t536 *);
	static Camera_INTERNAL_get_projectionMatrix_m3261_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m3261_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m3262 (Camera_t85 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m3262_ftn) (Camera_t85 *);
	static Camera_get_clearFlags_m3262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m3262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector3_t42  Camera_ScreenToWorldPoint_m927 (Camera_t85 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m3263(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern "C" Vector3_t42  Camera_INTERNAL_CALL_ScreenToWorldPoint_m3263 (Object_t * __this /* static, unused */, Camera_t85 * ___self, Vector3_t42 * ___position, const MethodInfo* method)
{
	typedef Vector3_t42  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m3263_ftn) (Camera_t85 *, Vector3_t42 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m3263_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m3263_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t42  Camera_ScreenToViewportPoint_m2417 (Camera_t85 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m3264(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t42  Camera_INTERNAL_CALL_ScreenToViewportPoint_m3264 (Object_t * __this /* static, unused */, Camera_t85 * ___self, Vector3_t42 * ___position, const MethodInfo* method)
{
	typedef Vector3_t42  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m3264_ftn) (Camera_t85 *, Vector3_t42 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m3264_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m3264_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t89  Camera_ScreenPointToRay_m635 (Camera_t85 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Ray_t89  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m3265(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t89  Camera_INTERNAL_CALL_ScreenPointToRay_m3265 (Object_t * __this /* static, unused */, Camera_t85 * ___self, Vector3_t42 * ___position, const MethodInfo* method)
{
	typedef Ray_t89  (*Camera_INTERNAL_CALL_ScreenPointToRay_m3265_ftn) (Camera_t85 *, Vector3_t42 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m3265_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m3265_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t85 * Camera_get_main_m656 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t85 * (*Camera_get_main_m656_ftn) ();
	static Camera_get_main_m656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m656_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern "C" Camera_t85 * Camera_get_current_m938 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t85 * (*Camera_get_current_m938_ftn) ();
	static Camera_get_current_m938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_current_m938_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_current()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m3266 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m3266_ftn) ();
	static Camera_get_allCamerasCount_m3266_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m3266_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
#include "UnityEngine_ArrayTypes.h"
extern "C" int32_t Camera_GetAllCameras_m3267 (Object_t * __this /* static, unused */, CameraU5BU5D_t755* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m3267_ftn) (CameraU5BU5D_t755*);
	static Camera_GetAllCameras_m3267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m3267_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"
extern TypeInfo* Camera_t85_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m3268 (Object_t * __this /* static, unused */, Camera_t85 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t631 * L_0 = ((Camera_t85_StaticFields*)Camera_t85_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t631 * L_1 = ((Camera_t85_StaticFields*)Camera_t85_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		Camera_t85 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m3251(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern TypeInfo* Camera_t85_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreRender_m3269 (Object_t * __this /* static, unused */, Camera_t85 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t631 * L_0 = ((Camera_t85_StaticFields*)Camera_t85_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t631 * L_1 = ((Camera_t85_StaticFields*)Camera_t85_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		Camera_t85 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m3251(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern TypeInfo* Camera_t85_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPostRender_m3270 (Object_t * __this /* static, unused */, Camera_t85 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t631 * L_0 = ((Camera_t85_StaticFields*)Camera_t85_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t631 * L_1 = ((Camera_t85_StaticFields*)Camera_t85_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		Camera_t85 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m3251(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" GameObject_t11 * Camera_RaycastTry_m3271 (Camera_t85 * __this, Ray_t89  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t11 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m3272(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t11 * Camera_INTERNAL_CALL_RaycastTry_m3272 (Object_t * __this /* static, unused */, Camera_t85 * ___self, Ray_t89 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t11 * (*Camera_INTERNAL_CALL_RaycastTry_m3272_ftn) (Camera_t85 *, Ray_t89 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m3272_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m3272_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t11 * Camera_RaycastTry2D_m3273 (Camera_t85 * __this, Ray_t89  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t11 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m3274(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t11 * Camera_INTERNAL_CALL_RaycastTry2D_m3274 (Object_t * __this /* static, unused */, Camera_t85 * ___self, Ray_t89 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t11 * (*Camera_INTERNAL_CALL_RaycastTry2D_m3274_ftn) (Camera_t85 *, Ray_t89 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m3274_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m3274_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" void Debug_Internal_Log_m3275 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t76 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m3275_ftn) (int32_t, String_t*, Object_t76 *);
	static Debug_Internal_Log_m3275_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m3275_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
// System.Exception
#include "mscorlib_System_Exception.h"
extern "C" void Debug_Internal_LogException_m3276 (Object_t * __this /* static, unused */, Exception_t154 * ___exception, Object_t76 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m3276_ftn) (Exception_t154 *, Object_t76 *);
	static Debug_Internal_LogException_m3276_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m3276_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" void Debug_Log_m454 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral390;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3275(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" void Debug_LogError_m596 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral390;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3275(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m2468 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t76 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t76 * L_2 = ___context;
		Debug_Internal_Log_m3275(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m3277 (Object_t * __this /* static, unused */, Exception_t154 * ___exception, const MethodInfo* method)
{
	{
		Exception_t154 * L_0 = ___exception;
		Debug_Internal_LogException_m3276(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m2365 (Object_t * __this /* static, unused */, Exception_t154 * ___exception, Object_t76 * ___context, const MethodInfo* method)
{
	{
		Exception_t154 * L_0 = ___exception;
		Object_t76 * L_1 = ___context;
		Debug_Internal_LogException_m3276(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m443 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m3275(NULL /*static, unused*/, 1, L_1, (Object_t76 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m2617 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t76 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t76 * L_2 = ___context;
		Debug_Internal_Log_m3275(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void DisplaysUpdatedDelegate__ctor_m3278 (DisplaysUpdatedDelegate_t633 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m3279 (DisplaysUpdatedDelegate_t633 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m3279((DisplaysUpdatedDelegate_t633 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t633(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m3280 (DisplaysUpdatedDelegate_t633 * __this, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m3281 (DisplaysUpdatedDelegate_t633 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#include "mscorlib_ArrayTypes.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Void UnityEngine.Display::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern "C" void Display__ctor_m3282 (Display_t634 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m4055(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Display__ctor_m3283 (Display_t634 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"
extern TypeInfo* DisplayU5BU5D_t635_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m3284 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t635* L_0 = ((DisplayU5BU5D_t635*)SZArrayNew(DisplayU5BU5D_t635_il2cpp_TypeInfo_var, 1));
		Display_t634 * L_1 = (Display_t634 *)il2cpp_codegen_object_new (Display_t634_il2cpp_TypeInfo_var);
		Display__ctor_m3282(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t634 **)(Display_t634 **)SZArrayLdElema(L_0, 0, sizeof(Display_t634 *))) = (Display_t634 *)L_1;
		((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t635* L_2 = ((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t634 **)(Display_t634 **)SZArrayLdElema(L_2, L_3, sizeof(Display_t634 *)));
		((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t633 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t633_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m3285 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t633 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		DisplaysUpdatedDelegate_t633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t633 * L_0 = ((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t633 * L_1 = ___value;
		Delegate_t520 * L_2 = Delegate_Combine_m2407(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t633 *)CastclassSealed(L_2, DisplaysUpdatedDelegate_t633_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t633_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m3286 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t633 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		DisplaysUpdatedDelegate_t633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t633 * L_0 = ((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t633 * L_1 = ___value;
		Delegate_t520 * L_2 = Delegate_Remove_m2408(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t633 *)CastclassSealed(L_2, DisplaysUpdatedDelegate_t633_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m3287 (Display_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m3303(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m3288 (Display_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m3303(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m3289 (Display_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m3302(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m3290 (Display_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m3302(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t740  Display_get_colorBuffer_m3291 (Display_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t740  V_0 = {0};
	RenderBuffer_t740  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m3304(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t740  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t740  Display_get_depthBuffer_m3292 (Display_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t740  V_0 = {0};
	RenderBuffer_t740  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m3304(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t740  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m3293 (Display_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m3306(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m3294 (Display_t634 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m3306(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m3295 (Display_t634 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m3307(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m3296 (Display_t634 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m3305(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m3297 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m3308(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  Display_RelativeMouseAt_m3298 (Object_t * __this /* static, unused */, Vector3_t42  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m3309(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t42  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" Display_t634 * Display_get_main_m3299 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		Display_t634 * L_0 = ((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* DisplayU5BU5D_t635_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m3300 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t799* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t799* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t635*)SZArrayNew(DisplayU5BU5D_t635_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t635* L_1 = ((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t799* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t634 * L_6 = (Display_t634 *)il2cpp_codegen_object_new (Display_t634_il2cpp_TypeInfo_var);
		Display__ctor_m3283(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5, sizeof(IntPtr_t))), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t634 **)(Display_t634 **)SZArrayLdElema(L_1, L_2, sizeof(Display_t634 *))) = (Display_t634 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t799* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t635* L_10 = ((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t634 **)(Display_t634 **)SZArrayLdElema(L_10, L_11, sizeof(Display_t634 *)));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"
extern TypeInfo* Display_t634_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m3301 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t633 * L_0 = ((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t634_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t633 * L_1 = ((Display_t634_StaticFields*)Display_t634_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		DisplaysUpdatedDelegate_Invoke_m3279(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m3302 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m3302_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m3302_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m3302_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m3303 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m3303_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m3303_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m3303_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m3304 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t740 * ___color, RenderBuffer_t740 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m3304_ftn) (IntPtr_t, RenderBuffer_t740 *, RenderBuffer_t740 *);
	static Display_GetRenderingBuffersImpl_m3304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m3304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m3305 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m3305_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m3305_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m3305_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m3306 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m3306_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m3306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m3306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m3307 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m3307_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m3307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m3307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m3308 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m3308_ftn) ();
	static Display_MultiDisplayLicenseImpl_m3308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m3308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m3309 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m3309_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m3309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m3309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.Void UnityEngine.MonoBehaviour::.ctor()
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" void MonoBehaviour__ctor_m501 (MonoBehaviour_t32 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m3249(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void MonoBehaviour_Invoke_m703 (MonoBehaviour_t32 * __this, String_t* ___methodName, float ___time, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_Invoke_m703_ftn) (MonoBehaviour_t32 *, String_t*, float);
	static MonoBehaviour_Invoke_m703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_Invoke_m703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___methodName, ___time);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" Coroutine_t398 * MonoBehaviour_StartCoroutine_m682 (MonoBehaviour_t32 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t398 * L_1 = MonoBehaviour_StartCoroutine_Auto_m3310(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t398 * MonoBehaviour_StartCoroutine_Auto_m3310 (MonoBehaviour_t32 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t398 * (*MonoBehaviour_StartCoroutine_Auto_m3310_ftn) (MonoBehaviour_t32 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m3310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m3310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Coroutine_t398 * MonoBehaviour_StartCoroutine_m654 (MonoBehaviour_t32 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method)
{
	typedef Coroutine_t398 * (*MonoBehaviour_StartCoroutine_m654_ftn) (MonoBehaviour_t32 *, String_t*, Object_t *);
	static MonoBehaviour_StartCoroutine_m654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_m654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)");
	return _il2cpp_icall_func(__this, ___methodName, ___value);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m3311 (MonoBehaviour_t32 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3312(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern "C" void MonoBehaviour_StopCoroutine_m2565 (MonoBehaviour_t32 * __this, Coroutine_t398 * ___routine, const MethodInfo* method)
{
	{
		Coroutine_t398 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m3313(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3312 (MonoBehaviour_t32 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3312_ftn) (MonoBehaviour_t32 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m3313 (MonoBehaviour_t32 * __this, Coroutine_t398 * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m3313_ftn) (MonoBehaviour_t32 *, Coroutine_t398 *);
	static MonoBehaviour_StopCoroutine_Auto_m3313_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m3313_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern "C" void MonoBehaviour_print_m893 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		Debug_Log_m454(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m2295 (Touch_t188 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t44  Touch_get_position_m592 (Touch_t188 * __this, const MethodInfo* method)
{
	{
		Vector2_t44  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m2296 (Touch_t188 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// Conversion methods for marshalling of: UnityEngine.Touch
extern "C" void Touch_t188_marshal(const Touch_t188& unmarshaled, Touch_t188_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
extern "C" void Touch_t188_marshal_back(const Touch_t188_marshaled& marshaled, Touch_t188& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
extern "C" void Touch_t188_marshal_cleanup(Touch_t188_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m3314 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool Input_GetKeyInt_m3315 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyInt_m3315_ftn) (int32_t);
	static Input_GetKeyInt_m3315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyInt_m3315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C" bool Input_GetKeyDownInt_m3316 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyDownInt_m3316_ftn) (int32_t);
	static Input_GetKeyDownInt_m3316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyDownInt_m3316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyDownInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" float Input_GetAxis_m578 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxis_m578_ftn) (String_t*);
	static Input_GetAxis_m578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxis_m578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" float Input_GetAxisRaw_m577 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m577_ftn) (String_t*);
	static Input_GetAxisRaw_m577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C" bool Input_GetButton_m579 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButton_m579_ftn) (String_t*);
	static Input_GetButton_m579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButton_m579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButton(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m580 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m580_ftn) (String_t*);
	static Input_GetButtonDown_m580_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m580_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
extern "C" bool Input_GetButtonUp_m581 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonUp_m581_ftn) (String_t*);
	static Input_GetButtonUp_m581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonUp_m581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonUp(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKey_m539 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyInt_m3315(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKeyDown_m998 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDownInt_m3316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m637 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m637_ftn) (int32_t);
	static Input_GetMouseButton_m637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m640 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m640_ftn) (int32_t);
	static Input_GetMouseButtonDown_m640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m2297 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m2297_ftn) (int32_t);
	static Input_GetMouseButtonUp_m2297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m2297_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  Input_get_mousePosition_m582 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mousePosition_m3317(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C" void Input_INTERNAL_get_mousePosition_m3317 (Object_t * __this /* static, unused */, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mousePosition_m3317_ftn) (Vector3_t42 *);
	static Input_INTERNAL_get_mousePosition_m3317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mousePosition_m3317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" Vector2_t44  Input_get_mouseScrollDelta_m2298 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t44  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mouseScrollDelta_m3318(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector2_t44  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_get_mouseScrollDelta_m3318 (Object_t * __this /* static, unused */, Vector2_t44 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mouseScrollDelta_m3318_ftn) (Vector2_t44 *);
	static Input_INTERNAL_get_mouseScrollDelta_m3318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mouseScrollDelta_m3318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m2314 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m2314_ftn) ();
	static Input_get_mousePresent_m2314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m2314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  Input_get_acceleration_m583 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_acceleration_m3319(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_acceleration(UnityEngine.Vector3&)
extern "C" void Input_INTERNAL_get_acceleration_m3319 (Object_t * __this /* static, unused */, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_acceleration_m3319_ftn) (Vector3_t42 *);
	static Input_INTERNAL_get_acceleration_m3319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_acceleration_m3319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_acceleration(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern TypeInfo* TouchU5BU5D_t187_il2cpp_TypeInfo_var;
extern "C" TouchU5BU5D_t187* Input_get_touches_m591 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		TouchU5BU5D_t187_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	TouchU5BU5D_t187* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m590(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((TouchU5BU5D_t187*)SZArrayNew(TouchU5BU5D_t187_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_002a;
	}

IL_0014:
	{
		TouchU5BU5D_t187* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Touch_t188  L_5 = Input_GetTouch_m974(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		*((Touch_t188 *)(Touch_t188 *)SZArrayLdElema(L_2, L_3, sizeof(Touch_t188 ))) = L_5;
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		TouchU5BU5D_t187* L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t188  Input_GetTouch_m974 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t188  (*Input_GetTouch_m974_ftn) (int32_t);
	static Input_GetTouch_m974_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m974_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m590 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m590_ftn) ();
	static Input_get_touchCount_m590_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m590_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m2332 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
extern "C" void Input_set_imeCompositionMode_m2560 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m2560_ftn) (int32_t);
	static Input_set_imeCompositionMode_m2560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m2560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m2491 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2491_ftn) ();
	static Input_get_compositionString_m2491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" void Input_set_compositionCursorPos_m2548 (Object_t * __this /* static, unused */, Vector2_t44  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Input_INTERNAL_set_compositionCursorPos_m3320(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m3320 (Object_t * __this /* static, unused */, Vector2_t44 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m3320_ftn) (Vector2_t44 *);
	static Input_INTERNAL_set_compositionCursorPos_m3320_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m3320_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Void UnityEngine.Object::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Object__ctor_m3321 (Object_t76 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" Object_t76 * Object_Internal_CloneSingle_m3322 (Object_t * __this /* static, unused */, Object_t76 * ___data, const MethodInfo* method)
{
	typedef Object_t76 * (*Object_Internal_CloneSingle_m3322_ftn) (Object_t76 *);
	static Object_Internal_CloneSingle_m3322_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m3322_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" Object_t76 * Object_Internal_InstantiateSingle_m3323 (Object_t * __this /* static, unused */, Object_t76 * ___data, Vector3_t42  ___pos, Quaternion_t106  ___rot, const MethodInfo* method)
{
	{
		Object_t76 * L_0 = ___data;
		Object_t76 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m3324(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t76 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m3324 (Object_t * __this /* static, unused */, Object_t76 * ___data, Vector3_t42 * ___pos, Quaternion_t106 * ___rot, const MethodInfo* method)
{
	typedef Object_t76 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m3324_ftn) (Object_t76 *, Vector3_t42 *, Quaternion_t106 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m3324_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m3324_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Object_Destroy_m702 (Object_t * __this /* static, unused */, Object_t76 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_Destroy_m702_ftn) (Object_t76 *, float);
	static Object_Destroy_m702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m690 (Object_t * __this /* static, unused */, Object_t76 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t76 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m702(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Object_DestroyImmediate_m3325 (Object_t * __this /* static, unused */, Object_t76 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m3325_ftn) (Object_t76 *, bool);
	static Object_DestroyImmediate_m3325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m3325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m2561 (Object_t * __this /* static, unused */, Object_t76 * ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t76 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m3325(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" ObjectU5BU5D_t182* Object_FindObjectsOfType_m563 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t182* (*Object_FindObjectsOfType_m563_ftn) (Type_t *);
	static Object_FindObjectsOfType_m563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m508 (Object_t76 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m508_ftn) (Object_t76 *);
	static Object_get_name_m508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Object_set_name_m2619 (Object_t76 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Object_set_name_m2619_ftn) (Object_t76 *, String_t*);
	static Object_set_name_m2619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m2619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m924 (Object_t * __this /* static, unused */, Object_t76 * ___target, const MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m924_ftn) (Object_t76 *);
	static Object_DontDestroyOnLoad_m924_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m924_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
extern "C" void Object_set_hideFlags_m2529 (Object_t76 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m2529_ftn) (Object_t76 *, int32_t);
	static Object_set_hideFlags_m2529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m2529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C" void Object_DestroyObject_m3326 (Object_t * __this /* static, unused */, Object_t76 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_DestroyObject_m3326_ftn) (Object_t76 *, float);
	static Object_DestroyObject_m3326_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyObject_m3326_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C" void Object_DestroyObject_m600 (Object_t * __this /* static, unused */, Object_t76 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t76 * L_0 = ___obj;
		float L_1 = V_0;
		Object_DestroyObject_m3326(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m3327 (Object_t76 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m3327_ftn) (Object_t76 *);
	static Object_ToString_m3327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m3327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Object_t76_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m3328 (Object_t76 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m3330(NULL /*static, unused*/, __this, ((Object_t76 *)IsInstClass(L_0, Object_t76_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m3329 (Object_t76 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m3332(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m3330 (Object_t * __this /* static, unused */, Object_t76 * ___lhs, Object_t76 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t76 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t76 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t76 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t76 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t76 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m3331(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t76 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m3331(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t76 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t76 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m3331 (Object_t * __this /* static, unused */, Object_t76 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t76 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m3333(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m4056(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m3332 (Object_t76 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m3333 (Object_t76 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern Il2CppCodeGenString* _stringLiteral391;
extern "C" Object_t76 * Object_Instantiate_m599 (Object_t * __this /* static, unused */, Object_t76 * ___original, Vector3_t42  ___position, Quaternion_t106  ___rotation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t76 * L_0 = ___original;
		Object_CheckNullArgument_m3334(NULL /*static, unused*/, L_0, _stringLiteral391, /*hidden argument*/NULL);
		Object_t76 * L_1 = ___original;
		Vector3_t42  L_2 = ___position;
		Quaternion_t106  L_3 = ___rotation;
		Object_t76 * L_4 = Object_Internal_InstantiateSingle_m3323(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m3334 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t275 * L_2 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_000d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t76 * Object_FindObjectOfType_m3335 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	ObjectU5BU5D_t182* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t182* L_1 = Object_FindObjectsOfType_m563(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t182* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t182* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t76 **)(Object_t76 **)SZArrayLdElema(L_3, L_4, sizeof(Object_t76 *)));
	}

IL_0014:
	{
		return (Object_t76 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m554 (Object_t * __this /* static, unused */, Object_t76 * ___exists, const MethodInfo* method)
{
	{
		Object_t76 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m3330(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m473 (Object_t * __this /* static, unused */, Object_t76 * ___x, Object_t76 * ___y, const MethodInfo* method)
{
	{
		Object_t76 * L_0 = ___x;
		Object_t76 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3330(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m548 (Object_t * __this /* static, unused */, Object_t76 * ___x, Object_t76 * ___y, const MethodInfo* method)
{
	{
		Object_t76 * L_0 = ___x;
		Object_t76 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3330(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
extern "C" void Object_t76_marshal(const Object_t76& unmarshaled, Object_t76_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = reinterpret_cast<intptr_t>((unmarshaled.___m_CachedPtr_1).___m_value_0);
}
extern "C" void Object_t76_marshal_back(const Object_t76_marshaled& marshaled, Object_t76& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	(unmarshaled.___m_CachedPtr_1).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_CachedPtr_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
extern "C" void Object_t76_marshal_cleanup(Object_t76_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_19.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Void UnityEngine.Component::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Component__ctor_m3336 (Component_t178 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m3321(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t41 * Component_get_transform_m519 (Component_t178 * __this, const MethodInfo* method)
{
	typedef Transform_t41 * (*Component_get_transform_m519_ftn) (Component_t178 *);
	static Component_get_transform_m519_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m519_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t11 * Component_get_gameObject_m547 (Component_t178 * __this, const MethodInfo* method)
{
	typedef GameObject_t11 * (*Component_get_gameObject_m547_ftn) (Component_t178 *);
	static Component_get_gameObject_m547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" Component_t178 * Component_GetComponent_m2669 (Component_t178 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		GameObject_t11 * L_0 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t178 * L_2 = GameObject_GetComponent_m3342(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Component_GetComponentFastPath_m3337 (Component_t178 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m3337_ftn) (Component_t178 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m3337_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m3337_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t178 * Component_GetComponentInChildren_m3338 (Component_t178 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t11 * L_0 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t178 * L_2 = GameObject_GetComponentInChildren_m3344(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void Component_GetComponentsForListInternal_m3339 (Component_t178 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m3339_ftn) (Component_t178 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m3339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m3339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_19.h"
extern "C" void Component_GetComponents_m2382 (Component_t178 * __this, Type_t * ___type, List_1_t498 * ___results, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t498 * L_1 = ___results;
		Component_GetComponentsForListInternal_m3339(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Component::get_tag()
extern "C" String_t* Component_get_tag_m560 (Component_t178 * __this, const MethodInfo* method)
{
	{
		GameObject_t11 * L_0 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = GameObject_get_tag_m3346(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern "C" void Component_SendMessage_m3340 (Component_t178 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*Component_SendMessage_m3340_ftn) (Component_t178 *, String_t*, Object_t *, int32_t);
	static Component_SendMessage_m3340_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_SendMessage_m3340_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C" void Component_SendMessage_m678 (Component_t178 * __this, String_t* ___methodName, const MethodInfo* method)
{
	int32_t V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_1;
		int32_t L_2 = V_0;
		Component_SendMessage_m3340(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m507 (Component_t178 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		Component_SendMessage_m3340(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m3341 (Component_t178 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method)
{
	typedef void (*Component_BroadcastMessage_m3341_ftn) (Component_t178 *, String_t*, Object_t *, int32_t);
	static Component_BroadcastMessage_m3341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_BroadcastMessage_m3341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___parameter, ___options);
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m689 (Component_t178 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		Component_BroadcastMessage_m3341(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"
// System.Single UnityEngine.Light::get_shadowStrength()
extern "C" float Light_get_shadowStrength_m657 (Light_t93 * __this, const MethodInfo* method)
{
	typedef float (*Light_get_shadowStrength_m657_ftn) (Light_t93 *);
	static Light_get_shadowStrength_m657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_get_shadowStrength_m657_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::get_shadowStrength()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Light::set_shadowStrength(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Light_set_shadowStrength_m665 (Light_t93 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Light_set_shadowStrength_m665_ftn) (Light_t93 *, float);
	static Light_set_shadowStrength_m665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_set_shadowStrength_m665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::set_shadowStrength(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Light::set_shadowBias(System.Single)
extern "C" void Light_set_shadowBias_m664 (Light_t93 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Light_set_shadowBias_m664_ftn) (Light_t93 *, float);
	static Light_set_shadowBias_m664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_set_shadowBias_m664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::set_shadowBias(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// System.Void UnityEngine.GameObject::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" void GameObject__ctor_m571 (GameObject_t11 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m3321(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m3351(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor()
extern "C" void GameObject__ctor_m907 (GameObject_t11 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m3321(__this, /*hidden argument*/NULL);
		GameObject_Internal_CreateGameObject_m3351(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" Component_t178 * GameObject_GetComponent_m3342 (GameObject_t11 * __this, Type_t * ___type, const MethodInfo* method)
{
	typedef Component_t178 * (*GameObject_GetComponent_m3342_ftn) (GameObject_t11 *, Type_t *);
	static GameObject_GetComponent_m3342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m3342_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void GameObject_GetComponentFastPath_m3343 (GameObject_t11 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m3343_ftn) (GameObject_t11 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m3343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m3343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t41_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" Component_t178 * GameObject_GetComponentInChildren_m3344 (GameObject_t11 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Transform_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Component_t178 * V_0 = {0};
	Transform_t41 * V_1 = {0};
	Transform_t41 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t178 * V_4 = {0};
	Component_t178 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m2286(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t178 * L_2 = GameObject_GetComponent_m3342(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t178 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m548(NULL /*static, unused*/, L_3, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t178 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t41 * L_6 = GameObject_get_transform_m534(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t41 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m548(NULL /*static, unused*/, L_7, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t41 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_11);
			V_2 = ((Transform_t41 *)CastclassClass(L_12, Transform_t41_il2cpp_TypeInfo_var));
			Transform_t41 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t11 * L_14 = Component_get_gameObject_m547(L_13, /*hidden argument*/NULL);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t178 * L_16 = GameObject_GetComponentInChildren_m3344(L_14, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			Component_t178 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m548(NULL /*static, unused*/, L_17, (Object_t76 *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t178 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0040;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_6;
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(128)
		}

IL_008d:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0095:
	{
		return (Component_t178 *)NULL;
	}

IL_0097:
	{
		Component_t178 * L_25 = V_5;
		return L_25;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Array_t * GameObject_GetComponentsInternal_m3345 (GameObject_t11 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m3345_ftn) (GameObject_t11 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m3345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m3345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t41 * GameObject_get_transform_m534 (GameObject_t11 * __this, const MethodInfo* method)
{
	typedef Transform_t41 * (*GameObject_get_transform_m534_ftn) (GameObject_t11 *);
	static GameObject_get_transform_m534_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m534_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m2532 (GameObject_t11 * __this, const MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2532_ftn) (GameObject_t11 *);
	static GameObject_get_layer_m2532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GameObject_set_layer_m2533 (GameObject_t11 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m2533_ftn) (GameObject_t11 *, int32_t);
	static GameObject_set_layer_m2533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m2533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m444 (GameObject_t11 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m444_ftn) (GameObject_t11 *, bool);
	static GameObject_SetActive_m444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m953 (GameObject_t11 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m953_ftn) (GameObject_t11 *);
	static GameObject_get_activeSelf_m953_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m953_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m2286 (GameObject_t11 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m2286_ftn) (GameObject_t11 *);
	static GameObject_get_activeInHierarchy_m2286_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m2286_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.GameObject::get_tag()
extern "C" String_t* GameObject_get_tag_m3346 (GameObject_t11 * __this, const MethodInfo* method)
{
	typedef String_t* (*GameObject_get_tag_m3346_ftn) (GameObject_t11 *);
	static GameObject_get_tag_m3346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_tag_m3346_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" GameObject_t11 * GameObject_FindGameObjectWithTag_m533 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method)
{
	typedef GameObject_t11 * (*GameObject_FindGameObjectWithTag_m533_ftn) (String_t*);
	static GameObject_FindGameObjectWithTag_m533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectWithTag_m533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(___tag);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern "C" void GameObject_SendMessage_m3347 (GameObject_t11 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m3347_ftn) (GameObject_t11 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m3347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m3347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_BroadcastMessage_m3348 (GameObject_t11 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_BroadcastMessage_m3348_ftn) (GameObject_t11 *, String_t*, Object_t *, int32_t);
	static GameObject_BroadcastMessage_m3348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_BroadcastMessage_m3348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___parameter, ___options);
}
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String)
extern "C" void GameObject_BroadcastMessage_m597 (GameObject_t11 * __this, String_t* ___methodName, const MethodInfo* method)
{
	int32_t V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_1;
		int32_t L_2 = V_0;
		GameObject_BroadcastMessage_m3348(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t178 * GameObject_Internal_AddComponentWithType_m3349 (GameObject_t11 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t178 * (*GameObject_Internal_AddComponentWithType_m3349_ftn) (GameObject_t11 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m3349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m3349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t178 * GameObject_AddComponent_m3350 (GameObject_t11 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t178 * L_1 = GameObject_Internal_AddComponentWithType_m3349(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern "C" void GameObject_Internal_CreateGameObject_m3351 (Object_t * __this /* static, unused */, GameObject_t11 * ___mono, String_t* ___name, const MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m3351_ftn) (GameObject_t11 *, String_t*);
	static GameObject_Internal_CreateGameObject_m3351_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m3351_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Enumerator__ctor_m3352 (Enumerator_t639 * __this, Transform_t41 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Transform_t41 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Object_t * Enumerator_get_Current_m3353 (Enumerator_t639 * __this, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t41 * L_2 = Transform_GetChild_m2668(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m3354 (Enumerator_t639 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t41 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m2670(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Vector3_t42  Transform_get_position_m518 (Transform_t41 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m3355(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Transform_set_position_m532 (Transform_t41 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m3356(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m3355 (Transform_t41 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m3355_ftn) (Transform_t41 *, Vector3_t42 *);
	static Transform_INTERNAL_get_position_m3355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m3355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m3356 (Transform_t41 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m3356_ftn) (Transform_t41 *, Vector3_t42 *);
	static Transform_INTERNAL_set_position_m3356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m3356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t42  Transform_get_localPosition_m625 (Transform_t41 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m3357(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m2542 (Transform_t41 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m3358(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m3357 (Transform_t41 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m3357_ftn) (Transform_t41 *, Vector3_t42 *);
	static Transform_INTERNAL_get_localPosition_m3357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m3357_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m3358 (Transform_t41 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m3358_ftn) (Transform_t41 *, Vector3_t42 *);
	static Transform_INTERNAL_set_localPosition_m3358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m3358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern "C" Vector3_t42  Transform_get_eulerAngles_m696 (Transform_t41 * __this, const MethodInfo* method)
{
	Quaternion_t106  V_0 = {0};
	{
		Quaternion_t106  L_0 = Transform_get_rotation_m598(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3_t42  L_1 = Quaternion_get_eulerAngles_m3061((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" Vector3_t42  Transform_get_forward_m619 (Transform_t41 * __this, const MethodInfo* method)
{
	{
		Quaternion_t106  L_0 = Transform_get_rotation_m598(__this, /*hidden argument*/NULL);
		Vector3_t42  L_1 = Vector3_get_forward_m530(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_2 = Quaternion_op_Multiply_m698(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t106  Transform_get_rotation_m598 (Transform_t41 * __this, const MethodInfo* method)
{
	Quaternion_t106  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m3359(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t106  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" void Transform_set_rotation_m675 (Transform_t41 * __this, Quaternion_t106  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m3360(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m3359 (Transform_t41 * __this, Quaternion_t106 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m3359_ftn) (Transform_t41 *, Quaternion_t106 *);
	static Transform_INTERNAL_get_rotation_m3359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m3359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m3360 (Transform_t41 * __this, Quaternion_t106 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m3360_ftn) (Transform_t41 *, Quaternion_t106 *);
	static Transform_INTERNAL_set_rotation_m3360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m3360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t106  Transform_get_localRotation_m692 (Transform_t41 * __this, const MethodInfo* method)
{
	Quaternion_t106  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m3361(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t106  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m693 (Transform_t41 * __this, Quaternion_t106  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m3362(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m3361 (Transform_t41 * __this, Quaternion_t106 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m3361_ftn) (Transform_t41 *, Quaternion_t106 *);
	static Transform_INTERNAL_get_localRotation_m3361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m3361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m3362 (Transform_t41 * __this, Quaternion_t106 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m3362_ftn) (Transform_t41 *, Quaternion_t106 *);
	static Transform_INTERNAL_set_localRotation_m3362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m3362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t42  Transform_get_localScale_m558 (Transform_t41 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m3363(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m559 (Transform_t41 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m3364(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m3363 (Transform_t41 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m3363_ftn) (Transform_t41 *, Vector3_t42 *);
	static Transform_INTERNAL_get_localScale_m3363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m3363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m3364 (Transform_t41 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m3364_ftn) (Transform_t41 *, Vector3_t42 *);
	static Transform_INTERNAL_set_localScale_m3364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m3364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t41 * Transform_get_parent_m2282 (Transform_t41 * __this, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = Transform_get_parentInternal_m3365(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* RectTransform_t361_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral392;
extern "C" void Transform_set_parent_m521 (Transform_t41 * __this, Transform_t41 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		_stringLiteral392 = il2cpp_codegen_string_literal_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((RectTransform_t361 *)IsInstSealed(__this, RectTransform_t361_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m2617(NULL /*static, unused*/, _stringLiteral392, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Transform_t41 * L_0 = ___value;
		Transform_set_parentInternal_m3366(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t41 * Transform_get_parentInternal_m3365 (Transform_t41 * __this, const MethodInfo* method)
{
	typedef Transform_t41 * (*Transform_get_parentInternal_m3365_ftn) (Transform_t41 *);
	static Transform_get_parentInternal_m3365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m3365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m3366 (Transform_t41 * __this, Transform_t41 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m3366_ftn) (Transform_t41 *, Transform_t41 *);
	static Transform_set_parentInternal_m3366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m3366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m2530 (Transform_t41 * __this, Transform_t41 * ___parent, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = ___parent;
		Transform_SetParent_m3367(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Transform_SetParent_m3367 (Transform_t41 * __this, Transform_t41 * ___parent, bool ___worldPositionStays, const MethodInfo* method)
{
	typedef void (*Transform_SetParent_m3367_ftn) (Transform_t41 *, Transform_t41 *, bool);
	static Transform_SetParent_m3367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m3367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t536  Transform_get_worldToLocalMatrix_m2588 (Transform_t41 * __this, const MethodInfo* method)
{
	Matrix4x4_t536  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m3368(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t536  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m3368 (Transform_t41 * __this, Matrix4x4_t536 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m3368_ftn) (Transform_t41 *, Matrix4x4_t536 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m3368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m3368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
extern "C" void Transform_Translate_m617 (Transform_t41 * __this, Vector3_t42  ___translation, int32_t ___relativeTo, const MethodInfo* method)
{
	{
		int32_t L_0 = ___relativeTo;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t42  L_1 = Transform_get_position_m518(__this, /*hidden argument*/NULL);
		Vector3_t42  L_2 = ___translation;
		Vector3_t42  L_3 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Transform_set_position_m532(__this, L_3, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_001d:
	{
		Vector3_t42  L_4 = Transform_get_position_m518(__this, /*hidden argument*/NULL);
		Vector3_t42  L_5 = ___translation;
		Vector3_t42  L_6 = Transform_TransformDirection_m3372(__this, L_5, /*hidden argument*/NULL);
		Vector3_t42  L_7 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Transform_set_position_m532(__this, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m618 (Transform_t41 * __this, Vector3_t42  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method)
{
	Quaternion_t106  V_0 = {0};
	{
		float L_0 = ((&___eulerAngles)->___x_1);
		float L_1 = ((&___eulerAngles)->___y_2);
		float L_2 = ((&___eulerAngles)->___z_3);
		Quaternion_t106  L_3 = Quaternion_Euler_m694(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___relativeTo;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_t106  L_5 = Transform_get_localRotation_m692(__this, /*hidden argument*/NULL);
		Quaternion_t106  L_6 = V_0;
		Quaternion_t106  L_7 = Quaternion_op_Multiply_m695(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Transform_set_localRotation_m693(__this, L_7, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0039:
	{
		Quaternion_t106  L_8 = Transform_get_rotation_m598(__this, /*hidden argument*/NULL);
		Quaternion_t106  L_9 = Transform_get_rotation_m598(__this, /*hidden argument*/NULL);
		Quaternion_t106  L_10 = Quaternion_Inverse_m2606(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Quaternion_t106  L_11 = V_0;
		Quaternion_t106  L_12 = Quaternion_op_Multiply_m695(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Quaternion_t106  L_13 = Transform_get_rotation_m598(__this, /*hidden argument*/NULL);
		Quaternion_t106  L_14 = Quaternion_op_Multiply_m695(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Quaternion_t106  L_15 = Quaternion_op_Multiply_m695(NULL /*static, unused*/, L_8, L_14, /*hidden argument*/NULL);
		Transform_set_rotation_m675(__this, L_15, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern "C" void Transform_LookAt_m699 (Transform_t41 * __this, Transform_t41 * ___target, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Vector3_t42  L_0 = Vector3_get_up_m658(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t41 * L_1 = ___target;
		Vector3_t42  L_2 = V_0;
		Transform_LookAt_m3369(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Transform_LookAt_m3369 (Transform_t41 * __this, Transform_t41 * ___target, Vector3_t42  ___worldUp, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = ___target;
		bool L_1 = Object_op_Implicit_m554(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_t41 * L_2 = ___target;
		NullCheck(L_2);
		Vector3_t42  L_3 = Transform_get_position_m518(L_2, /*hidden argument*/NULL);
		Vector3_t42  L_4 = ___worldUp;
		Transform_LookAt_m3370(__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m3370 (Transform_t41 * __this, Vector3_t42  ___worldPosition, Vector3_t42  ___worldUp, const MethodInfo* method)
{
	{
		Transform_INTERNAL_CALL_LookAt_m3371(NULL /*static, unused*/, __this, (&___worldPosition), (&___worldUp), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C" void Transform_LookAt_m622 (Transform_t41 * __this, Vector3_t42  ___worldPosition, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Vector3_t42  L_0 = Vector3_get_up_m658(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_INTERNAL_CALL_LookAt_m3371(NULL /*static, unused*/, __this, (&___worldPosition), (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m3371 (Object_t * __this /* static, unused */, Transform_t41 * ___self, Vector3_t42 * ___worldPosition, Vector3_t42 * ___worldUp, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_LookAt_m3371_ftn) (Transform_t41 *, Vector3_t42 *, Vector3_t42 *);
	static Transform_INTERNAL_CALL_LookAt_m3371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_LookAt_m3371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___worldPosition, ___worldUp);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t42  Transform_TransformDirection_m3372 (Transform_t41 * __this, Vector3_t42  ___direction, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Transform_INTERNAL_CALL_TransformDirection_m3373(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t42  Transform_INTERNAL_CALL_TransformDirection_m3373 (Object_t * __this /* static, unused */, Transform_t41 * ___self, Vector3_t42 * ___direction, const MethodInfo* method)
{
	typedef Vector3_t42  (*Transform_INTERNAL_CALL_TransformDirection_m3373_ftn) (Transform_t41 *, Vector3_t42 *);
	static Transform_INTERNAL_CALL_TransformDirection_m3373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m3373_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t42  Transform_TransformPoint_m2607 (Transform_t41 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Transform_INTERNAL_CALL_TransformPoint_m3374(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t42  Transform_INTERNAL_CALL_TransformPoint_m3374 (Object_t * __this /* static, unused */, Transform_t41 * ___self, Vector3_t42 * ___position, const MethodInfo* method)
{
	typedef Vector3_t42  (*Transform_INTERNAL_CALL_TransformPoint_m3374_ftn) (Transform_t41 *, Vector3_t42 *);
	static Transform_INTERNAL_CALL_TransformPoint_m3374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m3374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t42  Transform_InverseTransformPoint_m2503 (Transform_t41 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m3375(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t42  Transform_INTERNAL_CALL_InverseTransformPoint_m3375 (Object_t * __this /* static, unused */, Transform_t41 * ___self, Vector3_t42 * ___position, const MethodInfo* method)
{
	typedef Vector3_t42  (*Transform_INTERNAL_CALL_InverseTransformPoint_m3375_ftn) (Transform_t41 *, Vector3_t42 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m3375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m3375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m2670 (Transform_t41 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m2670_ftn) (Transform_t41 *);
	static Transform_get_childCount_m2670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m2670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::DetachChildren()
extern "C" void Transform_DetachChildren_m704 (Transform_t41 * __this, const MethodInfo* method)
{
	typedef void (*Transform_DetachChildren_m704_ftn) (Transform_t41 *);
	static Transform_DetachChildren_m704_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_DetachChildren_m704_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::DetachChildren()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m2531 (Transform_t41 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m2531_ftn) (Transform_t41 *);
	static Transform_SetAsFirstSibling_m2531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m2531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" Transform_t41 * Transform_Find_m541 (Transform_t41 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef Transform_t41 * (*Transform_Find_m541_ftn) (Transform_t41 *, String_t*);
	static Transform_Find_m541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_Find_m541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"
extern TypeInfo* Enumerator_t639_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m3376 (Transform_t41 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t639 * L_0 = (Enumerator_t639 *)il2cpp_codegen_object_new (Enumerator_t639_il2cpp_TypeInfo_var);
		Enumerator__ctor_m3352(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Transform_t41 * Transform_GetChild_m2668 (Transform_t41 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t41 * (*Transform_GetChild_m2668_ftn) (Transform_t41 *, int32_t);
	static Transform_GetChild_m2668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m2668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Single UnityEngine.Time::get_time()
extern "C" float Time_get_time_m686 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_time_m686_ftn) ();
	static Time_get_time_m686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m527 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m527_ftn) ();
	static Time_get_deltaTime_m527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_fixedTime()
extern "C" float Time_get_fixedTime_m425 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_fixedTime_m425_ftn) ();
	static Time_get_fixedTime_m425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_fixedTime_m425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_fixedTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m2318 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m2318_ftn) ();
	static Time_get_unscaledTime_m2318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m2318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m2356 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m2356_ftn) ();
	static Time_get_unscaledDeltaTime_m2356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m2356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeScale()
extern "C" float Time_get_timeScale_m439 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_timeScale_m439_ftn) ();
	static Time_get_timeScale_m439_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeScale_m439_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" int32_t Time_get_frameCount_m565 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Time_get_frameCount_m565_ftn) ();
	static Time_get_frameCount_m565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_frameCount_m565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" float Time_get_realtimeSinceStartup_m616 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_realtimeSinceStartup_m616_ftn) ();
	static Time_get_realtimeSinceStartup_m616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_realtimeSinceStartup_m616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_realtimeSinceStartup()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" float Random_Range_m687 (Object_t * __this /* static, unused */, float ___min, float ___max, const MethodInfo* method)
{
	typedef float (*Random_Range_m687_ftn) (float, float);
	static Random_Range_m687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern "C" int32_t Random_Range_m506 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m3377(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m3377 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m3377_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m3377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m3377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
// System.Void UnityEngine.YieldInstruction::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void YieldInstruction__ctor_m3378 (YieldInstruction_t558 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t558_marshal(const YieldInstruction_t558& unmarshaled, YieldInstruction_t558_marshaled& marshaled)
{
}
extern "C" void YieldInstruction_t558_marshal_back(const YieldInstruction_t558_marshaled& marshaled, YieldInstruction_t558& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t558_marshal_cleanup(YieldInstruction_t558_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsException.h"
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Void UnityEngine.PlayerPrefsException::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern "C" void PlayerPrefsException__ctor_m3379 (PlayerPrefsException_t642 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		String_t* L_0 = ___error;
		Exception__ctor_m457(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" bool PlayerPrefs_TrySetSetString_m3380 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetSetString_m3380_ftn) (String_t*, String_t*);
	static PlayerPrefs_TrySetSetString_m3380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetSetString_m3380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t PlayerPrefs_GetInt_m3381 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, const MethodInfo* method)
{
	typedef int32_t (*PlayerPrefs_GetInt_m3381_ftn) (String_t*, int32_t);
	static PlayerPrefs_GetInt_m3381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetInt_m3381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
extern "C" int32_t PlayerPrefs_GetInt_m1074 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___key;
		int32_t L_1 = V_0;
		int32_t L_2 = PlayerPrefs_GetInt_m3381(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" float PlayerPrefs_GetFloat_m3382 (Object_t * __this /* static, unused */, String_t* ___key, float ___defaultValue, const MethodInfo* method)
{
	typedef float (*PlayerPrefs_GetFloat_m3382_ftn) (String_t*, float);
	static PlayerPrefs_GetFloat_m3382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetFloat_m3382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
extern "C" float PlayerPrefs_GetFloat_m1073 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___key;
		float L_1 = V_0;
		float L_2 = PlayerPrefs_GetFloat_m3382(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"
extern TypeInfo* PlayerPrefsException_t642_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral393;
extern "C" void PlayerPrefs_SetString_m512 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		_stringLiteral393 = il2cpp_codegen_string_literal_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		String_t* L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetSetString_m3380(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t642 * L_3 = (PlayerPrefsException_t642 *)il2cpp_codegen_object_new (PlayerPrefsException_t642_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m3379(L_3, _stringLiteral393, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m3383 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, const MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m3383_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m3383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m3383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PlayerPrefs_GetString_m510 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m3383(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" bool PlayerPrefs_HasKey_m509 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_HasKey_m509_ftn) (String_t*);
	static PlayerPrefs_HasKey_m509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_HasKey_m509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::HasKey(System.String)");
	return _il2cpp_icall_func(___key);
}
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
extern "C" void PlayerPrefs_DeleteKey_m1076 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	typedef void (*PlayerPrefs_DeleteKey_m1076_ftn) (String_t*);
	static PlayerPrefs_DeleteKey_m1076_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_DeleteKey_m1076_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::DeleteKey(System.String)");
	_il2cpp_icall_func(___key);
}
// System.Void UnityEngine.PlayerPrefs::Save()
extern "C" void PlayerPrefs_Save_m1000 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*PlayerPrefs_Save_m1000_ftn) ();
	static PlayerPrefs_Save_m1000_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_Save_m1000_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::Save()");
	_il2cpp_icall_func();
}
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void ParticleSystem_set_enableEmission_m688 (ParticleSystem_t111 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*ParticleSystem_set_enableEmission_m688_ftn) (ParticleSystem_t111 *, bool);
	static ParticleSystem_set_enableEmission_m688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_enableEmission_m688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C" float ParticleSystem_get_startLifetime_m684 (ParticleSystem_t111 * __this, const MethodInfo* method)
{
	typedef float (*ParticleSystem_get_startLifetime_m684_ftn) (ParticleSystem_t111 *);
	static ParticleSystem_get_startLifetime_m684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startLifetime_m684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startLifetime()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t42  Particle_get_position_m3384 (Particle_t644 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Particle_set_position_m3385 (Particle_t644 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t42  Particle_get_velocity_m3386 (Particle_t644 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m3387 (Particle_t644 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m3388 (Particle_t644 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Particle_set_energy_m3389 (Particle_t644 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m3390 (Particle_t644 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m3391 (Particle_t644 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m3392 (Particle_t644 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m3393 (Particle_t644 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m3394 (Particle_t644 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m3395 (Particle_t644 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m3396 (Particle_t644 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m3397 (Particle_t644 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t203  Particle_get_color_m3398 (Particle_t644 * __this, const MethodInfo* method)
{
	{
		Color_t203  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void Particle_set_color_m3399 (Particle_t644 * __this, Color_t203  ___value, const MethodInfo* method)
{
	{
		Color_t203  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
extern "C" bool Physics_Internal_Raycast_m3400 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, RaycastHit_t196 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		RaycastHit_t196 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m3401(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m3401 (Object_t * __this /* static, unused */, Vector3_t42 * ___origin, Vector3_t42 * ___direction, RaycastHit_t196 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m3401_ftn) (Vector3_t42 *, Vector3_t42 *, RaycastHit_t196 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m3401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m3401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m620 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, RaycastHit_t196 * ___hitInfo, float ___maxDistance, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Vector3_t42  L_0 = ___origin;
		Vector3_t42  L_1 = ___direction;
		RaycastHit_t196 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m643(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m643 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, RaycastHit_t196 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___origin;
		Vector3_t42  L_1 = ___direction;
		RaycastHit_t196 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m3400(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" bool Physics_Raycast_m661 (Object_t * __this /* static, unused */, Ray_t89  ___ray, RaycastHit_t196 * ___hitInfo, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = ((int32_t)-5);
		V_1 = (std::numeric_limits<float>::infinity());
		Ray_t89  L_0 = ___ray;
		RaycastHit_t196 * L_1 = ___hitInfo;
		float L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m2418(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern "C" bool Physics_Raycast_m2418 (Object_t * __this /* static, unused */, Ray_t89  ___ray, RaycastHit_t196 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Ray_get_origin_m641((&___ray), /*hidden argument*/NULL);
		Vector3_t42  L_1 = Ray_get_direction_m642((&___ray), /*hidden argument*/NULL);
		RaycastHit_t196 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m643(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t510* Physics_RaycastAll_m2346 (Object_t * __this /* static, unused */, Ray_t89  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Ray_get_origin_m641((&___ray), /*hidden argument*/NULL);
		Vector3_t42  L_1 = Ray_get_direction_m642((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t510* L_4 = Physics_RaycastAll_m3402(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t510* Physics_RaycastAll_m3402 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t510* L_2 = Physics_INTERNAL_CALL_RaycastAll_m3403(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t510* Physics_INTERNAL_CALL_RaycastAll_m3403 (Object_t * __this /* static, unused */, Vector3_t42 * ___origin, Vector3_t42 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t510* (*Physics_INTERNAL_CALL_RaycastAll_m3403_ftn) (Vector3_t42 *, Vector3_t42 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m3403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m3403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
extern "C" void Rigidbody_set_velocity_m676 (Rigidbody_t108 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_velocity_m3404(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m3404 (Rigidbody_t108 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_velocity_m3404_ftn) (Rigidbody_t108 *, Vector3_t42 *);
	static Rigidbody_INTERNAL_set_velocity_m3404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_velocity_m3404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_angularVelocity_m677 (Rigidbody_t108 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_angularVelocity_m3405(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m3405 (Rigidbody_t108 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_angularVelocity_m3405_ftn) (Rigidbody_t108 *, Vector3_t42 *);
	static Rigidbody_INTERNAL_set_angularVelocity_m3405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_angularVelocity_m3405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C" float Rigidbody_get_drag_m631 (Rigidbody_t108 * __this, const MethodInfo* method)
{
	typedef float (*Rigidbody_get_drag_m631_ftn) (Rigidbody_t108 *);
	static Rigidbody_get_drag_m631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_drag_m631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_drag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Rigidbody_set_drag_m633 (Rigidbody_t108 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_set_drag_m633_ftn) (Rigidbody_t108 *, float);
	static Rigidbody_set_drag_m633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_drag_m633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_drag(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C" float Rigidbody_get_angularDrag_m632 (Rigidbody_t108 * __this, const MethodInfo* method)
{
	typedef float (*Rigidbody_get_angularDrag_m632_ftn) (Rigidbody_t108 *);
	static Rigidbody_get_angularDrag_m632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_angularDrag_m632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_angularDrag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C" void Rigidbody_set_angularDrag_m634 (Rigidbody_t108 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_set_angularDrag_m634_ftn) (Rigidbody_t108 *, float);
	static Rigidbody_set_angularDrag_m634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_angularDrag_m634_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_angularDrag(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C" bool Rigidbody_get_isKinematic_m645 (Rigidbody_t108 * __this, const MethodInfo* method)
{
	typedef bool (*Rigidbody_get_isKinematic_m645_ftn) (Rigidbody_t108 *);
	static Rigidbody_get_isKinematic_m645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_isKinematic_m645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_isKinematic()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Rigidbody_set_isKinematic_m648 (Rigidbody_t108 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_set_isKinematic_m648_ftn) (Rigidbody_t108 *, bool);
	static Rigidbody_set_isKinematic_m648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_isKinematic_m648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_Joint.h"
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_JointMethodDeclarations.h"
// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C" Rigidbody_t108 * Joint_get_connectedBody_m630 (Joint_t646 * __this, const MethodInfo* method)
{
	typedef Rigidbody_t108 * (*Joint_get_connectedBody_m630_ftn) (Joint_t646 *);
	static Joint_get_connectedBody_m630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_get_connectedBody_m630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::get_connectedBody()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
extern "C" void Joint_set_connectedBody_m638 (Joint_t646 * __this, Rigidbody_t108 * ___value, const MethodInfo* method)
{
	typedef void (*Joint_set_connectedBody_m638_ftn) (Joint_t646 *, Rigidbody_t108 *);
	static Joint_set_connectedBody_m638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_set_connectedBody_m638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_JointMethodDeclarations.h"
extern "C" void Joint_set_anchor_m649 (Joint_t646 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Joint_INTERNAL_set_anchor_m3406(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C" void Joint_INTERNAL_set_anchor_m3406 (Joint_t646 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Joint_INTERNAL_set_anchor_m3406_ftn) (Joint_t646 *, Vector3_t42 *);
	static Joint_INTERNAL_set_anchor_m3406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_INTERNAL_set_anchor_m3406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJoint.h"
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJointMethodDeclarations.h"
// System.Void UnityEngine.SpringJoint::set_spring(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void SpringJoint_set_spring_m650 (SpringJoint_t91 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*SpringJoint_set_spring_m650_ftn) (SpringJoint_t91 *, float);
	static SpringJoint_set_spring_m650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint_set_spring_m650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_spring(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.SpringJoint::set_damper(System.Single)
extern "C" void SpringJoint_set_damper_m651 (SpringJoint_t91 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*SpringJoint_set_damper_m651_ftn) (SpringJoint_t91 *, float);
	static SpringJoint_set_damper_m651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint_set_damper_m651_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_damper(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.SpringJoint::set_maxDistance(System.Single)
extern "C" void SpringJoint_set_maxDistance_m652 (SpringJoint_t91 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*SpringJoint_set_maxDistance_m652_ftn) (SpringJoint_t91 *, float);
	static SpringJoint_set_maxDistance_m652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint_set_maxDistance_m652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t108 * Collider_get_attachedRigidbody_m3407 (Collider_t144 * __this, const MethodInfo* method)
{
	typedef Rigidbody_t108 * (*Collider_get_attachedRigidbody_m3407_ftn) (Collider_t144 *);
	static Collider_get_attachedRigidbody_m3407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m3407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t42  RaycastHit_get_point_m621 (RaycastHit_t196 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t42  RaycastHit_get_normal_m2350 (RaycastHit_t196 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m653 (RaycastHit_t196 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t144 * RaycastHit_get_collider_m2349 (RaycastHit_t196 * __this, const MethodInfo* method)
{
	{
		Collider_t144 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
extern "C" Rigidbody_t108 * RaycastHit_get_rigidbody_m644 (RaycastHit_t196 * __this, const MethodInfo* method)
{
	Rigidbody_t108 * G_B3_0 = {0};
	{
		Collider_t144 * L_0 = RaycastHit_get_collider_m2349(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m548(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider_t144 * L_2 = RaycastHit_get_collider_m2349(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_t108 * L_3 = Collider_get_attachedRigidbody_m3407(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody_t108 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_30.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Void UnityEngine.Physics2D::.cctor()
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
extern TypeInfo* List_1_t647_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4057_MethodInfo_var;
extern "C" void Physics2D__cctor_m3408 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		List_1__ctor_m4057_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484047);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t647 * L_0 = (List_1_t647 *)il2cpp_codegen_object_new (List_1_t647_il2cpp_TypeInfo_var);
		List_1__ctor_m4057(L_0, /*hidden argument*/List_1__ctor_m4057_MethodInfo_var);
		((Physics2D_t180_StaticFields*)Physics2D_t180_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Physics2D::get_gravity()
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" Vector2_t44  Physics2D_get_gravity_m933 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t44  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_get_gravity_m3409(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector2_t44  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Physics2D::set_gravity(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" void Physics2D_set_gravity_m1022 (Object_t * __this /* static, unused */, Vector2_t44  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_set_gravity_m3410(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_get_gravity(UnityEngine.Vector2&)
extern "C" void Physics2D_INTERNAL_get_gravity_m3409 (Object_t * __this /* static, unused */, Vector2_t44 * ___value, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_get_gravity_m3409_ftn) (Vector2_t44 *);
	static Physics2D_INTERNAL_get_gravity_m3409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_get_gravity_m3409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_get_gravity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Physics2D::INTERNAL_set_gravity(UnityEngine.Vector2&)
extern "C" void Physics2D_INTERNAL_set_gravity_m3410 (Object_t * __this /* static, unused */, Vector2_t44 * ___value, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_set_gravity_m3410_ftn) (Vector2_t44 *);
	static Physics2D_INTERNAL_set_gravity_m3410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_set_gravity_m3410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_set_gravity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m3411 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t269 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t269 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m3412(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m3412 (Object_t * __this /* static, unused */, Vector2_t44 * ___origin, Vector2_t44 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t269 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m3412_ftn) (Vector2_t44 *, Vector2_t44 *, float, int32_t, float, float, RaycastHit2D_t269 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m3412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m3412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t269  Physics2D_Raycast_m2419 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t44  L_0 = ___origin;
		Vector2_t44  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		RaycastHit2D_t269  L_6 = Physics2D_Raycast_m3413(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t269  Physics2D_Raycast_m955 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = ((int32_t)-5);
		V_3 = (std::numeric_limits<float>::infinity());
		Vector2_t44  L_0 = ___origin;
		Vector2_t44  L_1 = ___direction;
		float L_2 = V_3;
		int32_t L_3 = V_2;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		RaycastHit2D_t269  L_6 = Physics2D_Raycast_m3413(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t269  Physics2D_Raycast_m3413 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t269  V_0 = {0};
	{
		Vector2_t44  L_0 = ___origin;
		Vector2_t44  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m3411(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t269  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t509* Physics2D_RaycastAll_m2337 (Object_t * __this /* static, unused */, Vector2_t44  ___origin, Vector2_t44  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t509* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m3414(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t509* Physics2D_INTERNAL_CALL_RaycastAll_m3414 (Object_t * __this /* static, unused */, Vector2_t44 * ___origin, Vector2_t44 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t509* (*Physics2D_INTERNAL_CALL_RaycastAll_m3414_ftn) (Vector2_t44 *, Vector2_t44 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m3414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m3414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" Collider2D_t142 * Physics2D_OverlapCircle_m553 (Object_t * __this /* static, unused */, Vector2_t44  ___point, float ___radius, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___radius;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Collider2D_t142 * L_4 = Physics2D_INTERNAL_CALL_OverlapCircle_m3415(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircle(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2D_t142 * Physics2D_INTERNAL_CALL_OverlapCircle_m3415 (Object_t * __this /* static, unused */, Vector2_t44 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef Collider2D_t142 * (*Physics2D_INTERNAL_CALL_OverlapCircle_m3415_ftn) (Vector2_t44 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_OverlapCircle_m3415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_OverlapCircle_m3415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircle(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___point, ___radius, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" Collider2DU5BU5D_t179* Physics2D_OverlapCircleAll_m546 (Object_t * __this /* static, unused */, Vector2_t44  ___point, float ___radius, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___radius;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t179* L_4 = Physics2D_INTERNAL_CALL_OverlapCircleAll_m3416(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2DU5BU5D_t179* Physics2D_INTERNAL_CALL_OverlapCircleAll_m3416 (Object_t * __this /* static, unused */, Vector2_t44 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef Collider2DU5BU5D_t179* (*Physics2D_INTERNAL_CALL_OverlapCircleAll_m3416_ftn) (Vector2_t44 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_OverlapCircleAll_m3416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_OverlapCircleAll_m3416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___point, ___radius, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t44  RaycastHit2D_get_point_m963 (RaycastHit2D_t269 * __this, const MethodInfo* method)
{
	{
		Vector2_t44  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t44  RaycastHit2D_get_normal_m2341 (RaycastHit2D_t269 * __this, const MethodInfo* method)
{
	{
		Vector2_t44  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_distance()
extern "C" float RaycastHit2D_get_distance_m973 (RaycastHit2D_t269 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m2420 (RaycastHit2D_t269 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t142 * RaycastHit2D_get_collider_m2338 (RaycastHit2D_t269 * __this, const MethodInfo* method)
{
	{
		Collider2D_t142 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern "C" Rigidbody2D_t49 * RaycastHit2D_get_rigidbody_m958 (RaycastHit2D_t269 * __this, const MethodInfo* method)
{
	Rigidbody2D_t49 * G_B3_0 = {0};
	{
		Collider2D_t142 * L_0 = RaycastHit2D_get_collider_m2338(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m548(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t142 * L_2 = RaycastHit2D_get_collider_m2338(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t49 * L_3 = Collider2D_get_attachedRigidbody_m3421(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t49 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" Transform_t41 * RaycastHit2D_get_transform_m966 (RaycastHit2D_t269 * __this, const MethodInfo* method)
{
	Rigidbody2D_t49 * V_0 = {0};
	{
		Rigidbody2D_t49 * L_0 = RaycastHit2D_get_rigidbody_m958(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t49 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m548(NULL /*static, unused*/, L_1, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t49 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t41 * L_4 = Component_get_transform_m519(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t142 * L_5 = RaycastHit2D_get_collider_m2338(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m548(NULL /*static, unused*/, L_5, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t142 * L_7 = RaycastHit2D_get_collider_m2338(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t41 * L_8 = Component_get_transform_m519(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t41 *)NULL;
	}
}
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
extern "C" bool RaycastHit2D_op_Implicit_m957 (Object_t * __this /* static, unused */, RaycastHit2D_t269  ___hit, const MethodInfo* method)
{
	{
		Collider2D_t142 * L_0 = RaycastHit2D_get_collider_m2338((&___hit), /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m548(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2D.h"
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2DMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
extern "C" Vector2_t44  Rigidbody2D_get_position_m970 (Rigidbody2D_t49 * __this, const MethodInfo* method)
{
	Vector2_t44  V_0 = {0};
	{
		Rigidbody2D_INTERNAL_get_position_m3417(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t44  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_position(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_position_m3417 (Rigidbody2D_t49 * __this, Vector2_t44 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_get_position_m3417_ftn) (Rigidbody2D_t49 *, Vector2_t44 *);
	static Rigidbody2D_INTERNAL_get_position_m3417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_get_position_m3417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_get_position(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Rigidbody2D::get_rotation()
extern "C" float Rigidbody2D_get_rotation_m969 (Rigidbody2D_t49 * __this, const MethodInfo* method)
{
	typedef float (*Rigidbody2D_get_rotation_m969_ftn) (Rigidbody2D_t49 *);
	static Rigidbody2D_get_rotation_m969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_get_rotation_m969_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::get_rotation()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" Vector2_t44  Rigidbody2D_get_velocity_m550 (Rigidbody2D_t49 * __this, const MethodInfo* method)
{
	Vector2_t44  V_0 = {0};
	{
		Rigidbody2D_INTERNAL_get_velocity_m3418(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t44  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void Rigidbody2D_set_velocity_m556 (Rigidbody2D_t49 * __this, Vector2_t44  ___value, const MethodInfo* method)
{
	{
		Rigidbody2D_INTERNAL_set_velocity_m3419(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m3418 (Rigidbody2D_t49 * __this, Vector2_t44 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_get_velocity_m3418_ftn) (Rigidbody2D_t49 *, Vector2_t44 *);
	static Rigidbody2D_INTERNAL_get_velocity_m3418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_get_velocity_m3418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m3419 (Rigidbody2D_t49 * __this, Vector2_t44 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_set_velocity_m3419_ftn) (Rigidbody2D_t49 *, Vector2_t44 *);
	static Rigidbody2D_INTERNAL_set_velocity_m3419_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_set_velocity_m3419_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Rigidbody2D::get_mass()
extern "C" float Rigidbody2D_get_mass_m912 (Rigidbody2D_t49 * __this, const MethodInfo* method)
{
	typedef float (*Rigidbody2D_get_mass_m912_ftn) (Rigidbody2D_t49 *);
	static Rigidbody2D_get_mass_m912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_get_mass_m912_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::get_mass()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody2D::set_mass(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Rigidbody2D_set_mass_m913 (Rigidbody2D_t49 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_mass_m913_ftn) (Rigidbody2D_t49 *, float);
	static Rigidbody2D_set_mass_m913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_mass_m913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_mass(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Rigidbody2D::get_drag()
extern "C" float Rigidbody2D_get_drag_m916 (Rigidbody2D_t49 * __this, const MethodInfo* method)
{
	typedef float (*Rigidbody2D_get_drag_m916_ftn) (Rigidbody2D_t49 *);
	static Rigidbody2D_get_drag_m916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_get_drag_m916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::get_drag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody2D::set_drag(System.Single)
extern "C" void Rigidbody2D_set_drag_m917 (Rigidbody2D_t49 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_drag_m917_ftn) (Rigidbody2D_t49 *, float);
	static Rigidbody2D_set_drag_m917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_drag_m917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_drag(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Rigidbody2D::get_angularDrag()
extern "C" float Rigidbody2D_get_angularDrag_m914 (Rigidbody2D_t49 * __this, const MethodInfo* method)
{
	typedef float (*Rigidbody2D_get_angularDrag_m914_ftn) (Rigidbody2D_t49 *);
	static Rigidbody2D_get_angularDrag_m914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_get_angularDrag_m914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::get_angularDrag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody2D::set_angularDrag(System.Single)
extern "C" void Rigidbody2D_set_angularDrag_m915 (Rigidbody2D_t49 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_angularDrag_m915_ftn) (Rigidbody2D_t49 *, float);
	static Rigidbody2D_set_angularDrag_m915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_angularDrag_m915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_angularDrag(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Rigidbody2D::get_isKinematic()
extern "C" bool Rigidbody2D_get_isKinematic_m894 (Rigidbody2D_t49 * __this, const MethodInfo* method)
{
	typedef bool (*Rigidbody2D_get_isKinematic_m894_ftn) (Rigidbody2D_t49 *);
	static Rigidbody2D_get_isKinematic_m894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_get_isKinematic_m894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::get_isKinematic()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Rigidbody2D_set_isKinematic_m891 (Rigidbody2D_t49 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_isKinematic_m891_ftn) (Rigidbody2D_t49 *, bool);
	static Rigidbody2D_set_isKinematic_m891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_isKinematic_m891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForce_m557 (Rigidbody2D_t49 * __this, Vector2_t44  ___force, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody2D_INTERNAL_CALL_AddForce_m3420(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2D.h"
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m3420 (Object_t * __this /* static, unused */, Rigidbody2D_t49 * ___self, Vector2_t44 * ___force, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_CALL_AddForce_m3420_ftn) (Rigidbody2D_t49 *, Vector2_t44 *, int32_t);
	static Rigidbody2D_INTERNAL_CALL_AddForce_m3420_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_CALL_AddForce_m3420_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2D.h"
// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t49 * Collider2D_get_attachedRigidbody_m3421 (Collider2D_t142 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t49 * (*Collider2D_get_attachedRigidbody_m3421_ftn) (Collider2D_t142 *);
	static Collider2D_get_attachedRigidbody_m3421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m3421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern "C" Bounds_t260  Collider2D_get_bounds_m901 (Collider2D_t142 * __this, const MethodInfo* method)
{
	Bounds_t260  V_0 = {0};
	{
		Collider2D_INTERNAL_get_bounds_m3422(__this, (&V_0), /*hidden argument*/NULL);
		Bounds_t260  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Collider2D::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Collider2D_INTERNAL_get_bounds_m3422 (Collider2D_t142 * __this, Bounds_t260 * ___value, const MethodInfo* method)
{
	typedef void (*Collider2D_INTERNAL_get_bounds_m3422_ftn) (Collider2D_t142 *, Bounds_t260 *);
	static Collider2D_INTERNAL_get_bounds_m3422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_INTERNAL_get_bounds_m3422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::INTERNAL_get_bounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.PhysicsMaterial2D UnityEngine.Collider2D::get_sharedMaterial()
extern "C" PhysicsMaterial2D_t270 * Collider2D_get_sharedMaterial_m961 (Collider2D_t142 * __this, const MethodInfo* method)
{
	typedef PhysicsMaterial2D_t270 * (*Collider2D_get_sharedMaterial_m961_ftn) (Collider2D_t142 *);
	static Collider2D_get_sharedMaterial_m961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_sharedMaterial_m961_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_sharedMaterial()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Collider2D::set_sharedMaterial(UnityEngine.PhysicsMaterial2D)
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2D.h"
extern "C" void Collider2D_set_sharedMaterial_m960 (Collider2D_t142 * __this, PhysicsMaterial2D_t270 * ___value, const MethodInfo* method)
{
	typedef void (*Collider2D_set_sharedMaterial_m960_ftn) (Collider2D_t142 *, PhysicsMaterial2D_t270 *);
	static Collider2D_set_sharedMaterial_m960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_set_sharedMaterial_m960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::set_sharedMaterial(UnityEngine.PhysicsMaterial2D)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2D.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"
// System.Single UnityEngine.CircleCollider2D::get_radius()
extern "C" float CircleCollider2D_get_radius_m909 (CircleCollider2D_t259 * __this, const MethodInfo* method)
{
	typedef float (*CircleCollider2D_get_radius_m909_ftn) (CircleCollider2D_t259 *);
	static CircleCollider2D_get_radius_m909_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CircleCollider2D_get_radius_m909_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CircleCollider2D::get_radius()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CircleCollider2D::set_radius(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void CircleCollider2D_set_radius_m910 (CircleCollider2D_t259 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*CircleCollider2D_set_radius_m910_ftn) (CircleCollider2D_t259 *, float);
	static CircleCollider2D_set_radius_m910_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CircleCollider2D_set_radius_m910_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CircleCollider2D::set_radius(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Joint2D
#include "UnityEngine_UnityEngine_Joint2D.h"
// UnityEngine.Joint2D
#include "UnityEngine_UnityEngine_Joint2DMethodDeclarations.h"
// UnityEngine.Rigidbody2D UnityEngine.Joint2D::get_connectedBody()
extern "C" Rigidbody2D_t49 * Joint2D_get_connectedBody_m951 (Joint2D_t649 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t49 * (*Joint2D_get_connectedBody_m951_ftn) (Joint2D_t649 *);
	static Joint2D_get_connectedBody_m951_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint2D_get_connectedBody_m951_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint2D::get_connectedBody()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Joint2D::set_connectedBody(UnityEngine.Rigidbody2D)
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
extern "C" void Joint2D_set_connectedBody_m952 (Joint2D_t649 * __this, Rigidbody2D_t49 * ___value, const MethodInfo* method)
{
	typedef void (*Joint2D_set_connectedBody_m952_ftn) (Joint2D_t649 *, Rigidbody2D_t49 *);
	static Joint2D_set_connectedBody_m952_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint2D_set_connectedBody_m952_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint2D::set_connectedBody(UnityEngine.Rigidbody2D)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.AnchoredJoint2D
#include "UnityEngine_UnityEngine_AnchoredJoint2D.h"
// UnityEngine.AnchoredJoint2D
#include "UnityEngine_UnityEngine_AnchoredJoint2DMethodDeclarations.h"
// System.Void UnityEngine.AnchoredJoint2D::set_anchor(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.AnchoredJoint2D
#include "UnityEngine_UnityEngine_AnchoredJoint2DMethodDeclarations.h"
extern "C" void AnchoredJoint2D_set_anchor_m964 (AnchoredJoint2D_t650 * __this, Vector2_t44  ___value, const MethodInfo* method)
{
	{
		AnchoredJoint2D_INTERNAL_set_anchor_m3423(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnchoredJoint2D::INTERNAL_set_anchor(UnityEngine.Vector2&)
extern "C" void AnchoredJoint2D_INTERNAL_set_anchor_m3423 (AnchoredJoint2D_t650 * __this, Vector2_t44 * ___value, const MethodInfo* method)
{
	typedef void (*AnchoredJoint2D_INTERNAL_set_anchor_m3423_ftn) (AnchoredJoint2D_t650 *, Vector2_t44 *);
	static AnchoredJoint2D_INTERNAL_set_anchor_m3423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnchoredJoint2D_INTERNAL_set_anchor_m3423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnchoredJoint2D::INTERNAL_set_anchor(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AnchoredJoint2D::set_connectedAnchor(UnityEngine.Vector2)
extern "C" void AnchoredJoint2D_set_connectedAnchor_m972 (AnchoredJoint2D_t650 * __this, Vector2_t44  ___value, const MethodInfo* method)
{
	{
		AnchoredJoint2D_INTERNAL_set_connectedAnchor_m3424(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnchoredJoint2D::INTERNAL_set_connectedAnchor(UnityEngine.Vector2&)
extern "C" void AnchoredJoint2D_INTERNAL_set_connectedAnchor_m3424 (AnchoredJoint2D_t650 * __this, Vector2_t44 * ___value, const MethodInfo* method)
{
	typedef void (*AnchoredJoint2D_INTERNAL_set_connectedAnchor_m3424_ftn) (AnchoredJoint2D_t650 *, Vector2_t44 *);
	static AnchoredJoint2D_INTERNAL_set_connectedAnchor_m3424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnchoredJoint2D_INTERNAL_set_connectedAnchor_m3424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnchoredJoint2D::INTERNAL_set_connectedAnchor(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.SpringJoint2D
#include "UnityEngine_UnityEngine_SpringJoint2D.h"
// UnityEngine.SpringJoint2D
#include "UnityEngine_UnityEngine_SpringJoint2DMethodDeclarations.h"
// System.Void UnityEngine.SpringJoint2D::set_distance(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void SpringJoint2D_set_distance_m968 (SpringJoint2D_t220 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*SpringJoint2D_set_distance_m968_ftn) (SpringJoint2D_t220 *, float);
	static SpringJoint2D_set_distance_m968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint2D_set_distance_m968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint2D::set_distance(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.SpringJoint2D::set_dampingRatio(System.Single)
extern "C" void SpringJoint2D_set_dampingRatio_m967 (SpringJoint2D_t220 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*SpringJoint2D_set_dampingRatio_m967_ftn) (SpringJoint2D_t220 *, float);
	static SpringJoint2D_set_dampingRatio_m967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint2D_set_dampingRatio_m967_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint2D::set_dampingRatio(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.SpringJoint2D::set_frequency(System.Single)
extern "C" void SpringJoint2D_set_frequency_m965 (SpringJoint2D_t220 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*SpringJoint2D_set_frequency_m965_ftn) (SpringJoint2D_t220 *, float);
	static SpringJoint2D_set_frequency_m965_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint2D_set_frequency_m965_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint2D::set_frequency(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2DMethodDeclarations.h"
// System.Void UnityEngine.PhysicsMaterial2D::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2DMethodDeclarations.h"
extern "C" void PhysicsMaterial2D__ctor_m959 (PhysicsMaterial2D_t270 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m3321(__this, /*hidden argument*/NULL);
		PhysicsMaterial2D_Internal_Create_m3425(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.PhysicsMaterial2D::Internal_Create(UnityEngine.PhysicsMaterial2D,System.String)
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2D.h"
// System.String
#include "mscorlib_System_String.h"
extern "C" void PhysicsMaterial2D_Internal_Create_m3425 (Object_t * __this /* static, unused */, PhysicsMaterial2D_t270 * ___mat, String_t* ___name, const MethodInfo* method)
{
	typedef void (*PhysicsMaterial2D_Internal_Create_m3425_ftn) (PhysicsMaterial2D_t270 *, String_t*);
	static PhysicsMaterial2D_Internal_Create_m3425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhysicsMaterial2D_Internal_Create_m3425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PhysicsMaterial2D::Internal_Create(UnityEngine.PhysicsMaterial2D,System.String)");
	_il2cpp_icall_func(___mat, ___name);
}
// System.Void UnityEngine.PhysicsMaterial2D::set_bounciness(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void PhysicsMaterial2D_set_bounciness_m962 (PhysicsMaterial2D_t270 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*PhysicsMaterial2D_set_bounciness_m962_ftn) (PhysicsMaterial2D_t270 *, float);
	static PhysicsMaterial2D_set_bounciness_m962_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhysicsMaterial2D_set_bounciness_m962_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PhysicsMaterial2D::set_bounciness(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void AudioConfigurationChangeHandler__ctor_m3426 (AudioConfigurationChangeHandler_t651 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void AudioConfigurationChangeHandler_Invoke_m3427 (AudioConfigurationChangeHandler_t651 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m3427((AudioConfigurationChangeHandler_t651 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t651(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m3428 (AudioConfigurationChangeHandler_t651 * __this, bool ___deviceWasChanged, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t156_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m3429 (AudioConfigurationChangeHandler_t651 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
extern TypeInfo* AudioSettings_t652_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m3430 (AudioSettings_t652 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t651 * L_0 = ((AudioSettings_t652_StaticFields*)AudioSettings_t652_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t651 * L_1 = ((AudioSettings_t652_StaticFields*)AudioSettings_t652_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m3427(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMReaderCallback__ctor_m3431 (PCMReaderCallback_t653 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
#include "mscorlib_ArrayTypes.h"
extern "C" void PCMReaderCallback_Invoke_m3432 (PCMReaderCallback_t653 * __this, SingleU5BU5D_t133* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m3432((PCMReaderCallback_t653 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t133* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t133* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t653(Il2CppObject* delegate, SingleU5BU5D_t133* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m3433 (PCMReaderCallback_t653 * __this, SingleU5BU5D_t133* ___data, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m3434 (PCMReaderCallback_t653 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMSetPositionCallback__ctor_m3435 (PCMSetPositionCallback_t654 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void PCMSetPositionCallback_Invoke_m3436 (PCMSetPositionCallback_t654 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m3436((PCMSetPositionCallback_t654 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t654(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m3437 (PCMSetPositionCallback_t654 * __this, int32_t ___position, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t151_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m3438 (PCMSetPositionCallback_t654 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m3439 (AudioClip_t250 * __this, SingleU5BU5D_t133* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t653 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t653 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t133* L_2 = ___data;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m3432(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m3440 (AudioClip_t250 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t654 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t654 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m3436(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
// System.UInt64
#include "mscorlib_System_UInt64.h"
extern "C" void AudioSource_Play_m1067 (AudioSource_t291 * __this, uint64_t ___delay, const MethodInfo* method)
{
	typedef void (*AudioSource_Play_m1067_ftn) (AudioSource_t291 *, uint64_t);
	static AudioSource_Play_m1067_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m1067_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
extern "C" void AudioSource_Play_m1064 (AudioSource_t291 * __this, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m1067(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::Pause()
extern "C" void AudioSource_Pause_m1065 (AudioSource_t291 * __this, const MethodInfo* method)
{
	{
		AudioSource_INTERNAL_CALL_Pause_m3441(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
extern "C" void AudioSource_INTERNAL_CALL_Pause_m3441 (Object_t * __this /* static, unused */, AudioSource_t291 * ___self, const MethodInfo* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_Pause_m3441_ftn) (AudioSource_t291 *);
	static AudioSource_INTERNAL_CALL_Pause_m3441_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_Pause_m3441_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self);
}
// System.Void UnityEngine.AudioSource::UnPause()
extern "C" void AudioSource_UnPause_m1068 (AudioSource_t291 * __this, const MethodInfo* method)
{
	{
		AudioSource_INTERNAL_CALL_UnPause_m3442(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)
extern "C" void AudioSource_INTERNAL_CALL_UnPause_m3442 (Object_t * __this /* static, unused */, AudioSource_t291 * ___self, const MethodInfo* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_UnPause_m3442_ftn) (AudioSource_t291 *);
	static AudioSource_INTERNAL_CALL_UnPause_m3442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_UnPause_m3442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" bool AudioSource_get_isPlaying_m1066 (AudioSource_t291 * __this, const MethodInfo* method)
{
	typedef bool (*AudioSource_get_isPlaying_m1066_ftn) (AudioSource_t291 *);
	static AudioSource_get_isPlaying_m1066_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m1066_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m3443 (WebCamDevice_t655 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m3444 (WebCamDevice_t655 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t655_marshal(const WebCamDevice_t655& unmarshaled, WebCamDevice_t655_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
extern "C" void WebCamDevice_t655_marshal_back(const WebCamDevice_t655_marshaled& marshaled, WebCamDevice_t655& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t655_marshal_cleanup(WebCamDevice_t655_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Void UnityEngine.AnimationEvent::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m3445 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t76 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t658 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m3446 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void AnimationEvent_set_data_m3447 (AnimationEvent_t657 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m3448 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m3449 (AnimationEvent_t657 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m3450 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void AnimationEvent_set_floatParameter_m3451 (AnimationEvent_t657 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m3452 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void AnimationEvent_set_intParameter_m3453 (AnimationEvent_t657 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t76 * AnimationEvent_get_objectReferenceParameter_m3454 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		Object_t76 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" void AnimationEvent_set_objectReferenceParameter_m3455 (AnimationEvent_t657 * __this, Object_t76 * ___value, const MethodInfo* method)
{
	{
		Object_t76 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m3456 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m3457 (AnimationEvent_t657 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m3458 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m3459 (AnimationEvent_t657 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m3460 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern "C" void AnimationEvent_set_messageOptions_m3461 (AnimationEvent_t657 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m3462 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m3463 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral394;
extern "C" AnimationState_t658 * AnimationEvent_get_animationState_m3464 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m3462(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m596(NULL /*static, unused*/, _stringLiteral394, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t658 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern Il2CppCodeGenString* _stringLiteral395;
extern "C" AnimatorStateInfo_t659  AnimationEvent_get_animatorStateInfo_m3465 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3463(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m596(NULL /*static, unused*/, _stringLiteral395, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t659  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern Il2CppCodeGenString* _stringLiteral396;
extern "C" AnimatorClipInfo_t660  AnimationEvent_get_animatorClipInfo_m3466 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral396 = il2cpp_codegen_string_literal_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3463(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m596(NULL /*static, unused*/, _stringLiteral396, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t660  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t AnimationEvent_GetHash_m3467 (AnimationEvent_t657 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m3456(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m4019(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m3458(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m4017((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Keyframe__ctor_m623 (Keyframe_t198 * __this, float ___time, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___time;
		__this->___m_Time_0 = L_0;
		float L_1 = ___value;
		__this->___m_Value_1 = L_1;
		__this->___m_InTangent_2 = (0.0f);
		__this->___m_OutTangent_3 = (0.0f);
		return;
	}
}
// System.Single UnityEngine.Keyframe::get_time()
extern "C" float Keyframe_get_time_m628 (Keyframe_t198 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
#include "UnityEngine_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
extern "C" void AnimationCurve__ctor_m624 (AnimationCurve_t87 * __this, KeyframeU5BU5D_t197* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t197* L_0 = ___keys;
		AnimationCurve_Init_m3472(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3468 (AnimationCurve_t87 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m3472(__this, (KeyframeU5BU5D_t197*)(KeyframeU5BU5D_t197*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3469 (AnimationCurve_t87 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m3469_ftn) (AnimationCurve_t87 *);
	static AnimationCurve_Cleanup_m3469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m3469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3470 (AnimationCurve_t87 * __this, const MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m3469(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4002(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" float AnimationCurve_Evaluate_m629 (AnimationCurve_t87 * __this, float ___time, const MethodInfo* method)
{
	typedef float (*AnimationCurve_Evaluate_m629_ftn) (AnimationCurve_t87 *, float);
	static AnimationCurve_Evaluate_m629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Evaluate_m629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Evaluate(System.Single)");
	return _il2cpp_icall_func(__this, ___time);
}
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Keyframe_t198  AnimationCurve_get_Item_m627 (AnimationCurve_t87 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Keyframe_t198  L_1 = AnimationCurve_GetKey_Internal_m3471(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m626 (AnimationCurve_t87 * __this, const MethodInfo* method)
{
	typedef int32_t (*AnimationCurve_get_length_m626_ftn) (AnimationCurve_t87 *);
	static AnimationCurve_get_length_m626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_get_length_m626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::get_length()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t198  AnimationCurve_GetKey_Internal_m3471 (AnimationCurve_t87 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Keyframe_t198  (*AnimationCurve_GetKey_Internal_m3471_ftn) (AnimationCurve_t87 *, int32_t);
	static AnimationCurve_GetKey_Internal_m3471_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_GetKey_Internal_m3471_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3472 (AnimationCurve_t87 * __this, KeyframeU5BU5D_t197* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m3472_ftn) (AnimationCurve_t87 *, KeyframeU5BU5D_t197*);
	static AnimationCurve_Init_m3472_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m3472_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t87_marshal(const AnimationCurve_t87& unmarshaled, AnimationCurve_t87_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void AnimationCurve_t87_marshal_back(const AnimationCurve_t87_marshaled& marshaled, AnimationCurve_t87& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t87_marshal_cleanup(AnimationCurve_t87_marshaled& marshaled)
{
}
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayModeMethodDeclarations.h"
// UnityEngine.Animation/Enumerator
#include "UnityEngine_UnityEngine_Animation_Enumerator.h"
// UnityEngine.Animation/Enumerator
#include "UnityEngine_UnityEngine_Animation_EnumeratorMethodDeclarations.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_Animation.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_Animation.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Enumerator__ctor_m3473 (Enumerator_t662 * __this, Animation_t190 * ___outer, const MethodInfo* method)
{
	{
		__this->___m_CurrentIndex_1 = (-1);
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Animation_t190 * L_0 = ___outer;
		__this->___m_Outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
extern "C" Object_t * Enumerator_get_Current_m3474 (Enumerator_t662 * __this, const MethodInfo* method)
{
	{
		Animation_t190 * L_0 = (__this->___m_Outer_0);
		int32_t L_1 = (__this->___m_CurrentIndex_1);
		NullCheck(L_0);
		AnimationState_t658 * L_2 = Animation_GetStateAtIndex_m3479(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m3475 (Enumerator_t662 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Animation_t190 * L_0 = (__this->___m_Outer_0);
		NullCheck(L_0);
		int32_t L_1 = Animation_GetStateCount_m3480(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___m_CurrentIndex_1);
		__this->___m_CurrentIndex_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = (__this->___m_CurrentIndex_1);
		int32_t L_4 = V_0;
		return ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Animation::Play()
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
extern "C" bool Animation_Play_m603 (Animation_t190 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		bool L_1 = Animation_Play_m3476(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"
extern "C" bool Animation_Play_m3476 (Animation_t190 * __this, int32_t ___mode, const MethodInfo* method)
{
	{
		int32_t L_0 = ___mode;
		bool L_1 = Animation_PlayDefaultAnimation_m3477(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m3477 (Animation_t190 * __this, int32_t ___mode, const MethodInfo* method)
{
	typedef bool (*Animation_PlayDefaultAnimation_m3477_ftn) (Animation_t190 *, int32_t);
	static Animation_PlayDefaultAnimation_m3477_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_m3477_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	return _il2cpp_icall_func(__this, ___mode);
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
// UnityEngine.Animation/Enumerator
#include "UnityEngine_UnityEngine_Animation_EnumeratorMethodDeclarations.h"
extern TypeInfo* Enumerator_t662_il2cpp_TypeInfo_var;
extern "C" Object_t * Animation_GetEnumerator_m3478 (Animation_t190 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t662 * L_0 = (Enumerator_t662 *)il2cpp_codegen_object_new (Enumerator_t662_il2cpp_TypeInfo_var);
		Enumerator__ctor_m3473(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" AnimationState_t658 * Animation_GetStateAtIndex_m3479 (Animation_t190 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef AnimationState_t658 * (*Animation_GetStateAtIndex_m3479_ftn) (Animation_t190 *, int32_t);
	static Animation_GetStateAtIndex_m3479_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_m3479_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m3480 (Animation_t190 * __this, const MethodInfo* method)
{
	typedef int32_t (*Animation_GetStateCount_m3480_ftn) (Animation_t190 *);
	static Animation_GetStateCount_m3480_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_m3480_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" bool AnimatorStateInfo_IsName_m3481 (AnimatorStateInfo_t659 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m3482 (AnimatorStateInfo_t659 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m3483 (AnimatorStateInfo_t659 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m3484 (AnimatorStateInfo_t659 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m3485 (AnimatorStateInfo_t659 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m3486 (AnimatorStateInfo_t659 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m3487 (AnimatorStateInfo_t659 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m3488 (AnimatorStateInfo_t659 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m3489 (AnimatorStateInfo_t659 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" bool AnimatorTransitionInfo_IsName_m3490 (AnimatorTransitionInfo_t664 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m3499(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m3491 (AnimatorTransitionInfo_t664 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m3492 (AnimatorTransitionInfo_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m3493 (AnimatorTransitionInfo_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m3494 (AnimatorTransitionInfo_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m3495 (AnimatorTransitionInfo_t664 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m3496 (AnimatorTransitionInfo_t664 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m3497 (AnimatorTransitionInfo_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m3498 (AnimatorTransitionInfo_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t664_marshal(const AnimatorTransitionInfo_t664& unmarshaled, AnimatorTransitionInfo_t664_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
extern "C" void AnimatorTransitionInfo_t664_marshal_back(const AnimatorTransitionInfo_t664_marshaled& marshaled, AnimatorTransitionInfo_t664& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t664_marshal_cleanup(AnimatorTransitionInfo_t664_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" void Animator_SetFloat_m551 (Animator_t48 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		Animator_SetFloatString_m3500(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C" bool Animator_GetBool_m552 (Animator_t48 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = Animator_GetBoolString_m3502(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Animator_SetBool_m549 (Animator_t48 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = ___value;
		Animator_SetBoolString_m3501(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m2613 (Animator_t48 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m3503(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m2612 (Animator_t48 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m3504(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t537 * Animator_get_runtimeAnimatorController_m2611 (Animator_t48 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t537 * (*Animator_get_runtimeAnimatorController_m2611_ftn) (Animator_t48 *);
	static Animator_get_runtimeAnimatorController_m2611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m3499 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m3499_ftn) (String_t*);
	static Animator_StringToHash_m3499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m3499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" void Animator_SetFloatString_m3500 (Animator_t48 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetFloatString_m3500_ftn) (Animator_t48 *, String_t*, float);
	static Animator_SetFloatString_m3500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m3500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m3501 (Animator_t48 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetBoolString_m3501_ftn) (Animator_t48 *, String_t*, bool);
	static Animator_SetBoolString_m3501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m3501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" bool Animator_GetBoolString_m3502 (Animator_t48 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef bool (*Animator_GetBoolString_m3502_ftn) (Animator_t48 *, String_t*);
	static Animator_GetBoolString_m3502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m3502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m3503 (Animator_t48 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m3503_ftn) (Animator_t48 *, String_t*);
	static Animator_SetTriggerString_m3503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m3503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m3504 (Animator_t48 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m3504_ftn) (Animator_t48 *, String_t*);
	static Animator_ResetTriggerString_m3504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m3504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t665_marshal(const SkeletonBone_t665& unmarshaled, SkeletonBone_t665_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
extern "C" void SkeletonBone_t665_marshal_back(const SkeletonBone_t665_marshaled& marshaled, SkeletonBone_t665& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t665_marshal_cleanup(SkeletonBone_t665_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"
// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m3505 (HumanBone_t667 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void HumanBone_set_boneName_m3506 (HumanBone_t667 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m3507 (HumanBone_t667 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m3508 (HumanBone_t667 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t667_marshal(const HumanBone_t667& unmarshaled, HumanBone_t667_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
extern "C" void HumanBone_t667_marshal_back(const HumanBone_t667_marshaled& marshaled, HumanBone_t667& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t667_marshal_cleanup(HumanBone_t667_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
// System.Void UnityEngine.GUIText::set_text(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GUIText_set_text_m670 (GUIText_t98 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIText_set_text_m670_ftn) (GUIText_t98 *, String_t*);
	static GUIText_set_text_m670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_text_m670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m3509 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" int32_t CharacterInfo_get_glyphWidth_m3510 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		Rect_t150 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m2387(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m3511 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		Rect_t150 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m2388(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m3512 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		Rect_t150 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2392(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m3513 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t150 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m2393(L_1, /*hidden argument*/NULL);
		Rect_t150 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m2388(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m3514 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t150 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m2393(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m3515 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		Rect_t150 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2392(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m3516 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		Rect_t150 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2392(L_0, /*hidden argument*/NULL);
		Rect_t150 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m2387(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t44  CharacterInfo_get_uvBottomLeftUnFlipped_m3517 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		Rect_t150 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2392(L_0, /*hidden argument*/NULL);
		Rect_t150 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m2393(L_2, /*hidden argument*/NULL);
		Vector2_t44  L_4 = {0};
		Vector2__ctor_m555(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t44  CharacterInfo_get_uvBottomRightUnFlipped_m3518 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		Rect_t150 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2392(L_0, /*hidden argument*/NULL);
		Rect_t150 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2387(L_2, /*hidden argument*/NULL);
		Rect_t150 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m2393(L_4, /*hidden argument*/NULL);
		Vector2_t44  L_6 = {0};
		Vector2__ctor_m555(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t44  CharacterInfo_get_uvTopRightUnFlipped_m3519 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		Rect_t150 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2392(L_0, /*hidden argument*/NULL);
		Rect_t150 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2387(L_2, /*hidden argument*/NULL);
		Rect_t150 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m2393(L_4, /*hidden argument*/NULL);
		Rect_t150 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m2388(L_6, /*hidden argument*/NULL);
		Vector2_t44  L_8 = {0};
		Vector2__ctor_m555(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t44  CharacterInfo_get_uvTopLeftUnFlipped_m3520 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	{
		Rect_t150 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2392(L_0, /*hidden argument*/NULL);
		Rect_t150 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m2393(L_2, /*hidden argument*/NULL);
		Rect_t150 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m2388(L_4, /*hidden argument*/NULL);
		Vector2_t44  L_6 = {0};
		Vector2__ctor_m555(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
extern "C" Vector2_t44  CharacterInfo_get_uvBottomLeft_m3521 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	Vector2_t44  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t44  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m3517(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t44  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m3517(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t44  CharacterInfo_get_uvBottomRight_m3522 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	Vector2_t44  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t44  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m3520(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t44  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m3518(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t44  CharacterInfo_get_uvTopRight_m3523 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	Vector2_t44  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t44  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m3519(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t44  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m3519(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t44  CharacterInfo_get_uvTopLeft_m3524 (CharacterInfo_t670 * __this, const MethodInfo* method)
{
	Vector2_t44  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t44  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m3518(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t44  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m3520(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t670_marshal(const CharacterInfo_t670& unmarshaled, CharacterInfo_t670_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
extern "C" void CharacterInfo_t670_marshal_back(const CharacterInfo_t670_marshaled& marshaled, CharacterInfo_t670& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t670_marshal_cleanup(CharacterInfo_t670_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void FontTextureRebuildCallback__ctor_m3525 (FontTextureRebuildCallback_t671 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m3526 (FontTextureRebuildCallback_t671 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m3526((FontTextureRebuildCallback_t671 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t671(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m3527 (FontTextureRebuildCallback_t671 * __this, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m3528 (FontTextureRebuildCallback_t671 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_1.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_1.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Font_t283_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t513_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m2371 (Object_t * __this /* static, unused */, Action_1_t513 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		Action_1_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t513 * L_0 = ((Font_t283_StaticFields*)Font_t283_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t513 * L_1 = ___value;
		Delegate_t520 * L_2 = Delegate_Combine_m2407(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t283_StaticFields*)Font_t283_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t513 *)CastclassSealed(L_2, Action_1_t513_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t283_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t513_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m3529 (Object_t * __this /* static, unused */, Action_1_t513 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		Action_1_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t513 * L_0 = ((Font_t283_StaticFields*)Font_t283_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t513 * L_1 = ___value;
		Delegate_t520 * L_2 = Delegate_Remove_m2408(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t283_StaticFields*)Font_t283_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t513 *)CastclassSealed(L_2, Action_1_t513_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t195 * Font_get_material_m2623 (Font_t283 * __this, const MethodInfo* method)
{
	typedef Material_t195 * (*Font_get_material_m2623_ftn) (Font_t283 *);
	static Font_get_material_m2623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" bool Font_HasCharacter_m2514 (Font_t283 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m2514_ftn) (Font_t283 *, uint16_t);
	static Font_HasCharacter_m2514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
extern TypeInfo* Font_t283_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m4058_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m3530 (Object_t * __this /* static, unused */, Font_t283 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		Action_1_Invoke_m4058_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484048);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t513 * V_0 = {0};
	{
		Action_1_t513 * L_0 = ((Font_t283_StaticFields*)Font_t283_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t513 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t513 * L_2 = V_0;
		Font_t283 * L_3 = ___font;
		NullCheck(L_2);
		Action_1_Invoke_m4058(L_2, L_3, /*hidden argument*/Action_1_Invoke_m4058_MethodInfo_var);
	}

IL_0013:
	{
		Font_t283 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t671 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t283 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t671 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		FontTextureRebuildCallback_Invoke_m3526(L_7, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m2626 (Font_t283 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m2626_ftn) (Font_t283 *);
	static Font_get_dynamic_m2626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m2626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m2628 (Font_t283 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m2628_ftn) (Font_t283 *);
	static Font_get_fontSize_m2628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m2628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_17.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
// System.Void UnityEngine.TextGenerator::.ctor()
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
extern "C" void TextGenerator__ctor_m2476 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m2621(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
extern TypeInfo* List_1_t397_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t672_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t673_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4059_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4060_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4061_MethodInfo_var;
extern "C" void TextGenerator__ctor_m2621 (TextGenerator_t396 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		List_1_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		List_1_t673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		List_1__ctor_m4059_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484049);
		List_1__ctor_m4060_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484050);
		List_1__ctor_m4061_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484051);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t397 * L_1 = (List_1_t397 *)il2cpp_codegen_object_new (List_1_t397_il2cpp_TypeInfo_var);
		List_1__ctor_m4059(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m4059_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t672 * L_3 = (List_1_t672 *)il2cpp_codegen_object_new (List_1_t672_il2cpp_TypeInfo_var);
		List_1__ctor_m4060(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m4060_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t673 * L_4 = (List_1_t673 *)il2cpp_codegen_object_new (List_1_t673_il2cpp_TypeInfo_var);
		List_1__ctor_m4061(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m4061_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m3532(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m3531 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m3532 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m3532_ftn) (TextGenerator_t396 *);
	static TextGenerator_Init_m3532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m3532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m3533 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m3533_ftn) (TextGenerator_t396 *);
	static TextGenerator_Dispose_cpp_m3533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m3533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" bool TextGenerator_Populate_Internal_m3534 (TextGenerator_t396 * __this, String_t* ___str, Font_t283 * ___font, Color_t203  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t44  ___extents, Vector2_t44  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t283 * L_1 = ___font;
		Color_t203  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m3535(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m3535 (TextGenerator_t396 * __this, String_t* ___str, Font_t283 * ___font, Color_t203  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t283 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3536(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3536 (Object_t * __this /* static, unused */, TextGenerator_t396 * ___self, String_t* ___str, Font_t283 * ___font, Color_t203 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3536_ftn) (TextGenerator_t396 *, String_t*, Font_t283 *, Color_t203 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3536_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3536_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t150  TextGenerator_get_rectExtents_m2528 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	Rect_t150  V_0 = {0};
	{
		TextGenerator_INTERNAL_get_rectExtents_m3537(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t150  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C" void TextGenerator_INTERNAL_get_rectExtents_m3537 (TextGenerator_t396 * __this, Rect_t150 * ___value, const MethodInfo* method)
{
	typedef void (*TextGenerator_INTERNAL_get_rectExtents_m3537_ftn) (TextGenerator_t396 *, Rect_t150 *);
	static TextGenerator_INTERNAL_get_rectExtents_m3537_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_get_rectExtents_m3537_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m3538 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m3538_ftn) (TextGenerator_t396 *);
	static TextGenerator_get_vertexCount_m3538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m3538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void TextGenerator_GetVerticesInternal_m3539 (TextGenerator_t396 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m3539_ftn) (TextGenerator_t396 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m3539_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m3539_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t395* TextGenerator_GetVerticesArray_m3540 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t395* (*TextGenerator_GetVerticesArray_m3540_ftn) (TextGenerator_t396 *);
	static TextGenerator_GetVerticesArray_m3540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m3540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m3541 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m3541_ftn) (TextGenerator_t396 *);
	static TextGenerator_get_characterCount_m3541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m3541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m2508 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m471(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m478(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m3538(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m2518(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m2520(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m3542 (TextGenerator_t396 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m3542_ftn) (TextGenerator_t396 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m3542_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m3542_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t800* TextGenerator_GetCharactersArray_m3543 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t800* (*TextGenerator_GetCharactersArray_m3543_ftn) (TextGenerator_t396 *);
	static TextGenerator_GetCharactersArray_m3543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m3543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m2507 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m2507_ftn) (TextGenerator_t396 *);
	static TextGenerator_get_lineCount_m2507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m2507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m3544 (TextGenerator_t396 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m3544_ftn) (TextGenerator_t396 *, Object_t *);
	static TextGenerator_GetLinesInternal_m3544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m3544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t801* TextGenerator_GetLinesArray_m3545 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t801* (*TextGenerator_GetLinesArray_m3545_ftn) (TextGenerator_t396 *);
	static TextGenerator_GetLinesArray_m3545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m3545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m2547 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m2547_ftn) (TextGenerator_t396 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m2547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m2547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m3546 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4002(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral397;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" TextGenerationSettings_t496  TextGenerator_ValidatedSettings_m3547 (TextGenerator_t396 * __this, TextGenerationSettings_t496  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral397 = il2cpp_codegen_string_literal_from_index(397);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t283 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m548(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t283 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m2626(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t496  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m443(NULL /*static, unused*/, _stringLiteral397, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m443(NULL /*static, unused*/, _stringLiteral398, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t496  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m2625 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
extern "C" void TextGenerator_GetCharacters_m3548 (TextGenerator_t396 * __this, List_1_t672 * ___characters, const MethodInfo* method)
{
	{
		List_1_t672 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m3542(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
extern "C" void TextGenerator_GetLines_m3549 (TextGenerator_t396 * __this, List_1_t673 * ___lines, const MethodInfo* method)
{
	{
		List_1_t673 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m3544(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_17.h"
extern "C" void TextGenerator_GetVertices_m3550 (TextGenerator_t396 * __this, List_1_t397 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t397 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m3539(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" float TextGenerator_GetPreferredWidth_m2630 (TextGenerator_t396 * __this, String_t* ___str, TextGenerationSettings_t496  ___settings, const MethodInfo* method)
{
	Rect_t150  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t496  L_1 = ___settings;
		TextGenerator_Populate_m2527(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t150  L_2 = TextGenerator_get_rectExtents_m2528(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m2387((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m2631 (TextGenerator_t396 * __this, String_t* ___str, TextGenerationSettings_t496  ___settings, const MethodInfo* method)
{
	Rect_t150  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t496  L_1 = ___settings;
		TextGenerator_Populate_m2527(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t150  L_2 = TextGenerator_get_rectExtents_m2528(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m2388((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m2527 (TextGenerator_t396 * __this, String_t* ___str, TextGenerationSettings_t496  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m421(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t496  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m3934((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t496  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m3551(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m3551 (TextGenerator_t396 * __this, String_t* ___str, TextGenerationSettings_t496  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t496  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t496  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t496  L_2 = ___settings;
		TextGenerationSettings_t496  L_3 = TextGenerator_ValidatedSettings_m3547(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t283 * L_5 = ((&V_0)->___font_0);
		Color_t203  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t44  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t44  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m3534(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m2629 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t397 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m3550(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t397 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m2509 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t672 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m3548(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t672 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m2506 (TextGenerator_t396 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t673 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m3549(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t673 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void WillRenderCanvases__ctor_m2359 (WillRenderCanvases_t511 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m3552 (WillRenderCanvases_t511 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m3552((WillRenderCanvases_t511 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t511(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m3553 (WillRenderCanvases_t511 * __this, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m3554 (WillRenderCanvases_t511 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Canvas_t242_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t511_il2cpp_TypeInfo_var;
extern "C" void Canvas_add_willRenderCanvases_m2360 (Object_t * __this /* static, unused */, WillRenderCanvases_t511 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		WillRenderCanvases_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t511 * L_0 = ((Canvas_t242_StaticFields*)Canvas_t242_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t511 * L_1 = ___value;
		Delegate_t520 * L_2 = Delegate_Combine_m2407(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t242_StaticFields*)Canvas_t242_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t511 *)CastclassSealed(L_2, WillRenderCanvases_t511_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t242_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t511_il2cpp_TypeInfo_var;
extern "C" void Canvas_remove_willRenderCanvases_m3555 (Object_t * __this /* static, unused */, WillRenderCanvases_t511 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		WillRenderCanvases_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t511 * L_0 = ((Canvas_t242_StaticFields*)Canvas_t242_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t511 * L_1 = ___value;
		Delegate_t520 * L_2 = Delegate_Remove_m2408(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t242_StaticFields*)Canvas_t242_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t511 *)CastclassSealed(L_2, WillRenderCanvases_t511_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m2413 (Canvas_t242 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m2413_ftn) (Canvas_t242 *);
	static Canvas_get_renderMode_m2413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m2413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
extern "C" void Canvas_set_renderMode_m1031 (Canvas_t242 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_renderMode_m1031_ftn) (Canvas_t242 *, int32_t);
	static Canvas_set_renderMode_m1031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_renderMode_m1031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m2643 (Canvas_t242 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m2643_ftn) (Canvas_t242 *);
	static Canvas_get_isRootCanvas_m2643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m2643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t85 * Canvas_get_worldCamera_m2422 (Canvas_t242 * __this, const MethodInfo* method)
{
	typedef Camera_t85 * (*Canvas_get_worldCamera_m2422_ftn) (Canvas_t242 *);
	static Canvas_get_worldCamera_m2422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m2627 (Canvas_t242 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m2627_ftn) (Canvas_t242 *);
	static Canvas_get_scaleFactor_m2627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m2627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Canvas_set_scaleFactor_m2647 (Canvas_t242 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m2647_ftn) (Canvas_t242 *, float);
	static Canvas_set_scaleFactor_m2647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m2647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m2439 (Canvas_t242 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m2439_ftn) (Canvas_t242 *);
	static Canvas_get_referencePixelsPerUnit_m2439_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m2439_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m2648 (Canvas_t242 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m2648_ftn) (Canvas_t242 *, float);
	static Canvas_set_referencePixelsPerUnit_m2648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m2648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m2398 (Canvas_t242 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m2398_ftn) (Canvas_t242 *);
	static Canvas_get_pixelPerfect_m2398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m2398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_pixelPerfect(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Canvas_set_pixelPerfect_m1032 (Canvas_t242 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_pixelPerfect_m1032_ftn) (Canvas_t242 *, bool);
	static Canvas_set_pixelPerfect_m1032_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_pixelPerfect_m1032_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_pixelPerfect(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m2415 (Canvas_t242 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m2415_ftn) (Canvas_t242 *);
	static Canvas_get_renderOrder_m2415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m2415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m2414 (Canvas_t242 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m2414_ftn) (Canvas_t242 *);
	static Canvas_get_sortingOrder_m2414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m2414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m2421 (Canvas_t242 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m2421_ftn) (Canvas_t242 *);
	static Canvas_get_cachedSortingLayerValue_m2421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m2421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t195 * Canvas_GetDefaultCanvasMaterial_m2376 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t195 * (*Canvas_GetDefaultCanvasMaterial_m2376_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m2376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m2376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern "C" Material_t195 * Canvas_GetDefaultCanvasTextMaterial_m2622 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t195 * (*Canvas_GetDefaultCanvasTextMaterial_m2622_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m2622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m2622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
extern TypeInfo* Canvas_t242_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m3556 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t511 * L_0 = ((Canvas_t242_StaticFields*)Canvas_t242_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t511 * L_1 = ((Canvas_t242_StaticFields*)Canvas_t242_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		WillRenderCanvases_Invoke_m3552(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
extern "C" void Canvas_ForceUpdateCanvases_m2578 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m3556(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m2604 (CanvasGroup_t517 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m2604_ftn) (CanvasGroup_t517 *);
	static CanvasGroup_get_interactable_m2604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m2604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m3557 (CanvasGroup_t517 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m3557_ftn) (CanvasGroup_t517 *);
	static CanvasGroup_get_blocksRaycasts_m3557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m3557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2397 (CanvasGroup_t517 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m2397_ftn) (CanvasGroup_t517 *);
	static CanvasGroup_get_ignoreParentGroups_m2397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m2397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
extern "C" bool CanvasGroup_IsRaycastLocationValid_m3558 (CanvasGroup_t517 * __this, Vector2_t44  ___sp, Camera_t85 * ___eventCamera, const MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m3557(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// System.Void UnityEngine.UIVertex::.cctor()
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* UIVertex_t401_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m3559 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t401  V_0 = {0};
	{
		Color32_t501  L_0 = {0};
		Color32__ctor_m2366(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t401_StaticFields*)UIVertex_t401_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t494  L_1 = {0};
		Vector4__ctor_m2394(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t401_StaticFields*)UIVertex_t401_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t401_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t42  L_2 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t42  L_3 = Vector3_get_back_m3050(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t494  L_4 = ((UIVertex_t401_StaticFields*)UIVertex_t401_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t501  L_5 = ((UIVertex_t401_StaticFields*)UIVertex_t401_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t44  L_6 = Vector2_get_zero_m935(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t44  L_7 = Vector2_get_zero_m935(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t401  L_8 = V_0;
		((UIVertex_t401_StaticFields*)UIVertex_t401_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
extern "C" void CanvasRenderer_SetColor_m2403 (CanvasRenderer_t288 * __this, Color_t203  ___color, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m3560(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m3560 (Object_t * __this /* static, unused */, CanvasRenderer_t288 * ___self, Color_t203 * ___color, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m3560_ftn) (CanvasRenderer_t288 *, Color_t203 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m3560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m3560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t203  CanvasRenderer_GetColor_m2401 (CanvasRenderer_t288 * __this, const MethodInfo* method)
{
	typedef Color_t203  (*CanvasRenderer_GetColor_m2401_ftn) (CanvasRenderer_t288 *);
	static CanvasRenderer_GetColor_m2401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m2401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void CanvasRenderer_set_isMask_m2681 (CanvasRenderer_t288 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m2681_ftn) (CanvasRenderer_t288 *, bool);
	static CanvasRenderer_set_isMask_m2681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m2681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
extern "C" void CanvasRenderer_SetMaterial_m2391 (CanvasRenderer_t288 * __this, Material_t195 * ___material, Texture_t406 * ___texture, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m2391_ftn) (CanvasRenderer_t288 *, Material_t195 *, Texture_t406 *);
	static CanvasRenderer_SetMaterial_m2391_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m2391_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_17.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t837_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral399;
extern "C" void CanvasRenderer_SetVertices_m2389 (CanvasRenderer_t288 * __this, List_1_t397 * ___vertices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		UInt16_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		_stringLiteral399 = il2cpp_codegen_string_literal_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t397 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t148* L_2 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(UInt16_t837_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral399, L_2, /*hidden argument*/NULL);
		Debug_LogWarning_m2617(NULL /*static, unused*/, L_5, __this, /*hidden argument*/NULL);
		List_1_t397 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear() */, L_6);
	}

IL_0039:
	{
		List_1_t397 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m3561(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void CanvasRenderer_SetVerticesInternal_m3561 (CanvasRenderer_t288 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m3561_ftn) (CanvasRenderer_t288 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m3561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m3561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t837_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral399;
extern "C" void CanvasRenderer_SetVertices_m2492 (CanvasRenderer_t288 * __this, UIVertexU5BU5D_t395* ___vertices, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		UInt16_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		_stringLiteral399 = il2cpp_codegen_string_literal_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t148* L_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(UInt16_t837_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral399, L_1, /*hidden argument*/NULL);
		Debug_LogWarning_m2617(NULL /*static, unused*/, L_4, __this, /*hidden argument*/NULL);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t395* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m3562(__this, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m3562 (CanvasRenderer_t288 * __this, UIVertexU5BU5D_t395* ___vertices, int32_t ___size, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m3562_ftn) (CanvasRenderer_t288 *, UIVertexU5BU5D_t395*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m3562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m3562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m2384 (CanvasRenderer_t288 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m2384_ftn) (CanvasRenderer_t288 *);
	static CanvasRenderer_Clear_m2384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m2384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2378 (CanvasRenderer_t288 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m2378_ftn) (CanvasRenderer_t288 *);
	static CanvasRenderer_get_absoluteDepth_m2378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m2378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// System.Void UnityEngine.RectTransformUtility::.cctor()
extern TypeInfo* Vector3U5BU5D_t132_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t519_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m3563 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		RectTransformUtility_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RectTransformUtility_t519_StaticFields*)RectTransformUtility_t519_il2cpp_TypeInfo_var->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t132*)SZArrayNew(Vector3U5BU5D_t132_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t519_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2423 (Object_t * __this /* static, unused */, RectTransform_t361 * ___rect, Vector2_t44  ___screenPoint, Camera_t85 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t361 * L_0 = ___rect;
		Camera_t85 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t519_il2cpp_TypeInfo_var);
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3564(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3564 (Object_t * __this /* static, unused */, RectTransform_t361 * ___rect, Vector2_t44 * ___screenPoint, Camera_t85 * ___cam, const MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3564_ftn) (RectTransform_t361 *, Vector2_t44 *, Camera_t85 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
extern TypeInfo* RectTransformUtility_t519_il2cpp_TypeInfo_var;
extern "C" Vector2_t44  RectTransformUtility_PixelAdjustPoint_m2399 (Object_t * __this /* static, unused */, Vector2_t44  ___point, Transform_t41 * ___elementTransform, Canvas_t242 * ___canvas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t44  V_0 = {0};
	{
		Vector2_t44  L_0 = ___point;
		Transform_t41 * L_1 = ___elementTransform;
		Canvas_t242 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t519_il2cpp_TypeInfo_var);
		RectTransformUtility_PixelAdjustPoint_m3565(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		Vector2_t44  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t519_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_PixelAdjustPoint_m3565 (Object_t * __this /* static, unused */, Vector2_t44  ___point, Transform_t41 * ___elementTransform, Canvas_t242 * ___canvas, Vector2_t44 * ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t41 * L_0 = ___elementTransform;
		Canvas_t242 * L_1 = ___canvas;
		Vector2_t44 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t519_il2cpp_TypeInfo_var);
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3566(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3566 (Object_t * __this /* static, unused */, Vector2_t44 * ___point, Transform_t41 * ___elementTransform, Canvas_t242 * ___canvas, Vector2_t44 * ___output, const MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3566_ftn) (Vector2_t44 *, Transform_t41 *, Canvas_t242 *, Vector2_t44 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t150  RectTransformUtility_PixelAdjustRect_m2400 (Object_t * __this /* static, unused */, RectTransform_t361 * ___rectTransform, Canvas_t242 * ___canvas, const MethodInfo* method)
{
	typedef Rect_t150  (*RectTransformUtility_PixelAdjustRect_m2400_ftn) (RectTransform_t361 *, Canvas_t242 *);
	static RectTransformUtility_PixelAdjustRect_m2400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m2400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t519_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m3567 (Object_t * __this /* static, unused */, RectTransform_t361 * ___rect, Vector2_t44  ___screenPoint, Camera_t85 * ___cam, Vector3_t42 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t89  V_0 = {0};
	Plane_t528  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t42 * L_0 = ___worldPoint;
		Vector2_t44  L_1 = Vector2_get_zero_m935(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_2 = Vector2_op_Implicit_m589(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*L_0 = L_2;
		Camera_t85 * L_3 = ___cam;
		Vector2_t44  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t519_il2cpp_TypeInfo_var);
		Ray_t89  L_5 = RectTransformUtility_ScreenPointToRay_m3568(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t361 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t106  L_7 = Transform_get_rotation_m598(L_6, /*hidden argument*/NULL);
		Vector3_t42  L_8 = Vector3_get_back_m3050(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_9 = Quaternion_op_Multiply_m698(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_t361 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t42  L_11 = Transform_get_position_m518(L_10, /*hidden argument*/NULL);
		Plane__ctor_m2504((&V_1), L_9, L_11, /*hidden argument*/NULL);
		Ray_t89  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2505((&V_1), L_12, (&V_2), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t42 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t42  L_16 = Ray_GetPoint_m636((&V_0), L_15, /*hidden argument*/NULL);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t519_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2463 (Object_t * __this /* static, unused */, RectTransform_t361 * ___rect, Vector2_t44  ___screenPoint, Camera_t85 * ___cam, Vector2_t44 * ___localPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	{
		Vector2_t44 * L_0 = ___localPoint;
		Vector2_t44  L_1 = Vector2_get_zero_m935(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_0 = L_1;
		RectTransform_t361 * L_2 = ___rect;
		Vector2_t44  L_3 = ___screenPoint;
		Camera_t85 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t519_il2cpp_TypeInfo_var);
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m3567(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t44 * L_6 = ___localPoint;
		RectTransform_t361 * L_7 = ___rect;
		Vector3_t42  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t42  L_9 = Transform_InverseTransformPoint_m2503(L_7, L_8, /*hidden argument*/NULL);
		Vector2_t44  L_10 = Vector2_op_Implicit_m544(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" Ray_t89  RectTransformUtility_ScreenPointToRay_m3568 (Object_t * __this /* static, unused */, Camera_t85 * ___cam, Vector2_t44  ___screenPos, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Camera_t85 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m548(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t85 * L_2 = ___cam;
		Vector2_t44  L_3 = ___screenPos;
		Vector3_t42  L_4 = Vector2_op_Implicit_m589(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t89  L_5 = Camera_ScreenPointToRay_m635(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		Vector2_t44  L_6 = ___screenPos;
		Vector3_t42  L_7 = Vector2_op_Implicit_m589(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t42 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t42  L_10 = V_0;
		Vector3_t42  L_11 = Vector3_get_forward_m530(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t89  L_12 = {0};
		Ray__ctor_m660(&L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern TypeInfo* RectTransform_t361_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t519_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2573 (Object_t * __this /* static, unused */, RectTransform_t361 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		RectTransformUtility_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t361 * V_1 = {0};
	Vector2_t44  V_2 = {0};
	Vector2_t44  V_3 = {0};
	Vector2_t44  V_4 = {0};
	Vector2_t44  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t361 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m473(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t361 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t41 * L_5 = Transform_GetChild_m2668(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t361 *)IsInstSealed(L_5, RectTransform_t361_il2cpp_TypeInfo_var));
		RectTransform_t361 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m548(NULL /*static, unused*/, L_6, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t361 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t519_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutOnAxis_m2573(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t361 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m2670(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t361 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t44  L_15 = RectTransform_get_pivot_m2445(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m2460((&V_2), L_17, /*hidden argument*/NULL);
		Vector2_set_Item_m2469((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/NULL);
		RectTransform_t361 * L_19 = ___rect;
		Vector2_t44  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m2545(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t361 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t44  L_23 = RectTransform_get_anchoredPosition_m2540(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m2460((&V_3), L_25, /*hidden argument*/NULL);
		Vector2_set_Item_m2469((&V_3), L_24, ((-L_26)), /*hidden argument*/NULL);
		RectTransform_t361 * L_27 = ___rect;
		Vector2_t44  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m2544(L_27, L_28, /*hidden argument*/NULL);
		RectTransform_t361 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t44  L_30 = RectTransform_get_anchorMin_m2449(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		RectTransform_t361 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t44  L_32 = RectTransform_get_anchorMax_m2539(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m2460((&V_4), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m2460((&V_5), L_36, /*hidden argument*/NULL);
		Vector2_set_Item_m2469((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/NULL);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m2469((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/NULL);
		RectTransform_t361 * L_40 = ___rect;
		Vector2_t44  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m2543(L_40, L_41, /*hidden argument*/NULL);
		RectTransform_t361 * L_42 = ___rect;
		Vector2_t44  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m2450(L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t361_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t519_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutAxes_m2572 (Object_t * __this /* static, unused */, RectTransform_t361 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		RectTransformUtility_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t361 * V_1 = {0};
	{
		RectTransform_t361 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m473(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t361 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t41 * L_5 = Transform_GetChild_m2668(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t361 *)IsInstSealed(L_5, RectTransform_t361_il2cpp_TypeInfo_var));
		RectTransform_t361 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m548(NULL /*static, unused*/, L_6, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t361 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t519_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutAxes_m2572(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t361 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m2670(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t361 * L_13 = ___rect;
		RectTransform_t361 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t44  L_15 = RectTransform_get_pivot_m2445(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t519_il2cpp_TypeInfo_var);
		Vector2_t44  L_16 = RectTransformUtility_GetTransposed_m3569(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m2545(L_13, L_16, /*hidden argument*/NULL);
		RectTransform_t361 * L_17 = ___rect;
		RectTransform_t361 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t44  L_19 = RectTransform_get_sizeDelta_m2541(L_18, /*hidden argument*/NULL);
		Vector2_t44  L_20 = RectTransformUtility_GetTransposed_m3569(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m2451(L_17, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t361 * L_22 = ___rect;
		RectTransform_t361 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t44  L_24 = RectTransform_get_anchoredPosition_m2540(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t519_il2cpp_TypeInfo_var);
		Vector2_t44  L_25 = RectTransformUtility_GetTransposed_m3569(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m2544(L_22, L_25, /*hidden argument*/NULL);
		RectTransform_t361 * L_26 = ___rect;
		RectTransform_t361 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t44  L_28 = RectTransform_get_anchorMin_m2449(L_27, /*hidden argument*/NULL);
		Vector2_t44  L_29 = RectTransformUtility_GetTransposed_m3569(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m2543(L_26, L_29, /*hidden argument*/NULL);
		RectTransform_t361 * L_30 = ___rect;
		RectTransform_t361 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t44  L_32 = RectTransform_get_anchorMax_m2539(L_31, /*hidden argument*/NULL);
		Vector2_t44  L_33 = RectTransformUtility_GetTransposed_m3569(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m2450(L_30, L_33, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t44  RectTransformUtility_GetTransposed_m3569 (Object_t * __this /* static, unused */, Vector2_t44  ___input, const MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t44  L_2 = {0};
		Vector2__ctor_m555(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.Request::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Request__ctor_m3570 (Request_t675 * __this, const MethodInfo* method)
{
	{
		__this->___version_0 = 2;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m3571 (Request_t675 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m3572 (Request_t675 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m3573 (Request_t675 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t693_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral400;
extern Il2CppCodeGenString* _stringLiteral401;
extern "C" String_t* Request_ToString_m3574 (Request_t675 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		SourceID_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		AppID_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral400 = il2cpp_codegen_string_literal_from_index(400);
		_stringLiteral401 = il2cpp_codegen_string_literal_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m4062(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m3571(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(SourceID_t693_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4063(L_5, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t148* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m3572(__this, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(AppID_t692_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m4063(L_10, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t148* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m3573(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral400, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ResponseBase__ctor_m3575 (ResponseBase_t676 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral402;
extern "C" String_t* ResponseBase_ParseJSONString_m3576 (ResponseBase_t676 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral402 = il2cpp_codegen_string_literal_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t802_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInstSealed(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m423(NULL /*static, unused*/, L_4, _stringLiteral402, /*hidden argument*/NULL);
		FormatException_t838 * L_6 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t830_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral402;
extern "C" int32_t ResponseBase_ParseJSONInt32_m3577 (ResponseBase_t676 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		Convert_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral402 = il2cpp_codegen_string_literal_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t802_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t830_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m4065(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m423(NULL /*static, unused*/, L_5, _stringLiteral402, /*hidden argument*/NULL);
		FormatException_t838 * L_7 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t830_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral402;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m3578 (ResponseBase_t676 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		Convert_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral402 = il2cpp_codegen_string_literal_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t802_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t830_il2cpp_TypeInfo_var);
		uint16_t L_4 = Convert_ToUInt16_m4066(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m423(NULL /*static, unused*/, L_5, _stringLiteral402, /*hidden argument*/NULL);
		FormatException_t838 * L_7 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t830_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral402;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m3579 (ResponseBase_t676 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		Convert_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral402 = il2cpp_codegen_string_literal_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t802_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t830_il2cpp_TypeInfo_var);
		uint64_t L_4 = Convert_ToUInt64_m4067(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m423(NULL /*static, unused*/, L_5, _stringLiteral402, /*hidden argument*/NULL);
		FormatException_t838 * L_7 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t830_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral402;
extern "C" bool ResponseBase_ParseJSONBool_m3580 (ResponseBase_t676 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		Convert_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral402 = il2cpp_codegen_string_literal_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t802_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t830_il2cpp_TypeInfo_var);
		bool L_4 = Convert_ToBoolean_m4068(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m423(NULL /*static, unused*/, L_5, _stringLiteral402, /*hidden argument*/NULL);
		FormatException_t838 * L_7 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.Response::.ctor()
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
extern "C" void Response__ctor_m3581 (Response_t677 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m3575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m3582 (Response_t677 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Response_set_success_m3583 (Response_t677 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m3584 (Response_t677 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Response_set_extendedInfo_m3585 (Response_t677 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral403;
extern "C" String_t* Response_ToString_m3586 (Response_t677 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		_stringLiteral403 = il2cpp_codegen_string_literal_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m4062(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		bool L_3 = Response_get_success_m3582(__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		Object_t * L_5 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t148* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m3584(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral403, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral404;
extern Il2CppCodeGenString* _stringLiteral405;
extern Il2CppCodeGenString* _stringLiteral406;
extern "C" void Response_Parse_m3587 (Response_t677 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral404 = il2cpp_codegen_string_literal_from_index(404);
		_stringLiteral405 = il2cpp_codegen_string_literal_from_index(405);
		_stringLiteral406 = il2cpp_codegen_string_literal_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t802_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m3580(__this, _stringLiteral404, L_2, L_3, /*hidden argument*/NULL);
		Response_set_success_m3583(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m3576(__this, _stringLiteral405, L_5, L_6, /*hidden argument*/NULL);
		Response_set_extendedInfo_m3585(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = Response_get_success_m3582(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m3584(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral406, L_9, /*hidden argument*/NULL);
		FormatException_t838 * L_11 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
extern "C" void BasicResponse__ctor_m3588 (BasicResponse_t678 * __this, const MethodInfo* method)
{
	{
		Response__ctor_m3581(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"
extern "C" void CreateMatchRequest__ctor_m3589 (CreateMatchRequest_t679 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3570(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m3590 (CreateMatchRequest_t679 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void CreateMatchRequest_set_name_m3591 (CreateMatchRequest_t679 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m3592 (CreateMatchRequest_t679 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern "C" void CreateMatchRequest_set_size_m3593 (CreateMatchRequest_t679 * __this, uint32_t ___value, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m3594 (CreateMatchRequest_t679 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void CreateMatchRequest_set_advertise_m3595 (CreateMatchRequest_t679 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m3596 (CreateMatchRequest_t679 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" void CreateMatchRequest_set_password_m3597 (CreateMatchRequest_t679 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t680 * CreateMatchRequest_get_matchAttributes_m3598 (CreateMatchRequest_t679 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t680 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t839_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral407;
extern Il2CppCodeGenString* _stringLiteral408;
extern Il2CppCodeGenString* _stringLiteral409;
extern "C" String_t* CreateMatchRequest_ToString_m3599 (CreateMatchRequest_t679 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		UInt32_t839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral407 = il2cpp_codegen_string_literal_from_index(407);
		_stringLiteral408 = il2cpp_codegen_string_literal_from_index(408);
		_stringLiteral409 = il2cpp_codegen_string_literal_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t148* G_B2_1 = {0};
	ObjectU5BU5D_t148* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t148* G_B1_1 = {0};
	ObjectU5BU5D_t148* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t148* G_B3_2 = {0};
	ObjectU5BU5D_t148* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t148* G_B5_1 = {0};
	ObjectU5BU5D_t148* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t148* G_B4_1 = {0};
	ObjectU5BU5D_t148* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t148* G_B6_2 = {0};
	ObjectU5BU5D_t148* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m3574(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m3590(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t148* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m3592(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(UInt32_t839_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t148* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m3594(__this, /*hidden argument*/NULL);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t148* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m3596(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m421(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = _stringLiteral407;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = _stringLiteral407;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = _stringLiteral408;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = _stringLiteral409;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(Object_t *))) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t148* L_16 = G_B3_3;
		Dictionary_2_t680 * L_17 = CreateMatchRequest_get_matchAttributes_m3598(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t680 * L_18 = CreateMatchRequest_get_matchAttributes_m3598(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(Object_t *))) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m3238(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"
extern "C" void CreateMatchResponse__ctor_m3600 (CreateMatchResponse_t681 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m3588(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m3601 (CreateMatchResponse_t681 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void CreateMatchResponse_set_address_m3602 (CreateMatchResponse_t681 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m3603 (CreateMatchResponse_t681 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CreateMatchResponse_set_port_m3604 (CreateMatchResponse_t681 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m3605 (CreateMatchResponse_t681 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" void CreateMatchResponse_set_networkId_m3606 (CreateMatchResponse_t681 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m3607 (CreateMatchResponse_t681 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m3608 (CreateMatchResponse_t681 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m3609 (CreateMatchResponse_t681 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern "C" void CreateMatchResponse_set_nodeId_m3610 (CreateMatchResponse_t681 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m3611 (CreateMatchResponse_t681 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void CreateMatchResponse_set_usingRelay_m3612 (CreateMatchResponse_t681 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t694_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t695_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral410;
extern Il2CppCodeGenString* _stringLiteral401;
extern "C" String_t* CreateMatchResponse_ToString_m3613 (CreateMatchResponse_t681 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		NetworkID_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		NodeID_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(468);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		_stringLiteral410 = il2cpp_codegen_string_literal_from_index(410);
		_stringLiteral401 = il2cpp_codegen_string_literal_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m3586(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m3601(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t148* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m3603(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t148* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m3605(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t694_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m4063(L_11, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3, sizeof(Object_t *))) = (Object_t *)L_12;
		ObjectU5BU5D_t148* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m3609(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t695_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m4063(L_16, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4, sizeof(Object_t *))) = (Object_t *)L_17;
		ObjectU5BU5D_t148* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m3611(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5, sizeof(Object_t *))) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral410, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral411;
extern Il2CppCodeGenString* _stringLiteral412;
extern Il2CppCodeGenString* _stringLiteral413;
extern Il2CppCodeGenString* _stringLiteral414;
extern Il2CppCodeGenString* _stringLiteral415;
extern Il2CppCodeGenString* _stringLiteral416;
extern Il2CppCodeGenString* _stringLiteral417;
extern "C" void CreateMatchResponse_Parse_m3614 (CreateMatchResponse_t681 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral411 = il2cpp_codegen_string_literal_from_index(411);
		_stringLiteral412 = il2cpp_codegen_string_literal_from_index(412);
		_stringLiteral413 = il2cpp_codegen_string_literal_from_index(413);
		_stringLiteral414 = il2cpp_codegen_string_literal_from_index(414);
		_stringLiteral415 = il2cpp_codegen_string_literal_from_index(415);
		_stringLiteral416 = il2cpp_codegen_string_literal_from_index(416);
		_stringLiteral417 = il2cpp_codegen_string_literal_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m3587(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t802_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m3576(__this, _stringLiteral411, L_3, L_4, /*hidden argument*/NULL);
		CreateMatchResponse_set_address_m3602(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m3577(__this, _stringLiteral412, L_6, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_set_port_m3604(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m3579(__this, _stringLiteral413, L_9, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_set_networkId_m3606(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m3576(__this, _stringLiteral414, L_12, L_13, /*hidden argument*/NULL);
		CreateMatchResponse_set_accessTokenString_m3608(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m3578(__this, _stringLiteral415, L_15, L_16, /*hidden argument*/NULL);
		CreateMatchResponse_set_nodeId_m3610(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m3580(__this, _stringLiteral416, L_18, L_19, /*hidden argument*/NULL);
		CreateMatchResponse_set_usingRelay_m3612(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral417, L_22, /*hidden argument*/NULL);
		FormatException_t838 * L_24 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"
extern "C" void JoinMatchRequest__ctor_m3615 (JoinMatchRequest_t682 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3570(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m3616 (JoinMatchRequest_t682 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" void JoinMatchRequest_set_networkId_m3617 (JoinMatchRequest_t682 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m3618 (JoinMatchRequest_t682 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void JoinMatchRequest_set_password_m3619 (JoinMatchRequest_t682 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t694_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral418;
extern Il2CppCodeGenString* _stringLiteral401;
extern Il2CppCodeGenString* _stringLiteral408;
extern Il2CppCodeGenString* _stringLiteral409;
extern "C" String_t* JoinMatchRequest_ToString_m3620 (JoinMatchRequest_t682 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		NetworkID_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral418 = il2cpp_codegen_string_literal_from_index(418);
		_stringLiteral401 = il2cpp_codegen_string_literal_from_index(401);
		_stringLiteral408 = il2cpp_codegen_string_literal_from_index(408);
		_stringLiteral409 = il2cpp_codegen_string_literal_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t148* G_B2_1 = {0};
	ObjectU5BU5D_t148* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t148* G_B1_1 = {0};
	ObjectU5BU5D_t148* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t148* G_B3_2 = {0};
	ObjectU5BU5D_t148* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m3574(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m3616(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t694_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4063(L_5, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t148* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m3618(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m421(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = _stringLiteral418;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = _stringLiteral418;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = _stringLiteral408;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = _stringLiteral409;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(Object_t *))) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m3238(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"
extern "C" void JoinMatchResponse__ctor_m3621 (JoinMatchResponse_t683 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m3588(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m3622 (JoinMatchResponse_t683 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void JoinMatchResponse_set_address_m3623 (JoinMatchResponse_t683 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m3624 (JoinMatchResponse_t683 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void JoinMatchResponse_set_port_m3625 (JoinMatchResponse_t683 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m3626 (JoinMatchResponse_t683 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" void JoinMatchResponse_set_networkId_m3627 (JoinMatchResponse_t683 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m3628 (JoinMatchResponse_t683 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m3629 (JoinMatchResponse_t683 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m3630 (JoinMatchResponse_t683 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern "C" void JoinMatchResponse_set_nodeId_m3631 (JoinMatchResponse_t683 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m3632 (JoinMatchResponse_t683 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void JoinMatchResponse_set_usingRelay_m3633 (JoinMatchResponse_t683 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t694_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t695_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral410;
extern Il2CppCodeGenString* _stringLiteral401;
extern "C" String_t* JoinMatchResponse_ToString_m3634 (JoinMatchResponse_t683 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		NetworkID_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		NodeID_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(468);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		_stringLiteral410 = il2cpp_codegen_string_literal_from_index(410);
		_stringLiteral401 = il2cpp_codegen_string_literal_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m3586(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m3622(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t148* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m3624(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t148* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m3626(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t694_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m4063(L_11, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3, sizeof(Object_t *))) = (Object_t *)L_12;
		ObjectU5BU5D_t148* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m3630(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t695_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m4063(L_16, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4, sizeof(Object_t *))) = (Object_t *)L_17;
		ObjectU5BU5D_t148* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m3632(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5, sizeof(Object_t *))) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral410, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral411;
extern Il2CppCodeGenString* _stringLiteral412;
extern Il2CppCodeGenString* _stringLiteral413;
extern Il2CppCodeGenString* _stringLiteral414;
extern Il2CppCodeGenString* _stringLiteral415;
extern Il2CppCodeGenString* _stringLiteral416;
extern Il2CppCodeGenString* _stringLiteral417;
extern "C" void JoinMatchResponse_Parse_m3635 (JoinMatchResponse_t683 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral411 = il2cpp_codegen_string_literal_from_index(411);
		_stringLiteral412 = il2cpp_codegen_string_literal_from_index(412);
		_stringLiteral413 = il2cpp_codegen_string_literal_from_index(413);
		_stringLiteral414 = il2cpp_codegen_string_literal_from_index(414);
		_stringLiteral415 = il2cpp_codegen_string_literal_from_index(415);
		_stringLiteral416 = il2cpp_codegen_string_literal_from_index(416);
		_stringLiteral417 = il2cpp_codegen_string_literal_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m3587(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t802_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m3576(__this, _stringLiteral411, L_3, L_4, /*hidden argument*/NULL);
		JoinMatchResponse_set_address_m3623(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m3577(__this, _stringLiteral412, L_6, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_set_port_m3625(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m3579(__this, _stringLiteral413, L_9, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_set_networkId_m3627(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m3576(__this, _stringLiteral414, L_12, L_13, /*hidden argument*/NULL);
		JoinMatchResponse_set_accessTokenString_m3629(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m3578(__this, _stringLiteral415, L_15, L_16, /*hidden argument*/NULL);
		JoinMatchResponse_set_nodeId_m3631(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m3580(__this, _stringLiteral416, L_18, L_19, /*hidden argument*/NULL);
		JoinMatchResponse_set_usingRelay_m3633(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral417, L_22, /*hidden argument*/NULL);
		FormatException_t838 * L_24 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"
extern "C" void DestroyMatchRequest__ctor_m3636 (DestroyMatchRequest_t684 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3570(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m3637 (DestroyMatchRequest_t684 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" void DestroyMatchRequest_set_networkId_m3638 (DestroyMatchRequest_t684 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t694_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral419;
extern Il2CppCodeGenString* _stringLiteral401;
extern "C" String_t* DestroyMatchRequest_ToString_m3639 (DestroyMatchRequest_t684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		NetworkID_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		_stringLiteral419 = il2cpp_codegen_string_literal_from_index(419);
		_stringLiteral401 = il2cpp_codegen_string_literal_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m3574(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m3637(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t694_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4063(L_5, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral419, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"
extern "C" void DropConnectionRequest__ctor_m3640 (DropConnectionRequest_t685 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3570(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m3641 (DropConnectionRequest_t685 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" void DropConnectionRequest_set_networkId_m3642 (DropConnectionRequest_t685 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m3643 (DropConnectionRequest_t685 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern "C" void DropConnectionRequest_set_nodeId_m3644 (DropConnectionRequest_t685 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t694_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t695_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral420;
extern Il2CppCodeGenString* _stringLiteral401;
extern "C" String_t* DropConnectionRequest_ToString_m3645 (DropConnectionRequest_t685 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		NetworkID_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		NodeID_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(468);
		_stringLiteral420 = il2cpp_codegen_string_literal_from_index(420);
		_stringLiteral401 = il2cpp_codegen_string_literal_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m3574(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m3641(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t694_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4063(L_5, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t148* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m3643(__this, /*hidden argument*/NULL);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(NodeID_t695_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m4063(L_10, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral420, L_7, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"
extern "C" void ListMatchRequest__ctor_m3646 (ListMatchRequest_t686 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3570(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m3647 (ListMatchRequest_t686 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ListMatchRequest_set_pageSize_m3648 (ListMatchRequest_t686 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m3649 (ListMatchRequest_t686 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" void ListMatchRequest_set_pageNum_m3650 (ListMatchRequest_t686 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m3651 (ListMatchRequest_t686 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void ListMatchRequest_set_nameFilter_m3652 (ListMatchRequest_t686 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_includePasswordMatches()
extern "C" bool ListMatchRequest_get_includePasswordMatches_m3653 (ListMatchRequest_t686 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CincludePasswordMatchesU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t680 * ListMatchRequest_get_matchAttributeFilterLessThan_m3654 (ListMatchRequest_t686 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t680 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t680 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m3655 (ListMatchRequest_t686 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t680 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_9);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral421;
extern "C" String_t* ListMatchRequest_ToString_m3656 (ListMatchRequest_t686 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t148* G_B2_1 = {0};
	ObjectU5BU5D_t148* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t148* G_B1_1 = {0};
	ObjectU5BU5D_t148* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t148* G_B3_2 = {0};
	ObjectU5BU5D_t148* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t148* G_B5_1 = {0};
	ObjectU5BU5D_t148* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t148* G_B4_1 = {0};
	ObjectU5BU5D_t148* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t148* G_B6_2 = {0};
	ObjectU5BU5D_t148* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m3574(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m3647(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t148* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m3649(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t148* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m3651(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t148* L_12 = L_10;
		Dictionary_2_t680 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m3654(__this, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = _stringLiteral421;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = _stringLiteral421;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t680 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m3654(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(Object_t *))) = (Object_t *)L_17;
		ObjectU5BU5D_t148* L_18 = G_B3_3;
		Dictionary_2_t680 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m3655(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t680 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m3655(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(Object_t *))) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m3238(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
extern "C" void MatchDirectConnectInfo__ctor_m3657 (MatchDirectConnectInfo_t687 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m3575(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m3658 (MatchDirectConnectInfo_t687 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern "C" void MatchDirectConnectInfo_set_nodeId_m3659 (MatchDirectConnectInfo_t687 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m3660 (MatchDirectConnectInfo_t687 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void MatchDirectConnectInfo_set_publicAddress_m3661 (MatchDirectConnectInfo_t687 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m3662 (MatchDirectConnectInfo_t687 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m3663 (MatchDirectConnectInfo_t687 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t695_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral422;
extern "C" String_t* MatchDirectConnectInfo_ToString_m3664 (MatchDirectConnectInfo_t687 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		NodeID_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(468);
		_stringLiteral422 = il2cpp_codegen_string_literal_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m4062(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m3658(__this, /*hidden argument*/NULL);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(NodeID_t695_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t148* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m3660(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t148* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m3662(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3, sizeof(Object_t *))) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral422, L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral415;
extern Il2CppCodeGenString* _stringLiteral423;
extern Il2CppCodeGenString* _stringLiteral424;
extern Il2CppCodeGenString* _stringLiteral417;
extern "C" void MatchDirectConnectInfo_Parse_m3665 (MatchDirectConnectInfo_t687 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral415 = il2cpp_codegen_string_literal_from_index(415);
		_stringLiteral423 = il2cpp_codegen_string_literal_from_index(423);
		_stringLiteral424 = il2cpp_codegen_string_literal_from_index(424);
		_stringLiteral417 = il2cpp_codegen_string_literal_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t802_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m3578(__this, _stringLiteral415, L_2, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_nodeId_m3659(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m3576(__this, _stringLiteral423, L_5, L_6, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_publicAddress_m3661(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m3576(__this, _stringLiteral424, L_8, L_9, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_privateAddress_m3663(__this, L_10, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral417, L_12, /*hidden argument*/NULL);
		FormatException_t838 * L_14 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"
struct List_1_t689;
struct String_t;
struct Object_t;
struct IDictionary_2_t802;
struct List_1_t502;
struct String_t;
struct Object_t;
struct IDictionary_2_t802;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t502 * ResponseBase_ParseJSONList_TisObject_t_m4070_gshared (ResponseBase_t676 * __this, String_t* p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define ResponseBase_ParseJSONList_TisObject_t_m4070(__this, p0, p1, p2, method) (( List_1_t502 * (*) (ResponseBase_t676 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m4070_gshared)(__this, p0, p1, p2, method)
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t687_m4069(__this, p0, p1, p2, method) (( List_1_t689 * (*) (ResponseBase_t676 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m4070_gshared)(__this, p0, p1, p2, method)
// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
extern "C" void MatchDesc__ctor_m3666 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m3575(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m3667 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" void MatchDesc_set_networkId_m3668 (MatchDesc_t688 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m3669 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void MatchDesc_set_name_m3670 (MatchDesc_t688 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m3671 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m3672 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void MatchDesc_set_maxSize_m3673 (MatchDesc_t688 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m3674 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m3675 (MatchDesc_t688 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m3676 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void MatchDesc_set_isPrivate_m3677 (MatchDesc_t688 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t680 * MatchDesc_get_matchAttributes_m3678 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t680 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C" uint16_t MatchDesc_get_hostNodeId_m3679 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t689 * MatchDesc_get_directConnectInfos_m3680 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	{
		List_1_t689 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
extern "C" void MatchDesc_set_directConnectInfos_m3681 (MatchDesc_t688 * __this, List_1_t689 * ___value, const MethodInfo* method)
{
	{
		List_1_t689 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t694_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral425;
extern Il2CppCodeGenString* _stringLiteral401;
extern "C" String_t* MatchDesc_ToString_m3682 (MatchDesc_t688 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		NetworkID_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		_stringLiteral425 = il2cpp_codegen_string_literal_from_index(425);
		_stringLiteral401 = il2cpp_codegen_string_literal_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t148* G_B2_1 = {0};
	ObjectU5BU5D_t148* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t148* G_B1_1 = {0};
	ObjectU5BU5D_t148* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t148* G_B3_2 = {0};
	ObjectU5BU5D_t148* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m4062(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m3667(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t694_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4063(L_5, _stringLiteral401, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t148* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m3669(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2, sizeof(Object_t *))) = (Object_t *)L_8;
		ObjectU5BU5D_t148* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m3671(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3, sizeof(Object_t *))) = (Object_t *)L_12;
		ObjectU5BU5D_t148* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m3672(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t148* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m3674(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5, sizeof(Object_t *))) = (Object_t *)L_20;
		ObjectU5BU5D_t148* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m3676(__this, /*hidden argument*/NULL);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6, sizeof(Object_t *))) = (Object_t *)L_24;
		ObjectU5BU5D_t148* L_25 = L_21;
		Dictionary_2_t680 * L_26 = MatchDesc_get_matchAttributes_m3678(__this, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = _stringLiteral425;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = _stringLiteral425;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t680 * L_27 = MatchDesc_get_matchAttributes_m3678(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(Object_t *))) = (Object_t *)L_30;
		ObjectU5BU5D_t148* L_31 = G_B3_3;
		List_1_t689 * L_32 = MatchDesc_get_directConnectInfos_m3680(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count() */, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8, sizeof(Object_t *))) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m3238(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t687_m4069_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral413;
extern Il2CppCodeGenString* _stringLiteral75;
extern Il2CppCodeGenString* _stringLiteral426;
extern Il2CppCodeGenString* _stringLiteral427;
extern Il2CppCodeGenString* _stringLiteral428;
extern Il2CppCodeGenString* _stringLiteral429;
extern Il2CppCodeGenString* _stringLiteral417;
extern "C" void MatchDesc_Parse_m3683 (MatchDesc_t688 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t687_m4069_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484052);
		_stringLiteral413 = il2cpp_codegen_string_literal_from_index(413);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		_stringLiteral426 = il2cpp_codegen_string_literal_from_index(426);
		_stringLiteral427 = il2cpp_codegen_string_literal_from_index(427);
		_stringLiteral428 = il2cpp_codegen_string_literal_from_index(428);
		_stringLiteral429 = il2cpp_codegen_string_literal_from_index(429);
		_stringLiteral417 = il2cpp_codegen_string_literal_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t802_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m3579(__this, _stringLiteral413, L_2, L_3, /*hidden argument*/NULL);
		MatchDesc_set_networkId_m3668(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m3576(__this, _stringLiteral75, L_5, L_6, /*hidden argument*/NULL);
		MatchDesc_set_name_m3670(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m3577(__this, _stringLiteral426, L_8, L_9, /*hidden argument*/NULL);
		MatchDesc_set_maxSize_m3673(__this, L_10, /*hidden argument*/NULL);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m3577(__this, _stringLiteral427, L_11, L_12, /*hidden argument*/NULL);
		MatchDesc_set_currentSize_m3675(__this, L_13, /*hidden argument*/NULL);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m3580(__this, _stringLiteral428, L_14, L_15, /*hidden argument*/NULL);
		MatchDesc_set_isPrivate_m3677(__this, L_16, /*hidden argument*/NULL);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t689 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t687_m4069(__this, _stringLiteral429, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t687_m4069_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m3681(__this, L_19, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral417, L_21, /*hidden argument*/NULL);
		FormatException_t838 * L_23 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
struct List_1_t691;
struct String_t;
struct Object_t;
struct IDictionary_2_t802;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDesc_t688_m4071(__this, p0, p1, p2, method) (( List_1_t691 * (*) (ResponseBase_t676 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m4070_gshared)(__this, p0, p1, p2, method)
// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"
extern "C" void ListMatchResponse__ctor_m3684 (ListMatchResponse_t690 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m3588(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t691 * ListMatchResponse_get_matches_m3685 (ListMatchResponse_t690 * __this, const MethodInfo* method)
{
	{
		List_1_t691 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
extern "C" void ListMatchResponse_set_matches_m3686 (ListMatchResponse_t690 * __this, List_1_t691 * ___value, const MethodInfo* method)
{
	{
		List_1_t691 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral430;
extern "C" String_t* ListMatchResponse_ToString_m3687 (ListMatchResponse_t690 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral430 = il2cpp_codegen_string_literal_from_index(430);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m3586(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		List_1_t691 * L_3 = ListMatchResponse_get_matches_m3685(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count() */, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m3238(NULL /*static, unused*/, _stringLiteral430, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t688_m4071_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral431;
extern Il2CppCodeGenString* _stringLiteral417;
extern "C" void ListMatchResponse_Parse_m3688 (ListMatchResponse_t690 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		ResponseBase_ParseJSONList_TisMatchDesc_t688_m4071_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484053);
		_stringLiteral431 = il2cpp_codegen_string_literal_from_index(431);
		_stringLiteral417 = il2cpp_codegen_string_literal_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m3587(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t802_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t691 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t688_m4071(__this, _stringLiteral431, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t688_m4071_MethodInfo_var);
		ListMatchResponse_set_matches_m3686(__this, L_5, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral417, L_7, /*hidden argument*/NULL);
		FormatException_t838 * L_9 = (FormatException_t838 *)il2cpp_codegen_object_new (FormatException_t838_il2cpp_TypeInfo_var);
		FormatException__ctor_m4064(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0042:
	{
		return;
	}
}
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ByteU5BU5D_t625_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m3689 (NetworkAccessToken_t696 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		__this->___array_0 = ((ByteU5BU5D_t625*)SZArrayNew(ByteU5BU5D_t625_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern TypeInfo* Convert_t830_il2cpp_TypeInfo_var;
extern "C" String_t* NetworkAccessToken_GetByteString_m3690 (NetworkAccessToken_t696 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t625* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t830_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m4072(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
