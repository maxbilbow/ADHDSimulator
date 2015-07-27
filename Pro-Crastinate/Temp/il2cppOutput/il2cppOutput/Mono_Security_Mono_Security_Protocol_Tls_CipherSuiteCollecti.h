#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t920;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct  CipherSuiteCollection_t977  : public Object_t
{
	// System.Collections.ArrayList Mono.Security.Protocol.Tls.CipherSuiteCollection::cipherSuites
	ArrayList_t920 * ___cipherSuites_0;
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.CipherSuiteCollection::protocol
	int32_t ___protocol_1;
};
