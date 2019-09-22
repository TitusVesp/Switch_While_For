#include "Main_Header.h"


void  While8()
{
	cout << "While8.Дано целое число N(> 0).Найти наибольшее целое число K, квадрат\n\
которого не превосходит N : K2 ≤ N.Функцию извлечения квадратного кор -\n\
ня не использовать." << endl;

	int n = 0, k = 1;

	cout << "Ведiть N: " << endl;
	cin >> n;

	if (n <= 0)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}

	while (k * k <= n)
	{
		k++;
	}

	cout << "Результат: " << --k << endl;
}


void  While10()
{
	cout << "While10.Дано целое число N(> 1).Найти наибольшее целое число K, при ко -\n\
тором выполняется неравенство 3K < N." << endl;

	int n = 0, k = 1, temp = 1;

	cout << "Ведiть N: " << endl;
	cin >> n;

	if (n <= 1)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}

	while (temp <= n)
	{
		int i = 0;
		while (i < k)
		{
			temp *= 3;
			i++;
		}
		k++;
	}

	cout << "Результат: " << --k << endl;
}


void  While17()
{
	cout << "While17.Дано целое число N(> 0).Используя операции деления нацело и взя -\n\
тия остатка от деления, вывести все его цифры, начиная с самой правой\n\
(разряда единиц)." << endl;
	int n = 0, k = 1;

	cout << "Ведiть N: " << endl;
	cin >> n;

	if (n <= 0)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}

	cout << "Результат: " << endl;
	while (n % 10 != 0)
	{
		int temp = n % 10;
		n /= 10;
		cout << temp;
	}
	cout << endl;
}


void  While23()
{
	cout << "while23°.даны целые положительные числа a и b.найти их наибольший об -\n\
щий делитель(нод), используя алгоритм евклида :\n\
нод(a, b) = нод(b, a mod b), если b ≠ 0; нод(a, 0) = a." << endl;

	int a = 0, b = 0;
	
	cout << "Ведiть A: " << endl;
	cin >> a;
	cout << "Ведiть B: " << endl;
	cin >> b;

	if (a <= 0 || b <= 0)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}

	while (b % a != 0)
	{
		int temp = a;
		a = b;
		b = temp % a;
	}

	cout << "Результат: " << a << endl;
}


void  While30()
{
	cout << "While30.Даны положительные числа A, B, C.На прямоугольнике размера A × B\n\
размещено максимально возможное количество квадратов со стороной C\n\
(без наложений).Найти количество квадратов, размещенных на прямо -\n\
угольнике.Операции умножения и деления не использовать." << endl;
	int a = 0, b = 0, c = 0, count = 0;

	cout << "Ведiть A: " << endl;
	cin >> a;
	cout << "Ведiть B: " << endl;
	cin >> b;
	cout << "Ведiть C: " << endl;
	cin >> c;

	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}

	bool flag = false;
	
	while (b >= c)
	{
		if (a >= c) break;

		int temp = a;
		while (temp >= c)
		{
			count++;
			temp -= c;
			flag = true;
		}

		if (flag) b -= c;

		flag = false;
	}

	cout << "Результат(к-сть квадратiв): " << count << endl;
}
