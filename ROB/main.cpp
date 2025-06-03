#include <iostream>
using namespace std;
using std::cin;
using std::cout;

//#define RHOMBUS-1
//#define RHOMBUS-2

void main()
{
    setlocale(LC_ALL, "");
    int n;
    cout << "Введи размер ромба (Например: 1): "; cin >> n;
    cout << endl;
#ifdef RHOMBUS-1
    //верхняя часть ромба
    for (int i = 0; i < n; i++) //Проходит по строкам верхней части ромба.
    {
        for (int j = n; j > i; j--) //выводит пробелы перед " / " чтобы создать отступ.
        {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < 2 * i; j++) //выводит пробелы между " / " и " \ ".
        {
            cout << " ";
        }
        cout << "\\" << endl; //переносит на следующую строку.
    }
    //нижня часть ромба
    for (int i = n - 1; i >= 0; i--) //Проходит по строкам нижний части ромба.
    {
        for (int j = n; j > i; j--) //выводит пробелы перед " \ " чтобы создать отступ.
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < 2 * i; j++) //выводит пробелы между " \ " и " / ".
        {
            cout << " ";
        }
        cout << "/" << endl; //переносит на следующую строку.
    }
#endif // RHOMBUS-1

#ifdef RHOMBUS-2
    for (int i = 0; i < n * 2; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (i == j + n || i + n == j)cout << "\\";
            else if (i + n == n * 2 - 1 - j || i - n == n * 2 - 1 - j)cout << "/";
            else cout << " ";
        }
        cout << endl;
    }
#endif // RHOMBUS-2
}