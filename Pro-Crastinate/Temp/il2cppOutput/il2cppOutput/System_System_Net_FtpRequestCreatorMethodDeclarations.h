#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1119;
// System.Net.WebRequest
struct WebRequest_t1080;
// System.Uri
struct Uri_t701;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m5328 (FtpRequestCreator_t1119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1080 * FtpRequestCreator_Create_m5329 (FtpRequestCreator_t1119 * __this, Uri_t701 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
