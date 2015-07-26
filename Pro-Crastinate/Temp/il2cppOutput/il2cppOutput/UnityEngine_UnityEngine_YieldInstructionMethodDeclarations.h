#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t551;
struct YieldInstruction_t551_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m3355 (YieldInstruction_t551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t551_marshal(const YieldInstruction_t551& unmarshaled, YieldInstruction_t551_marshaled& marshaled);
void YieldInstruction_t551_marshal_back(const YieldInstruction_t551_marshaled& marshaled, YieldInstruction_t551& unmarshaled);
void YieldInstruction_t551_marshal_cleanup(YieldInstruction_t551_marshaled& marshaled);
