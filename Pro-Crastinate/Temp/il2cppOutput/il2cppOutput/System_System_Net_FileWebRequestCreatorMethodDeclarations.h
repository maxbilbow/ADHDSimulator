#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1106;
// System.Net.WebRequest
struct WebRequest_t1068;
// System.Uri
struct Uri_t692;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m5301 (FileWebRequestCreator_t1106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1068 * FileWebRequestCreator_Create_m5302 (FileWebRequestCreator_t1106 * __this, Uri_t692 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
