#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2543;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2531;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19625_gshared (ShimEnumerator_t2543 * __this, Dictionary_2_t2531 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19625(__this, ___host, method) (( void (*) (ShimEnumerator_t2543 *, Dictionary_2_t2531 *, const MethodInfo*))ShimEnumerator__ctor_m19625_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19626_gshared (ShimEnumerator_t2543 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19626(__this, method) (( bool (*) (ShimEnumerator_t2543 *, const MethodInfo*))ShimEnumerator_MoveNext_m19626_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m19627_gshared (ShimEnumerator_t2543 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19627(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2543 *, const MethodInfo*))ShimEnumerator_get_Entry_m19627_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19628_gshared (ShimEnumerator_t2543 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19628(__this, method) (( Object_t * (*) (ShimEnumerator_t2543 *, const MethodInfo*))ShimEnumerator_get_Key_m19628_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19629_gshared (ShimEnumerator_t2543 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19629(__this, method) (( Object_t * (*) (ShimEnumerator_t2543 *, const MethodInfo*))ShimEnumerator_get_Value_m19629_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19630_gshared (ShimEnumerator_t2543 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19630(__this, method) (( Object_t * (*) (ShimEnumerator_t2543 *, const MethodInfo*))ShimEnumerator_get_Current_m19630_gshared)(__this, method)
