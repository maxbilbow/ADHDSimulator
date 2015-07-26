#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1418;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1039;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IAsyncResult
struct IAsyncResult_t381;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m8097 (FileStreamAsyncResult_t1418 * __this, AsyncCallback_t382 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m8098 (Object_t * __this /* static, unused */, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m8099 (FileStreamAsyncResult_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1039 * FileStreamAsyncResult_get_AsyncWaitHandle_m8100 (FileStreamAsyncResult_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m8101 (FileStreamAsyncResult_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
