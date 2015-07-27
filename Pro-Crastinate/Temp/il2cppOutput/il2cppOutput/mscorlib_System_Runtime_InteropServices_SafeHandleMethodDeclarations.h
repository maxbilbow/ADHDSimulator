#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t1298;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" void SafeHandle__ctor_m8942 (SafeHandle_t1298 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern "C" void SafeHandle_Close_m8943 (SafeHandle_t1298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern "C" void SafeHandle_DangerousAddRef_m8944 (SafeHandle_t1298 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m8945 (SafeHandle_t1298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern "C" void SafeHandle_DangerousRelease_m8946 (SafeHandle_t1298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern "C" void SafeHandle_Dispose_m8947 (SafeHandle_t1298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C" void SafeHandle_Dispose_m8948 (SafeHandle_t1298 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C" void SafeHandle_SetHandle_m8949 (SafeHandle_t1298 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C" void SafeHandle_Finalize_m8950 (SafeHandle_t1298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
