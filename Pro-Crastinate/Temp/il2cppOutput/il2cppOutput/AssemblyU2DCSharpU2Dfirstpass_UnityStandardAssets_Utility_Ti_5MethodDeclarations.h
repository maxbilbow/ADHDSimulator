#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.TimedObjectActivator
struct TimedObjectActivator_t125;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t119;

// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
extern "C" void TimedObjectActivator__ctor_m379 (TimedObjectActivator_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
extern "C" void TimedObjectActivator_Awake_m380 (TimedObjectActivator_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Activate_m381 (TimedObjectActivator_t125 * __this, Entry_t119 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Deactivate_m382 (TimedObjectActivator_t125 * __this, Entry_t119 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_ReloadLevel_m383 (TimedObjectActivator_t125 * __this, Entry_t119 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
