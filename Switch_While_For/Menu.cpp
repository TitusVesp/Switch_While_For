#include "Menu.h"

int menu()
{
	int key = 1, code = 0;
	while (1)
	{
		system("cls");

		if (key == 0) key = 3;
		if (key == 4) key = 1;

		cout << "����i�� ����i�: " << endl << endl;
		

		if (key == 1) cout << "-> While" << endl;
		else  cout << "   While" << endl;

		if (key == 2) cout << "-> Case" << endl;
		else  cout << "   Case" << endl;

		if (key == 3) cout << "-> For" << endl;
		else  cout << "   For" << endl;

		cout << endl << "����� - 0! " << endl;

		code = _getch();

		if (code == 48) return 0;
		if (code == 80) key++;
		if (code == 72) key--;
		if (code == 13) { system("cls"); return key; }
	}
}