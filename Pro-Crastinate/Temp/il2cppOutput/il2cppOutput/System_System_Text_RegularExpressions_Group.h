#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Group
struct Group_t1077;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1163;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct  Group_t1077  : public Capture_t1161
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t1163 * ___captures_5;
};
struct Group_t1077_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t1077 * ___Fail_3;
};
