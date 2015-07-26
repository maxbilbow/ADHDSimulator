#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.Alert
struct Alert_t961;
// System.Exception
#include "mscorlib_System_Exception.h"
// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t1008  : public Exception_t143
{
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t961 * ___alert_11;
};
