#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1012;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t996;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t997;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1013;
// Mono.Security.Protocol.Tls.SslStreamBase
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamBase.h"
// Mono.Security.Protocol.Tls.SslClientStream
struct  SslClientStream_t980  : public SslStreamBase_t1011
{
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation
	CertificateValidationCallback_t1012 * ___ServerCertValidation_16;
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::ClientCertSelection
	CertificateSelectionCallback_t996 * ___ClientCertSelection_17;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::PrivateKeySelection
	PrivateKeySelectionCallback_t997 * ___PrivateKeySelection_18;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation2
	CertificateValidationCallback2_t1013 * ___ServerCertValidation2_19;
};
