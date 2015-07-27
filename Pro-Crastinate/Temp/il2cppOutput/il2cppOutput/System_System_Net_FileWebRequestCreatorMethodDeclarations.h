#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1118;
// System.Net.WebRequest
struct WebRequest_t1080;
// System.Uri
struct Uri_t701;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m5326 (FileWebRequestCreator_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1080 * FileWebRequestCreator_Create_m5327 (FileWebRequestCreator_t1118 * __this, Uri_t701 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
