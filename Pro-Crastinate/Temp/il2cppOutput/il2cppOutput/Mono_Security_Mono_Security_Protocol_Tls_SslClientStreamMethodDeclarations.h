#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t980;
// System.IO.Stream
struct Stream_t1000;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1019;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1018;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1012;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t996;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t997;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1013;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1010;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t944;
// System.Int32[]
struct Int32U5BU5D_t1037;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1038;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
extern "C" void SslClientStream__ctor_m4839 (SslClientStream_t980 * __this, Stream_t1000 * ___stream, String_t* ___targetHost, bool ___ownsStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void SslClientStream__ctor_m4840 (SslClientStream_t980 * __this, Stream_t1000 * ___stream, String_t* ___targetHost, X509Certificate_t1019 * ___clientCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m4841 (SslClientStream_t980 * __this, Stream_t1000 * ___stream, String_t* ___targetHost, X509CertificateCollection_t1018 * ___clientCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void SslClientStream__ctor_m4842 (SslClientStream_t980 * __this, Stream_t1000 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m4843 (SslClientStream_t980 * __this, Stream_t1000 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t1018 * ___clientCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_add_ServerCertValidation_m4844 (SslClientStream_t980 * __this, CertificateValidationCallback_t1012 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_remove_ServerCertValidation_m4845 (SslClientStream_t980 * __this, CertificateValidationCallback_t1012 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_add_ClientCertSelection_m4846 (SslClientStream_t980 * __this, CertificateSelectionCallback_t996 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_remove_ClientCertSelection_m4847 (SslClientStream_t980 * __this, CertificateSelectionCallback_t996 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_add_PrivateKeySelection_m4848 (SslClientStream_t980 * __this, PrivateKeySelectionCallback_t997 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_remove_PrivateKeySelection_m4849 (SslClientStream_t980 * __this, PrivateKeySelectionCallback_t997 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_add_ServerCertValidation2_m4850 (SslClientStream_t980 * __this, CertificateValidationCallback2_t1013 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_remove_ServerCertValidation2_m4851 (SslClientStream_t980 * __this, CertificateValidationCallback2_t1013 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
extern "C" Stream_t1000 * SslClientStream_get_InputBuffer_m4852 (SslClientStream_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
extern "C" X509CertificateCollection_t1018 * SslClientStream_get_ClientCertificates_m4853 (SslClientStream_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
extern "C" X509Certificate_t1019 * SslClientStream_get_SelectedClientCertificate_m4854 (SslClientStream_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
extern "C" CertificateValidationCallback_t1012 * SslClientStream_get_ServerCertValidationDelegate_m4855 (SslClientStream_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_set_ServerCertValidationDelegate_m4856 (SslClientStream_t980 * __this, CertificateValidationCallback_t1012 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
extern "C" CertificateSelectionCallback_t996 * SslClientStream_get_ClientCertSelectionDelegate_m4857 (SslClientStream_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_set_ClientCertSelectionDelegate_m4858 (SslClientStream_t980 * __this, CertificateSelectionCallback_t996 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
extern "C" PrivateKeySelectionCallback_t997 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m4859 (SslClientStream_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_set_PrivateKeyCertSelectionDelegate_m4860 (SslClientStream_t980 * __this, PrivateKeySelectionCallback_t997 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
extern "C" void SslClientStream_Finalize_m4861 (SslClientStream_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
extern "C" void SslClientStream_Dispose_m4862 (SslClientStream_t980 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C" Object_t * SslClientStream_OnBeginNegotiateHandshake_m4863 (SslClientStream_t980 * __this, AsyncCallback_t391 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
extern "C" void SslClientStream_SafeReceiveRecord_m4864 (SslClientStream_t980 * __this, Stream_t1000 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C" void SslClientStream_OnNegotiateHandshakeCallback_m4865 (SslClientStream_t980 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1019 * SslClientStream_OnLocalCertificateSelection_m4866 (SslClientStream_t980 * __this, X509CertificateCollection_t1018 * ___clientCertificates, X509Certificate_t1019 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1018 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
extern "C" bool SslClientStream_get_HaveRemoteValidation2Callback_m4867 (SslClientStream_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1010 * SslClientStream_OnRemoteCertificateValidation2_m4868 (SslClientStream_t980 * __this, X509CertificateCollection_t944 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_OnRemoteCertificateValidation_m4869 (SslClientStream_t980 * __this, X509Certificate_t1019 * ___certificate, Int32U5BU5D_t1037* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_RaiseServerCertificateValidation_m4870 (SslClientStream_t980 * __this, X509Certificate_t1019 * ___certificate, Int32U5BU5D_t1037* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1010 * SslClientStream_RaiseServerCertificateValidation2_m4871 (SslClientStream_t980 * __this, X509CertificateCollection_t944 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1019 * SslClientStream_RaiseClientCertificateSelection_m4872 (SslClientStream_t980 * __this, X509CertificateCollection_t1018 * ___clientCertificates, X509Certificate_t1019 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1018 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1038 * SslClientStream_OnLocalPrivateKeySelection_m4873 (SslClientStream_t980 * __this, X509Certificate_t1019 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1038 * SslClientStream_RaisePrivateKeySelection_m4874 (SslClientStream_t980 * __this, X509Certificate_t1019 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
