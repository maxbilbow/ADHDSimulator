#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1122;
// System.Net.WebRequest
struct WebRequest_t1080;
// System.Uri
struct Uri_t701;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m5334 (HttpRequestCreator_t1122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1080 * HttpRequestCreator_Create_m5335 (HttpRequestCreator_t1122 * __this, Uri_t701 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
