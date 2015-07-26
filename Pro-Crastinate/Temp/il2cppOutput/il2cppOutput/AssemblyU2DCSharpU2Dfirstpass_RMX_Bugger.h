#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.String>
struct List_1_t13;
// System.Collections.Generic.List`1<RMX.Bugger/Log>
struct List_1_t14;
// System.Object
#include "mscorlib_System_Object.h"
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
// RMX.Bugger
struct  Bugger_t15  : public Object_t
{
};
struct Bugger_t15_StaticFields{
	// System.Collections.Generic.List`1<System.String> RMX.Bugger::Queue
	List_1_t13 * ___Queue_0;
	// System.Collections.Generic.List`1<RMX.Bugger/Log> RMX.Bugger::_lateLogs
	List_1_t14 * ____lateLogs_1;
	// RMX.Bugger/Log RMX.Bugger::_log
	Log_t6  ____log_2;
	// System.Single RMX.Bugger::_startedAt
	float ____startedAt_3;
};
