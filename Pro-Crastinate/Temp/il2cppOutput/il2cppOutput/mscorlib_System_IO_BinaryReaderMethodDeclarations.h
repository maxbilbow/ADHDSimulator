#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryReader
struct BinaryReader_t1404;
// System.IO.Stream
struct Stream_t987;
// System.Text.Encoding
struct Encoding_t17;
// System.Byte[]
struct ByteU5BU5D_t616;
// System.Char[]
struct CharU5BU5D_t163;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C" void BinaryReader__ctor_m8000 (BinaryReader_t1404 * __this, Stream_t987 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryReader__ctor_m8001 (BinaryReader_t1404 * __this, Stream_t987 * ___input, Encoding_t17 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
extern "C" void BinaryReader_System_IDisposable_Dispose_m8002 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
extern "C" void BinaryReader_Dispose_m8003 (BinaryReader_t1404 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
extern "C" void BinaryReader_FillBuffer_m8004 (BinaryReader_t1404 * __this, int32_t ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
extern "C" int32_t BinaryReader_Read_m8005 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m8006 (BinaryReader_t1404 * __this, ByteU5BU5D_t616* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m8007 (BinaryReader_t1404 * __this, CharU5BU5D_t163* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C" int32_t BinaryReader_ReadCharBytes_m8008 (BinaryReader_t1404 * __this, CharU5BU5D_t163* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
extern "C" int32_t BinaryReader_Read7BitEncodedInt_m8009 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
extern "C" bool BinaryReader_ReadBoolean_m8010 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
extern "C" uint8_t BinaryReader_ReadByte_m8011 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
extern "C" uint16_t BinaryReader_ReadChar_m8012 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
extern "C" Decimal_t836  BinaryReader_ReadDecimal_m8013 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
extern "C" double BinaryReader_ReadDouble_m8014 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
extern "C" int16_t BinaryReader_ReadInt16_m8015 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
extern "C" int32_t BinaryReader_ReadInt32_m8016 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
extern "C" int64_t BinaryReader_ReadInt64_m8017 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
extern "C" int8_t BinaryReader_ReadSByte_m8018 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
extern "C" String_t* BinaryReader_ReadString_m8019 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
extern "C" float BinaryReader_ReadSingle_m8020 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
extern "C" uint16_t BinaryReader_ReadUInt16_m8021 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
extern "C" uint32_t BinaryReader_ReadUInt32_m8022 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
extern "C" uint64_t BinaryReader_ReadUInt64_m8023 (BinaryReader_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
extern "C" void BinaryReader_CheckBuffer_m8024 (BinaryReader_t1404 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
