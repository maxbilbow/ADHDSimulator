﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTime>
struct EqualityComparer_1_t2620;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
extern "C" void EqualityComparer_1__ctor_m20184_gshared (EqualityComparer_1_t2620 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m20184(__this, method) (( void (*) (EqualityComparer_1_t2620 *, const MethodInfo*))EqualityComparer_1__ctor_m20184_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
extern "C" void EqualityComparer_1__cctor_m20185_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m20185(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m20185_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20186_gshared (EqualityComparer_1_t2620 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20186(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t2620 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20186_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20187_gshared (EqualityComparer_1_t2620 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20187(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t2620 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20187_gshared)(__this, ___x, ___y, method)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
extern "C" EqualityComparer_1_t2620 * EqualityComparer_1_get_Default_m20188_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m20188(__this /* static, unused */, method) (( EqualityComparer_1_t2620 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m20188_gshared)(__this /* static, unused */, method)