#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m3443 (WebCamDevice_t655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m3444 (WebCamDevice_t655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WebCamDevice_t655_marshal(const WebCamDevice_t655& unmarshaled, WebCamDevice_t655_marshaled& marshaled);
extern "C" void WebCamDevice_t655_marshal_back(const WebCamDevice_t655_marshaled& marshaled, WebCamDevice_t655& unmarshaled);
extern "C" void WebCamDevice_t655_marshal_cleanup(WebCamDevice_t655_marshaled& marshaled);
