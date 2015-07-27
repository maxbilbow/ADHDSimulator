﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/SimpleEnumerator
struct SimpleEnumerator_t1266;
// System.Array
struct Array_t;
// System.Object
struct Object_t;

// System.Void System.Array/SimpleEnumerator::.ctor(System.Array)
extern "C" void SimpleEnumerator__ctor_m6819 (SimpleEnumerator_t1266 * __this, Array_t * ___arrayToEnumerate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array/SimpleEnumerator::get_Current()
extern "C" Object_t * SimpleEnumerator_get_Current_m6820 (SimpleEnumerator_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array/SimpleEnumerator::MoveNext()
extern "C" bool SimpleEnumerator_MoveNext_m6821 (SimpleEnumerator_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;