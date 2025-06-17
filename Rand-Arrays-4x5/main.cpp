#include <iostream>
#include <Windows.h>

#define tab "\t"

using namespace std;
void main()
{
    setlocale(LC_ALL, "");
    const int ROWS = 4;
    const int COLS = 5;
    int arr[ROWS][COLS] =
    {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15},
    };
    for (int i = 0; i < ROWS; i++) // Заполнение массива случайными числами
    {
        for (int j = 0; j < COLS; j++) arr[i][j] = rand() % 15;
    }
    bool duplicatesFound = false;
    for (int i = 0; i < ROWS; i++) // Поиск повторяющихся чисел
    {
        for (int j = 0; j < COLS; j++)
        {
            for (int k = i; k < ROWS; k++)
            {
                for (int l = (k == i) ? j + 1 : 0; l < COLS; l++)
                {
                    if (arr[i][j] == arr[k][l])
                    {
                        // Вывод повторяющихся чисел
                        if (!duplicatesFound) cout << "Повторяющиеся числа: " << endl; 
                        duplicatesFound = true; cout << arr[i][j] << endl;
                    }
                }
            }
        }
    }
    //Сортировка массива:
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            for (int k = i; k < ROWS; k++)
            {
                for (int l = k == i ? j + 1 : 0; l < COLS; l++)
                {
                    if (arr[i][j] > arr[k][l])
                    {
                        int buffer = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = buffer;
                    }
                }
            }
        }
    }
    //Вывод сортировоного массива:
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << tab;
        }
        cout << endl;
    }
    //Вывод минимального и максимального значения.
    int min = arr[0][0]; int max = arr[0][0];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    cout << "Минимальное значение в массиве: " << min << endl; 
    cout << "Максимальное значение в массиве: " << max << endl;
}