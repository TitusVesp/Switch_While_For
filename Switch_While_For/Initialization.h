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
		Case_S.AddMenuItem("������ - 5 � 20", Case5);
		Case_S.AddMenuItem("������- 10 � 20", Case10);
		Case_S.AddMenuItem("������- 15 � 20", Case15);
		Case_S.AddMenuItem("������- 17 � 20", Case17);
		Case_S.AddMenuItem("������- 18 � 20", Case18);
		For_S.AddMenuItem("������- 5 � 40", For5);
		For_S.AddMenuItem("������- 10 � 40", For10);
		For_S.AddMenuItem("������- 15 � 40", For15);
		For_S.AddMenuItem("������- 30 � 40", For30);
		For_S.AddMenuItem("������- 40 � 40", For40);
		While_S.AddMenuItem("������- 8 � 30", While8);
		While_S.AddMenuItem("������- 10 � 30", While10);
		While_S.AddMenuItem("������- 17 � 30", While17);
		While_S.AddMenuItem("������- 23 � 30", While23);
		While_S.AddMenuItem("������- 30 � 30", While30);
	}
	void Show_While();
	void Show_For();
	void Show_Case();
};