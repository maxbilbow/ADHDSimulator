#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t647;
struct WebCamDevice_t647_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m3420 (WebCamDevice_t647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m3421 (WebCamDevice_t647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t647_marshal(const WebCamDevice_t647& unmarshaled, WebCamDevice_t647_marshaled& marshaled);
void WebCamDevice_t647_marshal_back(const WebCamDevice_t647_marshaled& marshaled, WebCamDevice_t647& unmarshaled);
void WebCamDevice_t647_marshal_cleanup(WebCamDevice_t647_marshaled& marshaled);
