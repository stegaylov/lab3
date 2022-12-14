#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x;

    cout << "Введіть будь-яке число: "; cin >> x;

    system("pause");
    system("cls");

    cout << "X = " << x << endl;

    cout << "|" << x << "| = " << abs(x);

}