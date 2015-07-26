#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
struct Enumerator_t2371;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2362;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17646_gshared (Enumerator_t2371 * __this, Dictionary_2_t2362 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m17646(__this, ___host, method) (( void (*) (Enumerator_t2371 *, Dictionary_2_t2362 *, const MethodInfo*))Enumerator__ctor_m17646_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17647_gshared (Enumerator_t2371 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17647(__this, method) (( Object_t * (*) (Enumerator_t2371 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m17648_gshared (Enumerator_t2371 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17648(__this, method) (( void (*) (Enumerator_t2371 *, const MethodInfo*))Enumerator_Dispose_m17648_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17649_gshared (Enumerator_t2371 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17649(__this, method) (( bool (*) (Enumerator_t2371 *, const MethodInfo*))Enumerator_MoveNext_m17649_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" int64_t Enumerator_get_Current_m17650_gshared (Enumerator_t2371 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17650(__this, method) (( int64_t (*) (Enumerator_t2371 *, const MethodInfo*))Enumerator_get_Current_m17650_gshared)(__this, method)
