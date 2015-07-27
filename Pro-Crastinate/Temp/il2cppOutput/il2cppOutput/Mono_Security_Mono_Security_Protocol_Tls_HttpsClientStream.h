#pragma once
#include <stdint.h>
// System.Net.HttpWebRequest
struct HttpWebRequest_t995;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t996;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t997;
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.HttpsClientStream
struct  HttpsClientStream_t994  : public SslClientStream_t980
{
	// System.Net.HttpWebRequest Mono.Security.Protocol.Tls.HttpsClientStream::_request
	HttpWebRequest_t995 * ____request_20;
	// System.Int32 Mono.Security.Protocol.Tls.HttpsClientStream::_status
	int32_t ____status_21;
};
struct HttpsClientStream_t994_StaticFields{
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache2
	CertificateSelectionCallback_t996 * ___U3CU3Ef__amU24cache2_22;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache3
	PrivateKeySelectionCallback_t997 * ___U3CU3Ef__amU24cache3_23;
};
