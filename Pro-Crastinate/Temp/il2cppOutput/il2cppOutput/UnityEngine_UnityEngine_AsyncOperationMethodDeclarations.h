#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t550;
struct AsyncOperation_t550_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3239 (AsyncOperation_t550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3240 (AsyncOperation_t550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3241 (AsyncOperation_t550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t550_marshal(const AsyncOperation_t550& unmarshaled, AsyncOperation_t550_marshaled& marshaled);
extern "C" void AsyncOperation_t550_marshal_back(const AsyncOperation_t550_marshaled& marshaled, AsyncOperation_t550& unmarshaled);
extern "C" void AsyncOperation_t550_marshal_cleanup(AsyncOperation_t550_marshaled& marshaled);
