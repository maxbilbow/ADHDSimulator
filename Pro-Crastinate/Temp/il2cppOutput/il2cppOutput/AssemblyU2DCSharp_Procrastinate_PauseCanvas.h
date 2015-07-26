#pragma once
#include <stdint.h>
// UnityEngine.Canvas
struct Canvas_t237;
// UnityEngine.UI.Button
struct Button_t238;
// UnityEngine.Sprite
struct Sprite_t239;
// UnityEngine.Material
struct Material_t190;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t240;
// System.String
struct String_t;
// RMX.Singletons/ASingleton`1<Procrastinate.PauseCanvas>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_6.h"
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
struct  PauseCanvas_t241  : public ASingleton_1_t242
{
	// UnityEngine.Canvas Procrastinate.PauseCanvas::canvas
	Canvas_t237 * ___canvas_9;
	// UnityEngine.UI.Button Procrastinate.PauseCanvas::infoButton
	Button_t238 * ___infoButton_10;
	// UnityEngine.RenderMode Procrastinate.PauseCanvas::renderMode
	int32_t ___renderMode_11;
	// System.Boolean Procrastinate.PauseCanvas::pixelPerfect
	bool ___pixelPerfect_12;
	// UnityEngine.UI.CanvasScaler/ScaleMode Procrastinate.PauseCanvas::uiScaleMode
	int32_t ___uiScaleMode_13;
	// UnityEngine.UI.CanvasScaler/Unit Procrastinate.PauseCanvas::physicalUnit
	int32_t ___physicalUnit_14;
	// System.Single Procrastinate.PauseCanvas::fallbackScreenDPI
	float ___fallbackScreenDPI_15;
	// System.Single Procrastinate.PauseCanvas::defaultSpriteDPI
	float ___defaultSpriteDPI_16;
	// System.Single Procrastinate.PauseCanvas::referencePixelsPerUnit
	float ___referencePixelsPerUnit_17;
	// System.Boolean Procrastinate.PauseCanvas::ignoreReversedGraphics
	bool ___ignoreReversedGraphics_18;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects Procrastinate.PauseCanvas::blockingObjects
	int32_t ___blockingObjects_19;
	// UnityEngine.Sprite Procrastinate.PauseCanvas::sourceImage
	Sprite_t239 * ___sourceImage_20;
	// UnityEngine.Color Procrastinate.PauseCanvas::color
	Color_t200  ___color_21;
	// UnityEngine.Material Procrastinate.PauseCanvas::material
	Material_t190 * ___material_22;
	// System.Boolean Procrastinate.PauseCanvas::preserveAspect
	bool ___preserveAspect_23;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> Procrastinate.PauseCanvas::triggers
	List_1_t240 * ___triggers_24;
	// System.Boolean Procrastinate.PauseCanvas::information
	bool ___information_25;
	// System.String Procrastinate.PauseCanvas::_wychd
	String_t* ____wychd_26;
};
