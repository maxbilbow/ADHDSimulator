#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_90.h"
// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20213_gshared (InternalEnumerator_1_t2637 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20213(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2637 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20213_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20214_gshared (InternalEnumerator_1_t2637 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20214(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2637 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20214_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20215_gshared (InternalEnumerator_1_t2637 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20215(__this, method) (( void (*) (InternalEnumerator_1_t2637 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20215_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20216_gshared (InternalEnumerator_1_t2637 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20216(__this, method) (( bool (*) (InternalEnumerator_1_t2637 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20216_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
extern "C" Slot_t1384  InternalEnumerator_1_get_Current_m20217_gshared (InternalEnumerator_1_t2637 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20217(__this, method) (( Slot_t1384  (*) (InternalEnumerator_1_t2637 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20217_gshared)(__this, method)
