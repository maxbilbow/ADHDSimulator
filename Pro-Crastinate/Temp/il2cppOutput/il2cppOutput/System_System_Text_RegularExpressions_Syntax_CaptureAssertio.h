#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1223;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1217;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1224;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t1222  : public Assertion_t1221
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t1223 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t1217 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t1224 * ___literal_3;
};
