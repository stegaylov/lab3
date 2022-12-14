#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a = 0;

	cout << "Працює інформаційна система факультету прикладної математики:" << endl;
	cout << "1. Новина дня " << endl;
	cout << "2. Анекдот тижня " << endl;
	cout << "3. Автор !!! " << endl;
	cout << "Введіть відповійдний номер і натисніть ENTER." << endl;
	cin >> a;

	if (a == 1) {
		cout << "Новина дня" << endl;
		cout << "Київ оговтується після обстрілу" << endl;
		cout << "яка ситуація зі світлом, водою та теплом у столиці на ранок 25 листопада" << endl;
		cout << "25 листопада 2022 09 : 19" << endl;
	}

	if (a == 2) {
		cout << "Анекдот тижня" << endl;
		cout << "– Чим відрізняється програміст від політика?" << endl;
		cout << "– Програмісту платять гроші за програми, що працюють." << endl;
	}

	if (a == 3) {
		cout << "Автор !!!" << endl;
		cout << "Бердик Роман" << endl;
	}

     system("pause");
     system("cls");

}