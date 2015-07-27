﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2579;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_40.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19882_gshared (Enumerator_t2589 * __this, Dictionary_2_t2579 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m19882(__this, ___host, method) (( void (*) (Enumerator_t2589 *, Dictionary_2_t2579 *, const MethodInfo*))Enumerator__ctor_m19882_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19883_gshared (Enumerator_t2589 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19883(__this, method) (( Object_t * (*) (Enumerator_t2589 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19883_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m19884_gshared (Enumerator_t2589 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19884(__this, method) (( void (*) (Enumerator_t2589 *, const MethodInfo*))Enumerator_Dispose_m19884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19885_gshared (Enumerator_t2589 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19885(__this, method) (( bool (*) (Enumerator_t2589 *, const MethodInfo*))Enumerator_MoveNext_m19885_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" bool Enumerator_get_Current_m19886_gshared (Enumerator_t2589 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19886(__this, method) (( bool (*) (Enumerator_t2589 *, const MethodInfo*))Enumerator_get_Current_m19886_gshared)(__this, method)