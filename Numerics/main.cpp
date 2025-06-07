#include <iostream>
#include <iomanip>
using namespace std;
using std::cin;
using std::cout;
void main()
{
    setlocale(LC_ALL, "");
    int numric;
    cout << "Введите десятичное число: ";
    cin >> numric;
    // Если пользователь вводит негативное число то он не будет работать.
    if (numric < 0) 
    {
        cout << "Пожалуйста, введите положительное число." << endl;
    }
    // если итог будет без остатка, принтуем 0.
    if (numric == 0) 
    {
        cout << "0";
    }
    // Сначала найдем количество битов
    int temp = numric;
    int numBits = 0;
    while (temp > 0) 
    {
        temp /= 2;
        numBits++;
    }
    // Выводим биты в правильном порядке (А если будет остаток принтуем 1)
    for (int i = numBits - 1; i >= 0; --i) 
    {
        cout << ((numric >> i) & 1);
    }
    cout << endl;
}