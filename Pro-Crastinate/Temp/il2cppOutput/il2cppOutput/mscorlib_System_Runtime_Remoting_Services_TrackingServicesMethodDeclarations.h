#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1636;

// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern "C" void TrackingServices__cctor_m9240 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C" void TrackingServices_NotifyUnmarshaledObject_m9241 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1636 * ___or, const MethodInfo* method) IL2CPP_METHOD_ATTR;
