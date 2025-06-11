#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    const int n = 10;
    int arr[n];
    bool duplicatesFound = false;
    for (int i = 0; i < n; i++) // Создаём генерацию чисел в массиве, и фильтруем повторение чисел.
    {
        arr[i] = rand() % 30;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                if (!duplicatesFound)
                {
                    cout << "Повторяющиеся числа: " << endl;
                    duplicatesFound = true;
                }
                cout << arr[i] << endl;
            }
        }
    }
    for (int i = 0; i < n; i++) //Сортеруем от меньшего к большему
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
    cout << "Отсортированный массив: " << endl; //Выводим сам изменёный массив.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}