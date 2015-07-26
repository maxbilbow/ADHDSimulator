#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1014;
// Mono.Security.Protocol.Tls.Context
struct Context_t963;
// System.Security.Cryptography.RSA
struct RSA_t928;
// System.Byte[]
struct ByteU5BU5D_t616;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m5004 (TlsClientCertificateVerify_t1014 * __this, Context_t963 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m5005 (TlsClientCertificateVerify_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m5006 (TlsClientCertificateVerify_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m5007 (TlsClientCertificateVerify_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t928 * TlsClientCertificateVerify_getClientCertRSA_m5008 (TlsClientCertificateVerify_t1014 * __this, RSA_t928 * ___privKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t616* TlsClientCertificateVerify_getUnsignedBigInteger_m5009 (TlsClientCertificateVerify_t1014 * __this, ByteU5BU5D_t616* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
