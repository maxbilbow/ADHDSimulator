#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1026;
// Mono.Security.Protocol.Tls.Context
struct Context_t976;
// System.Security.Cryptography.RSA
struct RSA_t940;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m5029 (TlsClientCertificateVerify_t1026 * __this, Context_t976 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m5030 (TlsClientCertificateVerify_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m5031 (TlsClientCertificateVerify_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m5032 (TlsClientCertificateVerify_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t940 * TlsClientCertificateVerify_getClientCertRSA_m5033 (TlsClientCertificateVerify_t1026 * __this, RSA_t940 * ___privKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t625* TlsClientCertificateVerify_getUnsignedBigInteger_m5034 (TlsClientCertificateVerify_t1026 * __this, ByteU5BU5D_t625* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
