#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m6035 (UriScheme_t1235 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void UriScheme_t1235_marshal(const UriScheme_t1235& unmarshaled, UriScheme_t1235_marshaled& marshaled);
extern "C" void UriScheme_t1235_marshal_back(const UriScheme_t1235_marshaled& marshaled, UriScheme_t1235& unmarshaled);
extern "C" void UriScheme_t1235_marshal_cleanup(UriScheme_t1235_marshaled& marshaled);
