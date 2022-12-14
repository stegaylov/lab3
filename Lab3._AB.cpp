#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a;
	int b;

	cout << "Введіть два цілих числа:" << endl;
	cout << "\nA= ";
	cin >> a;
	cout << "B= ";
	cin >> b;

	system("pause");
	system("cls");

	cout << "\nA= " << a << " B= " << b << endl;

	system("pause");
	system("cls");

	cout << "Тепер поміняймо ці числа так, щоб було завжди A<=B: " << endl;

	if (a >= b) swap(a, b);

	cout << "\nA= " << a << " B= " << b << endl;

}
