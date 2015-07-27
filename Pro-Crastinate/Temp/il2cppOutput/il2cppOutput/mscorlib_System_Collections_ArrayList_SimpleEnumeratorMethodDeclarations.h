#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SimpleEnumerator
struct SimpleEnumerator_t1369;
// System.Collections.ArrayList
struct ArrayList_t920;
// System.Object
struct Object_t;

// System.Void System.Collections.ArrayList/SimpleEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void SimpleEnumerator__ctor_m7534 (SimpleEnumerator_t1369 * __this, ArrayList_t920 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SimpleEnumerator::.cctor()
extern "C" void SimpleEnumerator__cctor_m7535 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SimpleEnumerator::MoveNext()
extern "C" bool SimpleEnumerator_MoveNext_m7536 (SimpleEnumerator_t1369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SimpleEnumerator::get_Current()
extern "C" Object_t * SimpleEnumerator_get_Current_m7537 (SimpleEnumerator_t1369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
