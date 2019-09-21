#pragma once
#include "Case_Solve.h"
#include "While_Solve.h"
#include "For_Solve.h"

class Init
{
private:
	Menu While_S;
	Menu For_S;
	Menu Case_S;
public:

	Init()
	{
		Case_S.AddMenuItem("Задача - 5 з 20", Case5);
		Case_S.AddMenuItem("Задача- 10 з 20", Case10);
		Case_S.AddMenuItem("Задача- 15 з 20", Case15);
		Case_S.AddMenuItem("Задача- 17 з 20", Case17);
		Case_S.AddMenuItem("Задача- 18 з 20", Case18);
		For_S.AddMenuItem("Задача- 5 з 40", For5);
		For_S.AddMenuItem("Задача- 10 з 40", For10);
		For_S.AddMenuItem("Задача- 15 з 40", For15);
		For_S.AddMenuItem("Задача- 30 з 40", For30);
		For_S.AddMenuItem("Задача- 40 з 40", For40);
		While_S.AddMenuItem("Задача- 8 з 30", While8);
		While_S.AddMenuItem("Задача- 10 з 30", While10);
		While_S.AddMenuItem("Задача- 17 з 30", While17);
		While_S.AddMenuItem("Задача- 23 з 30", While23);
		While_S.AddMenuItem("Задача- 30 з 30", While30);
	}
	void Show_While();
	void Show_For();
	void Show_Case();
};