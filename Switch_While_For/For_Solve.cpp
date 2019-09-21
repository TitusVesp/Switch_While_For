#include "Main_Header.h"

//For5°.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
//0.2, ..., 1 кг конфет.
void  For5()
{
	double price = 0;

	cout << "Ведiть цiну: " << endl;
	cin >> price;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Цена за " << i * 0.1 << " = " << fixed << setprecision(2) << price * i * 0.1 << endl;
	}
}

//For10.Дано целое число N(> 0).Найти сумму
//1 + 1 / 2 + 1 / 3 + ... + 1 / N
//(вещественное число).
void  For10()
{
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

//For15°.Дано вещественное число A и целое число N(> 0).Найти A в степени N :
//AN
//= A·A· ... ·A
//(числа A перемножаются N раз).
void  For15()
{
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

//For30.Дано целое число N(> 1) и две вещественные точки на числовой оси :
//A, B(A < B).Отрезок[A, B] разбит на N равных отрезков.Вывести H —
//
//	длину каждого отрезка, а также значения функции F(X) = 1 – sin(X) в точ -
//	ках, разбивающих отрезок[A, B] :
//
//	F(A), F(A + H), F(A + 2·H), ..., F(B).
void  For30()
{
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

//For40.Даны целые числа A и B(A < B).Вывести все целые числа от A до B
//	включительно; при этом число A должно выводиться 1 раз, число A + 1
//	должно выводиться 2 раза и т.д.
void  For40()
{
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
