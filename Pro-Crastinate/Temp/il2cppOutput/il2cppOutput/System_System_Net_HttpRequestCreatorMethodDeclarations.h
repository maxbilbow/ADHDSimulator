#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1110;
// System.Net.WebRequest
struct WebRequest_t1068;
// System.Uri
struct Uri_t692;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m5312 (HttpRequestCreator_t1110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1068 * HttpRequestCreator_Create_m5313 (HttpRequestCreator_t1110 * __this, Uri_t692 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
