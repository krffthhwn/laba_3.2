// Lab_03_2.cpp
// < Іванів Олександр Андрійович >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 0.9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, a, b, c, F1{}, F2;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
// спосіб 1: розгалуження в скороченій формі
	if (a < 0 && x != 0)
		F1 = (a * pow(x, 2) + pow(b, 2) * x);
	if (a > 0 && x == 0)
		F1 = (x -(a/x-c));
	if (!(a < 0 && x != 0)&&!(a > 0 && x == 0))
		F1 = (1 + x/c);

	cout << endl;
	cout << "1) F = " << F1 << endl;
	// спосіб 2: розгалуження в повній формі
	if (a < 0 && x != 0)
		F2 = (a * pow(x, 2) + pow(b, 2) * x);
	else
		if (a > 0 && x == 0)
			F2 = (x - (a / x - c));
		else
			F2 = (1 + x / c);

	cout << "2) F = " << F2 << endl;

	cin.get();
	return 0;

}