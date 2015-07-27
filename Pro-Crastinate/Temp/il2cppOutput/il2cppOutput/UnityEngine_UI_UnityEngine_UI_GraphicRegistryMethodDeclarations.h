#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t369;
// UnityEngine.Canvas
struct Canvas_t242;
// UnityEngine.UI.Graphic
struct Graphic_t360;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t493;

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
extern "C" void GraphicRegistry__ctor_m1502 (GraphicRegistry_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
extern "C" void GraphicRegistry__cctor_m1503 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
extern "C" GraphicRegistry_t369 * GraphicRegistry_get_instance_m1504 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_RegisterGraphicForCanvas_m1505 (Object_t * __this /* static, unused */, Canvas_t242 * ___c, Graphic_t360 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_UnregisterGraphicForCanvas_m1506 (Object_t * __this /* static, unused */, Canvas_t242 * ___c, Graphic_t360 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
extern "C" Object_t* GraphicRegistry_GetGraphicsForCanvas_m1507 (Object_t * __this /* static, unused */, Canvas_t242 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
