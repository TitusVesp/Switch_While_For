#include "Main_Header.h"


void  For5()
{
	cout << "For5°.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,\n\
0.2, ..., 1 кг конфет." << endl;

	double price = 0;

	cout << "Ведiть цiну: " << endl;
	cin >> price;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Цена за " << i * 0.1 << " = " << fixed << setprecision(2) << price * i * 0.1 << endl;
	}
}


void  For10()
{
	cout << "For10.Дано целое число N(> 0).Найти сумму\n\
1 + 1 / 2 + 1 / 3 + ... + 1 / N\n\
(вещественное число)." << endl;

	int n = 0;
	double res = 0, temp = 0;

	cout << "Ведiть N: " << endl;
	cin >> n;
	if (n <= 0)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}

	for (double i = 1; i <= n; i++)
	{
		temp = (1 / i);
		res += temp;
	}

	cout << "Результат: " << fixed << setprecision(12) << res << endl;
}


void  For15()
{
	cout << "For15°.Дано вещественное число A и целое число N(> 0).Найти A в степени N :\n\
AN = A·A· ... ·A (числа A перемножаются N раз)." << endl;

	int n = 0;
	double a = 0, temp = 0;

	cout << "Ведiть N: " << endl;
	cin >> n;
	if (n <= 0)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}
	cout << "Ведiть A: " << endl;
	cin >> a;
	temp = a;
	for (int i = 1; i < n; i++)
	{
		a *= temp;
	}

	cout << "Результат: " << fixed << setprecision(8) << a << endl;
}


void  For30()
{
	cout << "For30.Дано целое число N(> 1) и две вещественные точки на числовой оси :\n\
A, B(A < B).Отрезок[A, B] разбит на N равных отрезков.Вывести H —\n\
длину каждого отрезка, а также значения функции F(X) = 1 – sin(X) в точ -\n\
ках, разбивающих отрезок[A, B] :\n\
F(A), F(A + H), F(A + 2·H), ..., F(B)." << endl;

	int n = 0;
	double a = 0, b = 0;

	cout << "Ведiть N: " << endl;
	cin >> n;
	if (n <= 1)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}

	cout << "Ведiть A: " << endl;
	cin >> a;
	cout << "Ведiть B: " << endl;
	cin >> b;

	if (a > b)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}

	cout << "Довжина: " << fixed << setprecision(5) << (b - a) / n << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "F" << i << " = " << 1 + sin(a + i * b) << endl;
	}

	cout << endl;
}

void  For40()
{
	cout << "For40.Даны целые числа A и B(A < B).Вывести все целые числа от A до B\n\
включительно; при этом число A должно выводиться 1 раз, число A + 1\n\
должно выводиться 2 раза и т.д." << endl;

	int a = 0, b = 0;

	cout << "Ведiть A: " << endl;
	cin >> a;
	cout << "Ведiть B: " << endl;
	cin >> b;

	if (a > b)
	{
		cout << "Некоректне значення!" << endl;
		return;
	}

	for (int i = 1; i <= b - a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "A" << i << " = " << a << endl;
		}
	}
}
