#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.TimedObjectActivator
struct TimedObjectActivator_t127;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t121;

// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
extern "C" void TimedObjectActivator__ctor_m384 (TimedObjectActivator_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
extern "C" void TimedObjectActivator_Awake_m385 (TimedObjectActivator_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Activate_m386 (TimedObjectActivator_t127 * __this, Entry_t121 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Deactivate_m387 (TimedObjectActivator_t127 * __this, Entry_t121 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_ReloadLevel_m388 (TimedObjectActivator_t127 * __this, Entry_t121 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
