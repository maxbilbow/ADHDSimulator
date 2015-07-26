#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1107;
// System.Net.WebRequest
struct WebRequest_t1068;
// System.Uri
struct Uri_t692;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m5305 (FtpRequestCreator_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1068 * FtpRequestCreator_Create_m5306 (FtpRequestCreator_t1107 * __this, Uri_t692 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
