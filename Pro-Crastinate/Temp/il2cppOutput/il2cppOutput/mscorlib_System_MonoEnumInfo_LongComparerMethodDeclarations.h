#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoEnumInfo/LongComparer
struct LongComparer_t1830;
// System.Object
struct Object_t;

// System.Void System.MonoEnumInfo/LongComparer::.ctor()
extern "C" void LongComparer__ctor_m10719 (LongComparer_t1830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoEnumInfo/LongComparer::Compare(System.Object,System.Object)
extern "C" int32_t LongComparer_Compare_m10720 (LongComparer_t1830 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoEnumInfo/LongComparer::Compare(System.Int64,System.Int64)
extern "C" int32_t LongComparer_Compare_m10721 (LongComparer_t1830 * __this, int64_t ___ix, int64_t ___iy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
