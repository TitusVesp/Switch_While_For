#include "Main_Header.h"

//Case5.Арифметические действия над числами пронумерованы следующим
//образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.
//	Дан номер действия N(целое число в диапазоне 1–4) и вещественные чис -
//	ла A и B(В не равно 0).Выполнить над числами указанное действие и вы -
//	вести результат.
void  Case5()
{
	int key = 0, a = 0, b = 0;

	cout << "Ведiть A: " << endl;
	cin >> a;
	cout << "Ведiть B, що не дорiвнює 0: " << endl;
	cin >> b;
	if (b == 0) { cout << "B = 0 - не вiрне введення!" << endl; return; }
	cout << "Ведiть 1 для '+', 2 для '-', 3 для '*', 4 для '/': " << endl;
	cin >> key;
	switch (key)
	{
	case 1:
		cout << "A + B = " << a + b << endl;
		break;
	case 2:
		cout << "A - B = " << a - b << endl;
		break;
	case 3:
		cout << "A * B = " << a * b << endl;
		break;
	case 4:
		cout << "A / B = " << a / b << endl;
		break;
	default:
		cout << "Невiрно введене значення!" << endl;
		break;
	}
}

//Case10.Робот может перемещаться в четырех направлениях(«С» — север,
//	«З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые ко -
//	манды: 0 — продолжать движение, 1 — поворот налево, –1 — поворот на -
//	право.Дан символ C — исходное направление робота и целое число N —
//	посланная ему команда.Вывести направление робота после выполнения
//	полученной команды.
void  Case10()
{
	int key = 0, n = 0;
	char a;
	cout << "Ведiть C(N - Пiвнiч, E - Пiвдень, W - Захiд, S - Схiд): " << endl;
	cin >> a;
	if (a != 78 && a != 69 && a != 87 && a != 83 && a != 110 && a != 101 && a != 119 && a != 115)
	{
		cout << "Невiрно введене значення!" << endl;
		return;
	}
	cout << "Ведiть N(1 або -1 або 0): " << endl;
	cin >> n;
	if (n != 1 && n != 0 && n != -1)
	{
		cout << "Невiрно введене значення!" << endl;
		return;
	}

	switch (n)
	{
	case 0:
		cout << a;
		break;
	case 1:
		switch (a)
		{
		case 78:
			cout << "W" << endl;
			break;
		case 110:
			cout << "W" << endl;
			break;
		case 69:
			cout << "S" << endl;
			break;
		case 101:
			cout << "S" << endl;
			break;
		case 87:
			cout << "E" << endl;
			break;
		case 119:
			cout << "E" << endl;
			break;
		case 83:
			cout << "N" << endl;
			break;
		case 115:
			cout << "N" << endl;
			break;
		}
		break;
	case -1:
		switch (a)
		{
		case 78:
			cout << "S" << endl;
			break;
		case 110:
			cout << "S" << endl;
			break;
		case 69:
			cout << "W" << endl;
			break;
		case 101:
			cout << "W" << endl;
			break;
		case 87:
			cout << "N" << endl;
			break;
		case 119:
			cout << "N" << endl;
			break;
		case 83:
			cout << "E" << endl;
			break;
		case 115:
			cout << "E" << endl;
			break;
		}
		break;
	}
}

//Case15.Мастям игральных карт присвоены порядковые номера : 1 — пики,
//2 — трефы, 3 — бубны, 4 — червы.Достоинству карт, старших десятки,
//присвоены номера : 11 — валет, 12 — дама, 13 — король, 14 — туз.Даны
//два целых числа : N — достоинство(6 ≤ N ≤ 14) и M — масть карты
//(1 ≤ M ≤ 4).Вывести название соответствующей карты вида «шестерка бу -
//бен», «дама червей», «туз треф» и т.п.
void  Case15()
{
	int a = 0, b = 0;

	cout << "Ведiть Масть: " << endl;
	cin >> a;
	if (a > 4 || a < 1) { cout << "Hе вiрне введення!" << endl; return; }
	cout << "Ведiть Карту: " << endl;
	cin >> b;
	if (b > 14 || b < 6) { cout << "Hе вiрне введення!" << endl; return; }
	b -= 5;
	switch (b)
	{
	case 1:
		cout << "Шiсть ";
		break;
	case 2:
		cout << "Сiм ";
		break;
	case 3:
		cout << "Вiсiм ";
		break;
	case 4:
		cout << "Дев'ять ";
		break;
	case 5:
		cout << "Десять ";
		break;
	case 6:
		cout << "Валет ";
		break;
	case 7:
		cout << "Дама ";
		break;
	case 8:
		cout << "Король ";
		break;
	case 9:
		cout << "Туз ";
		break;
	}

	switch (a)
	{
	case 1:
		cout << "пiкi " << endl;
		break;
	case 2:
		cout << "треф " << endl;
		break;
	case 3:
		cout << "бубни " << endl;
		break;
	case 4:
		cout << "червi " << endl;
		break;
	}

}

//Case17.Дано целое число в диапазоне 10–40, определяющее количество учеб -
//ных заданий по некоторой теме.Вывести строку - описание указанного ко -
//личества заданий, обеспечив правильное согласование числа со словами
//«учебное задание», например: 18 — «восемнадцать учебных заданий»
//23 — «двадцать три учебных задания», 31 — «тридцать одно учебное за -
//дание».
void  Case17()
{
	int a = 0;

	cout << "Ведiть к-сть завдань: " << endl;
	cin >> a;
	if (a > 40 || a < 10)
	{
		cout << "Hе вiрне введення!" << endl;
		return;
	}
	switch (a - 10 == 0)
	{
	default:
		cout << "Десять "; 
		return;
	}
	switch (a / 10)
	{
	case 2: cout << "Двадцять "; break;
	case 3: cout << "Тридцять "; break;
	case 4: cout << "Сорок "; break;
	}
	switch (a % 10)
	{
	case 1: cout << "один"; break;
	case 2: cout << "два"; break;
	case 3: cout << "три"; break;
	case 4: cout << "чотири"; break;
	case 5: cout << "пя'ть"; break;
	case 6: cout << "шiсть"; break;
	case 7: cout << "сiм"; break;
	case 8: cout << "вiсiм"; break;
	case 9: cout << "дев'ять"; break;
	}
	if (a / 10 == 1)
	{
		cout << "надцять ";
	}

	cout << " навчальних завдань." << endl;

}

//Case18.Дано целое число в диапазоне 100–999.Вывести строку - описание
//данного числа, например: 256 — «двести пятьдесят шесть», 814 — «во -
//семьсот четырнадцать».
void  Case18()
{
	int a = 0;

	cout << "Ведiть число: " << endl;
	cin >> a;
	if (a > 999 || a < 100)
	{
		cout << "Hе вiрне введення!" << endl;
		return;
	}
	switch (a / 100)
	{
	case 1: cout << "Сто "; break;
	case 2: cout << "Двiстi "; break;
	case 3: cout << "Триста "; break;
	case 4: cout << "Чотириста "; break;
	case 5: cout << "Пя'тсот "; break;
	case 6: cout << "Шiстсот "; break;
	case 7: cout << "Сiмсот "; break;
	case 8: cout << "Вiсiмсот "; break;
	case 9: cout << "Дев'ятсот "; break;
	}
	switch ((a / 10) % 10)
	{
	case 2: cout << "двадцять "; break;
	case 3: cout << "тридцять "; break;
	case 4: cout << "сорок "; break;
	case 5: cout << "пя'тдесят "; break;
	case 6: cout << "шiстдесят "; break;
	case 7: cout << "сiмдесят "; break;
	case 8: cout << "вiсiмдесят "; break;
	case 9: cout << "дев'яносто "; break;
	}
	switch ((a % 100) % 10)
	{
	case 1: cout << "один"; break;
	case 2: cout << "два"; break;
	case 3: cout << "три"; break;
	case 4: cout << "чотири"; break;
	case 5: cout << "пя'ть"; break;
	case 6: cout << "шiсть"; break;
	case 7: cout << "сiм"; break;
	case 8: cout << "вiсiм"; break;
	case 9: cout << "дев'ять"; break;
	}
	
	cout << endl;
}