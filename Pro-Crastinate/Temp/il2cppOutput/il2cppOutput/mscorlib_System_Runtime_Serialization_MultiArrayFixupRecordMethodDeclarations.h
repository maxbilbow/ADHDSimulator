#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1655;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1652;
// System.Int32[]
struct Int32U5BU5D_t1025;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1645;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m9395 (MultiArrayFixupRecord_t1655 * __this, ObjectRecord_t1652 * ___objectToBeFixed, Int32U5BU5D_t1025* ___indices, ObjectRecord_t1652 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m9396 (MultiArrayFixupRecord_t1655 * __this, ObjectManager_t1645 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
