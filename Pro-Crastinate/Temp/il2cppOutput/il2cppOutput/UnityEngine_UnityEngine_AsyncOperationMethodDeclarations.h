#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t543;
struct AsyncOperation_t543_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3218 (AsyncOperation_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3219 (AsyncOperation_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3220 (AsyncOperation_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t543_marshal(const AsyncOperation_t543& unmarshaled, AsyncOperation_t543_marshaled& marshaled);
void AsyncOperation_t543_marshal_back(const AsyncOperation_t543_marshaled& marshaled, AsyncOperation_t543& unmarshaled);
void AsyncOperation_t543_marshal_cleanup(AsyncOperation_t543_marshaled& marshaled);
