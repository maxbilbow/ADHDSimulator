#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.String>
struct List_1_t14;
// System.Collections.Generic.List`1<RMX.Bugger/Log>
struct List_1_t15;
// System.Collections.Generic.List`1<RMX.ISingleton>
struct List_1_t16;
// System.Collections.Generic.List`1<RMX.IRMXObject>
struct List_1_t17;
// System.Object
#include "mscorlib_System_Object.h"
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
// RMX.Bugger
struct  Bugger_t13  : public Object_t
{
};
struct Bugger_t13_StaticFields{
	// System.Collections.Generic.List`1<System.String> RMX.Bugger::Queue
	List_1_t14 * ___Queue_0;
	// System.Collections.Generic.List`1<RMX.Bugger/Log> RMX.Bugger::_lateLogs
	List_1_t15 * ____lateLogs_1;
	// System.Collections.Generic.List`1<RMX.ISingleton> RMX.Bugger::singletons
	List_1_t16 * ___singletons_2;
	// System.Collections.Generic.List`1<RMX.IRMXObject> RMX.Bugger::watchList
	List_1_t17 * ___watchList_3;
	// RMX.Bugger/Log RMX.Bugger::_log
	Log_t5  ____log_4;
	// System.Single RMX.Bugger::_startedAt
	float ____startedAt_5;
};
