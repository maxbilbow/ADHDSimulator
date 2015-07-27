#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_77.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"

// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20118_gshared (InternalEnumerator_1_t2617 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20118(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2617 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20118_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20119_gshared (InternalEnumerator_1_t2617 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20119(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2617 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20119_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20120_gshared (InternalEnumerator_1_t2617 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20120(__this, method) (( void (*) (InternalEnumerator_1_t2617 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20120_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20121_gshared (InternalEnumerator_1_t2617 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20121(__this, method) (( bool (*) (InternalEnumerator_1_t2617 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20121_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
extern "C" Mark_t1198  InternalEnumerator_1_get_Current_m20122_gshared (InternalEnumerator_1_t2617 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20122(__this, method) (( Mark_t1198  (*) (InternalEnumerator_1_t2617 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20122_gshared)(__this, method)
