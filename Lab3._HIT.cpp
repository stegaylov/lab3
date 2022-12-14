#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int R;
    int x0;
    int y0;
    float x;
    float y;

    cout << "Задайте координати цетра кола (x0, y0) та радіус R:" << endl;
    cout << "\nx0= ";
    cin >> x0;
    cout << "y0= ";
    cin >> y0;
    cout << "R= ";
    cin >> R;

    system("pause");
    system("cls");

    cout << "Введіть координати x, y для точки А:" << endl;
    cout << "\nx= ";
    cin >> x;
    cout << "y= ";
    cin >> y;

    system("pause");
    system("cls");

    if (x * x + y * y <= R*R) cout << "Точка (x,y) потрапляє в коло з центром в точці (x0, y0) радіусом 5" << endl;
    else cout << "Точка (x,y) [НЕ] потрапляє в коло з центром в точці (x0, y0) радіусом 5" << endl;

}