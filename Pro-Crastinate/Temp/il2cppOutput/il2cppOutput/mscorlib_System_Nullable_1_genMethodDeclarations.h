#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Char>::.ctor(T)
extern "C" void Nullable_1__ctor_m479_gshared (Nullable_1_t167 * __this, uint16_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m479(__this, ___value, method) (( void (*) (Nullable_1_t167 *, uint16_t, const MethodInfo*))Nullable_1__ctor_m479_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m484_gshared (Nullable_1_t167 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m484(__this, method) (( bool (*) (Nullable_1_t167 *, const MethodInfo*))Nullable_1_get_HasValue_m484_gshared)(__this, method)
// T System.Nullable`1<System.Char>::get_Value()
extern "C" uint16_t Nullable_1_get_Value_m11956_gshared (Nullable_1_t167 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11956(__this, method) (( uint16_t (*) (Nullable_1_t167 *, const MethodInfo*))Nullable_1_get_Value_m11956_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Char>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m11957_gshared (Nullable_1_t167 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m11957(__this, ___other, method) (( bool (*) (Nullable_1_t167 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m11957_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Char>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m11958_gshared (Nullable_1_t167 * __this, Nullable_1_t167  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m11958(__this, ___other, method) (( bool (*) (Nullable_1_t167 *, Nullable_1_t167 , const MethodInfo*))Nullable_1_Equals_m11958_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Char>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m11959_gshared (Nullable_1_t167 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m11959(__this, method) (( int32_t (*) (Nullable_1_t167 *, const MethodInfo*))Nullable_1_GetHashCode_m11959_gshared)(__this, method)
// T System.Nullable`1<System.Char>::GetValueOrDefault()
extern "C" uint16_t Nullable_1_GetValueOrDefault_m483_gshared (Nullable_1_t167 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m483(__this, method) (( uint16_t (*) (Nullable_1_t167 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m483_gshared)(__this, method)
// System.String System.Nullable`1<System.Char>::ToString()
extern "C" String_t* Nullable_1_ToString_m11960_gshared (Nullable_1_t167 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m11960(__this, method) (( String_t* (*) (Nullable_1_t167 *, const MethodInfo*))Nullable_1_ToString_m11960_gshared)(__this, method)
