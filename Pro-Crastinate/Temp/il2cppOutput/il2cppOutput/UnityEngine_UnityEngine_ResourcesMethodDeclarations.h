#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t76;
struct Object_t76_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t76 * Resources_Load_m3172 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
