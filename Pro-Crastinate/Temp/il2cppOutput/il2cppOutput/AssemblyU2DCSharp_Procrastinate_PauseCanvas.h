#pragma once
#include <stdint.h>
// UnityEngine.Canvas
struct Canvas_t242;
// UnityEngine.UI.Button
struct Button_t243;
// UnityEngine.Sprite
struct Sprite_t244;
// UnityEngine.Material
struct Material_t195;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t245;
// System.String
struct String_t;
// RMX.Singletons/ASingleton`1<Procrastinate.PauseCanvas>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_7.h"
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
// UnityEngine.UI.CanvasScaler/ScaleMode
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScaleMode.h"
// UnityEngine.UI.CanvasScaler/Unit
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_Unit.h"
// UnityEngine.UI.GraphicRaycaster/BlockingObjects
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Procrastinate.PauseCanvas
struct  PauseCanvas_t240  : public ASingleton_1_t241
{
	// UnityEngine.Canvas Procrastinate.PauseCanvas::canvas
	Canvas_t242 * ___canvas_10;
	// UnityEngine.UI.Button Procrastinate.PauseCanvas::infoButton
	Button_t243 * ___infoButton_11;
	// UnityEngine.RenderMode Procrastinate.PauseCanvas::renderMode
	int32_t ___renderMode_12;
	// System.Boolean Procrastinate.PauseCanvas::pixelPerfect
	bool ___pixelPerfect_13;
	// UnityEngine.UI.CanvasScaler/ScaleMode Procrastinate.PauseCanvas::uiScaleMode
	int32_t ___uiScaleMode_14;
	// UnityEngine.UI.CanvasScaler/Unit Procrastinate.PauseCanvas::physicalUnit
	int32_t ___physicalUnit_15;
	// System.Single Procrastinate.PauseCanvas::fallbackScreenDPI
	float ___fallbackScreenDPI_16;
	// System.Single Procrastinate.PauseCanvas::defaultSpriteDPI
	float ___defaultSpriteDPI_17;
	// System.Single Procrastinate.PauseCanvas::referencePixelsPerUnit
	float ___referencePixelsPerUnit_18;
	// System.Boolean Procrastinate.PauseCanvas::ignoreReversedGraphics
	bool ___ignoreReversedGraphics_19;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects Procrastinate.PauseCanvas::blockingObjects
	int32_t ___blockingObjects_20;
	// UnityEngine.Sprite Procrastinate.PauseCanvas::sourceImage
	Sprite_t244 * ___sourceImage_21;
	// UnityEngine.Color Procrastinate.PauseCanvas::color
	Color_t203  ___color_22;
	// UnityEngine.Material Procrastinate.PauseCanvas::material
	Material_t195 * ___material_23;
	// System.Boolean Procrastinate.PauseCanvas::preserveAspect
	bool ___preserveAspect_24;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> Procrastinate.PauseCanvas::triggers
	List_1_t245 * ___triggers_25;
	// System.Boolean Procrastinate.PauseCanvas::information
	bool ___information_26;
	// System.String Procrastinate.PauseCanvas::_wychd
	String_t* ____wychd_27;
};
