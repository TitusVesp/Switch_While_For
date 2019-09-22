#include "Menu.h"

HANDLE hConsole, hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void SetColor(int text, int background) // устанавливаем цвет
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int menu()
{
	int key = 1, code = 0;
	while (1)
	{
		system("cls");

		if (key == 0) key = 3;
		if (key == 4) key = 1;

		SetColor(15, 0);

		cout << "Оберiть роздiл: " << endl << endl;
		
		if (key == 1) { SetColor(9, 0); cout << "-> While" << endl; SetColor(15,0); }
		else  cout << "   While" << endl;

		if (key == 2) { SetColor(10, 0); cout << "-> Case" << endl; SetColor(15, 0); }
		else  cout << "   Case" << endl;

		if (key == 3) { SetColor(11, 0); cout << "-> For" << endl; SetColor(15, 0); }
		else  cout << "   For" << endl;

		{ SetColor(12, 0); cout << endl << "Вийти - 0! " << endl; SetColor(15, 0); }

		code = _getch();

		if (code == 48) return 0; 

		if (code == 80) key++;
		if (code == 72) key--;
		if (code == 13) { system("cls"); return key; }
	}
}