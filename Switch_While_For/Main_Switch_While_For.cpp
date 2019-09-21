// Switch_While_For.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Main_Header.h"

int main()
{
	setlocale(LC_ALL, "ukr");
	while (1)
	{
		int key = menu();
		Init Zadacha;

		switch (key)
		{
		case 1:
			Zadacha.Show_While();
			break;
		case 2:
			Zadacha.Show_Case();
			break;
		case 3:
			Zadacha.Show_For();
			break;
		case 0: return 0;
		}
	}
}
