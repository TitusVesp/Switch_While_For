#include "Main_Header.h"


void  For5()
{
	cout << "For5�.���� ������������ ����� � ���� 1 �� ������.������� ��������� 0.1,\n\
0.2, ..., 1 �� ������." << endl;

	double price = 0;

	cout << "���i�� �i��: " << endl;
	cin >> price;

	for (int i = 1; i <= 10; i++)
	{
		cout << "���� �� " << i * 0.1 << " = " << fixed << setprecision(2) << price * i * 0.1 << endl;
	}
}


void  For10()
{
	cout << "For10.���� ����� ����� N(> 0).����� �����\n\
1 + 1 / 2 + 1 / 3 + ... + 1 / N\n\
(������������ �����)." << endl;

	int n = 0;
	double res = 0, temp = 0;

	cout << "���i�� N: " << endl;
	cin >> n;
	if (n <= 0)
	{
		cout << "���������� ��������!" << endl;
		return;
	}

	for (double i = 1; i <= n; i++)
	{
		temp = (1 / i);
		res += temp;
	}

	cout << "���������: " << fixed << setprecision(12) << res << endl;
}


void  For15()
{
	cout << "For15�.���� ������������ ����� A � ����� ����� N(> 0).����� A � ������� N :\n\
AN = A�A� ... �A (����� A ������������� N ���)." << endl;

	int n = 0;
	double a = 0, temp = 0;

	cout << "���i�� N: " << endl;
	cin >> n;
	if (n <= 0)
	{
		cout << "���������� ��������!" << endl;
		return;
	}
	cout << "���i�� A: " << endl;
	cin >> a;
	temp = a;
	for (int i = 1; i < n; i++)
	{
		a *= temp;
	}

	cout << "���������: " << fixed << setprecision(8) << a << endl;
}


void  For30()
{
	cout << "For30.���� ����� ����� N(> 1) � ��� ������������ ����� �� �������� ��� :\n\
A, B(A < B).�������[A, B] ������ �� N ������ ��������.������� H �\n\
����� ������� �������, � ����� �������� ������� F(X) = 1 � sin(X) � ��� -\n\
���, ����������� �������[A, B] :\n\
F(A), F(A + H), F(A + 2�H), ..., F(B)." << endl;

	int n = 0;
	double a = 0, b = 0;

	cout << "���i�� N: " << endl;
	cin >> n;
	if (n <= 1)
	{
		cout << "���������� ��������!" << endl;
		return;
	}

	cout << "���i�� A: " << endl;
	cin >> a;
	cout << "���i�� B: " << endl;
	cin >> b;

	if (a > b)
	{
		cout << "���������� ��������!" << endl;
		return;
	}

	cout << "�������: " << fixed << setprecision(5) << (b - a) / n << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "F" << i << " = " << 1 + sin(a + i * b) << endl;
	}

	cout << endl;
}

void  For40()
{
	cout << "For40.���� ����� ����� A � B(A < B).������� ��� ����� ����� �� A �� B\n\
������������; ��� ���� ����� A ������ ���������� 1 ���, ����� A + 1\n\
������ ���������� 2 ���� � �.�." << endl;

	int a = 0, b = 0;

	cout << "���i�� A: " << endl;
	cin >> a;
	cout << "���i�� B: " << endl;
	cin >> b;

	if (a > b)
	{
		cout << "���������� ��������!" << endl;
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
