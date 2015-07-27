#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Timer/Scheduler
struct Scheduler_t1798;
// System.Threading.Timer
struct Timer_t1590;
// System.Collections.ArrayList
struct ArrayList_t920;

// System.Void System.Threading.Timer/Scheduler::.ctor()
extern "C" void Scheduler__ctor_m10294 (Scheduler_t1798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::.cctor()
extern "C" void Scheduler__cctor_m10295 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
extern "C" Scheduler_t1798 * Scheduler_get_Instance_m10296 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
extern "C" void Scheduler_Remove_m10297 (Scheduler_t1798 * __this, Timer_t1590 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
extern "C" void Scheduler_Change_m10298 (Scheduler_t1798 * __this, Timer_t1590 * ___timer, int64_t ___new_next_run, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
extern "C" void Scheduler_Add_m10299 (Scheduler_t1798 * __this, Timer_t1590 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
extern "C" int32_t Scheduler_InternalRemove_m10300 (Scheduler_t1798 * __this, Timer_t1590 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
extern "C" void Scheduler_SchedulerThread_m10301 (Scheduler_t1798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.ArrayList,System.Int32)
extern "C" void Scheduler_ShrinkIfNeeded_m10302 (Scheduler_t1798 * __this, ArrayList_t920 * ___list, int32_t ___initial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
