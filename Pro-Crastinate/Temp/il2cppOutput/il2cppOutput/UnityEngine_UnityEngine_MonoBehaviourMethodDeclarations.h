#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t32;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t398;
struct Coroutine_t398_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m501 (MonoBehaviour_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" void MonoBehaviour_Invoke_m703 (MonoBehaviour_t32 * __this, String_t* ___methodName, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t398 * MonoBehaviour_StartCoroutine_m682 (MonoBehaviour_t32 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t398 * MonoBehaviour_StartCoroutine_Auto_m3310 (MonoBehaviour_t32 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" Coroutine_t398 * MonoBehaviour_StartCoroutine_m654 (MonoBehaviour_t32 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m3311 (MonoBehaviour_t32 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m2565 (MonoBehaviour_t32 * __this, Coroutine_t398 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3312 (MonoBehaviour_t32 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m3313 (MonoBehaviour_t32 * __this, Coroutine_t398 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" void MonoBehaviour_print_m893 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
