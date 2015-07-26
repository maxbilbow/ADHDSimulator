#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t988;
// System.IO.Stream
struct Stream_t987;
// System.Byte[]
struct ByteU5BU5D_t616;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t143;
// System.Threading.WaitHandle
struct WaitHandle_t1039;
// System.AsyncCallback
struct AsyncCallback_t382;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m4747 (ReceiveRecordAsyncResult_t988 * __this, AsyncCallback_t382 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t616* ___initialBuffer, Stream_t987 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t987 * ReceiveRecordAsyncResult_get_Record_m4748 (ReceiveRecordAsyncResult_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t616* ReceiveRecordAsyncResult_get_ResultingBuffer_m4749 (ReceiveRecordAsyncResult_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t616* ReceiveRecordAsyncResult_get_InitialBuffer_m4750 (ReceiveRecordAsyncResult_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m4751 (ReceiveRecordAsyncResult_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t143 * ReceiveRecordAsyncResult_get_AsyncException_m4752 (ReceiveRecordAsyncResult_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m4753 (ReceiveRecordAsyncResult_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1039 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m4754 (ReceiveRecordAsyncResult_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m4755 (ReceiveRecordAsyncResult_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4756 (ReceiveRecordAsyncResult_t988 * __this, Exception_t143 * ___ex, ByteU5BU5D_t616* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4757 (ReceiveRecordAsyncResult_t988 * __this, Exception_t143 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4758 (ReceiveRecordAsyncResult_t988 * __this, ByteU5BU5D_t616* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
