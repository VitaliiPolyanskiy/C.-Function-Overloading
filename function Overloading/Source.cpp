#include <iostream>
using namespace std;

int Max(int a, int b, int c);
int Max(int a, int b);
float Max(float a, float b);
float Max(float a, float b, float c);
double Max(double a, double b);
char Max(char a, char b);

void Print(int a, int b = 7, int c = 10);
void Print(int a);

/*
Перегруженные функции – это функции, которые имеют одинаковые имена, но отличаются сигнатурой.
Сигнатура – это тип, количество и порядок следования формальных параметров функции.
Компилятор определяет, какую именно функцию требуется вызвать по типу фактических параметров.
Это процесс называется разрешением перегрузки. 
Тип возвращаемого функцией значения в разрешении не участвует.
В процессе разрешения перегрузки компилятор выбирает функцию с наиболее подходящими параметрами.
*/

int main()
{
	cout << "Maximum: " << Max(7, 15) << endl;
	cout << "Maximum: " << Max(1, 60, 9) << endl;
	cout << "Maximum: " << Max(2.5, 0.6) << endl;
	cout << "Maximum: " << Max(1.3f, 6.1f) << endl;
	cout << "Maximum: " << Max('A', 'K') << endl;
	cout << "Maximum: " << Max(5.4f, 7.2f, 1.8f) << endl;
	short n = 10, m = 20;
	cout << "Maximum: " << Max(n, m) << endl;
	// Критерий разрешения перегрузки функций - однозначность вызова функции
	long long a = 10, b = 7;
	// cout << "\nMaximum: " << Max(a, b); // неоднозначность вызова
	Print(7, 8);
	Print(7, 10, 15);
	// Print(7); // неоднозначность вызова

	return 0;
}

int Max(int a, int b, int c)
{
	cout << "int-version with three arguments\n";
	if (a > b && a > c)
		return a;
	if (b > a && b > c)
		return b;
	if (c > b && c > a)
		return c;
}

int Max(int a, int b)
{
	cout << "int-version with two arguments\n";
	if (a > b)
		return a;
	if (b > a)
		return b;
}

float Max(float a, float b)
{
	cout << "float-version with two arguments\n";
	if (a > b)
		return a;
	if (b > a)
		return b;
}

float Max(float a, float b, float c)
{
	cout << "float-version with three arguments\n";
	if (a > b && a > c)
		return a;
	if (b > a && b > c)
		return b;
	if (c > b && c > a)
		return c;
}

double Max(double a, double b)
{
	cout << "double-version with two arguments\n";
	if (a > b)
		return a;
	if (b > a)
		return b;
}

char Max(char a, char b)
{
	cout << "char-version with two arguments\n";
	if (a > b)
		return a;
	if (b > a)
		return b;
}

void Print(int a, int b, int c)
{
	cout << a << endl << b << endl << c << endl;
}

void Print(int a)
{
	cout << a ;
}