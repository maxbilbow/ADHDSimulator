﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.Header
struct Header_t1583;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
extern "C" void Header__ctor_m9038 (Header_t1583 * __this, String_t* ____Name, Object_t * ____Value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern "C" void Header__ctor_m9039 (Header_t1583 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern "C" void Header__ctor_m9040 (Header_t1583 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;