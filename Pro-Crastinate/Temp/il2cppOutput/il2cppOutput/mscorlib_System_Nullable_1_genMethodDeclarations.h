#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Char>
struct Nullable_1_t165;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Char>::.ctor(T)
extern "C" void Nullable_1__ctor_m474_gshared (Nullable_1_t165 * __this, uint16_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m474(__this, ___value, method) (( void (*) (Nullable_1_t165 *, uint16_t, const MethodInfo*))Nullable_1__ctor_m474_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m479_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m479(__this, method) (( bool (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_get_HasValue_m479_gshared)(__this, method)
// T System.Nullable`1<System.Char>::get_Value()
extern "C" uint16_t Nullable_1_get_Value_m11685_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11685(__this, method) (( uint16_t (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_get_Value_m11685_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Char>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m11686_gshared (Nullable_1_t165 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m11686(__this, ___other, method) (( bool (*) (Nullable_1_t165 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m11686_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Char>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m11687_gshared (Nullable_1_t165 * __this, Nullable_1_t165  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m11687(__this, ___other, method) (( bool (*) (Nullable_1_t165 *, Nullable_1_t165 , const MethodInfo*))Nullable_1_Equals_m11687_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Char>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m11688_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m11688(__this, method) (( int32_t (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_GetHashCode_m11688_gshared)(__this, method)
// T System.Nullable`1<System.Char>::GetValueOrDefault()
extern "C" uint16_t Nullable_1_GetValueOrDefault_m478_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m478(__this, method) (( uint16_t (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m478_gshared)(__this, method)
// System.String System.Nullable`1<System.Char>::ToString()
extern "C" String_t* Nullable_1_ToString_m11689_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m11689(__this, method) (( String_t* (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_ToString_m11689_gshared)(__this, method)
