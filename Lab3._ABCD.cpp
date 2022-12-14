#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a;
	int b;
	int c;
	int d;

	cout << "Введіть чотири цілих числа:" << endl;
	cout << "\nA= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	cout << "C= ";
	cin >> c;
	cout << "D= ";
	cin >> d;

	system("pause");
	system("cls");

	cout << "\nA= " << a << " B= " << b << " C= " << c << " D=" << d << endl;

	system("pause");
	system("cls");
	
	cout << "Тепер поміняймо ці числа так, щоб було завжди A<=B<=C<=D: " << endl;

	if (a >= b) swap(a, b);
	if (b >= c) swap(b, c);
	if (a >= b) swap(a, b);
	if (b >= c) swap(b, c);
	if (c >= d) swap(c, d);
	if (b >= c) swap(b, c);
	if (a >= b) swap(a, b);

	cout << "\nA= " << a << " B= " << b << " C= " << c << " D=" << d << endl;

}
