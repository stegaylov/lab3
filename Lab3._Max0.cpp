#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float a;
	float b;

	cout << "Введіть два цілих числа:" << endl;
	cout << "\nA= ";
	cin >> a;
	cout << "B= ";
	cin >> b;

	system("pause");
	system("cls");

	cout << "\nA= " << a << " B= " << b << endl;

	cout <<"Max= " << max(a, b) << endl;


}