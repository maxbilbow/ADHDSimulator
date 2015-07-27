#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Stream
struct Stream_t1000;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.Object
struct Object_t;

// System.Void System.IO.Stream::.ctor()
extern "C" void Stream__ctor_m5208 (Stream_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.cctor()
extern "C" void Stream__cctor_m8201 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose()
extern "C" void Stream_Dispose_m8202 (Stream_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" void Stream_Dispose_m5211 (Stream_t1000 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Close()
extern "C" void Stream_Close_m5210 (Stream_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::ReadByte()
extern "C" int32_t Stream_ReadByte_m8203 (Stream_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern "C" void Stream_WriteByte_m8204 (Stream_t1000 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginRead_m8205 (Stream_t1000 * __this, ByteU5BU5D_t625* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t391 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginWrite_m8206 (Stream_t1000 * __this, ByteU5BU5D_t625* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t391 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern "C" int32_t Stream_EndRead_m8207 (Stream_t1000 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern "C" void Stream_EndWrite_m8208 (Stream_t1000 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
