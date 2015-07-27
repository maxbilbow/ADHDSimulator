#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.Alert
struct Alert_t973;
// System.Exception
#include "mscorlib_System_Exception.h"
// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t1020  : public Exception_t154
{
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t973 * ___alert_11;
};
