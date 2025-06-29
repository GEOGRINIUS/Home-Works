#include <iostream>
#include "Prototypes.h"
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    const int n = 5;
    int arr[n];
    int min, max;
    FillRand(arr, n, 100, 1000);
    Print(arr, n);
    Sort(arr, n);
    Print(arr, n);
    cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
    cout << "Среднее-арифметическое элементов массива: " << Average(arr, n) << endl;
    minMaxValueIn(arr, n, min, max);
    cout << "Минимальное значение: " << min << endl;
    cout << "Максимальное значение: " << max << endl;
    cout << endl;

    const int D_SIZE = 8;
    double d_arr[D_SIZE];
    FillRand(d_arr, D_SIZE);
    Print(d_arr, D_SIZE);
    Sort(d_arr, D_SIZE);
    Print(d_arr, D_SIZE);
    double d_min, d_max;
    minMaxValueIn(d_arr, D_SIZE, d_min, d_max);
    cout << "Минимальное значение: " << d_min << endl;
    cout << "Максимальное значение: " << d_max << endl;
    cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
    cout << "Среднее-арифметическое элементов массива: " << Average(d_arr, D_SIZE) << endl;
    cout << endl;

    int i_arr_2[ROWS][COLS];
    FillRand(i_arr_2, ROWS, COLS);
    Print(i_arr_2, ROWS, COLS);
    cout << endl;
    Sort(i_arr_2, ROWS, COLS);
    Print(i_arr_2, ROWS, COLS);
    int i_min, i_max;
    minMaxValueIn(i_arr_2, ROWS, COLS, i_min, i_max);
    cout << "Минимальное значение: " << i_min << endl;
    cout << "Максимальное значение: " << i_max << endl;
    cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
    cout << "Среднее-арифметическое элементов массива: " << Average(i_arr_2, ROWS, COLS) << endl;
}

void minMaxValueIn(int arr[], const int n, int& min, int& max)
{
    min = max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
}
void minMaxValueIn(double arr[], const int n, double& min, double& max)
{
    min = max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
}
void minMaxValueIn(int arr[][COLS], const int ROWS, const int COLS, int& min, int& max)
{
    min = INT_MAX;
    max = INT_MIN;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] < min) min = arr[i][j];
            if (arr[i][j] > max) max = arr[i][j];
        }
    }
}
void minMaxValueIn(double arr[][COLS], const int ROWS, const int COLS, double& min, double& max)
{
    min = arr[0][0];
    max = arr[0][0];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] < min) min = arr[i][j];
            if (arr[i][j] > max) max = arr[i][j];
        }
    }
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (maxRand - minRand + 1) + minRand;
    }
}
void FillRand(int arr[][COLS], const int ROWS, const int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % (maxRand - minRand + 1) + minRand) / 100.0;
    }
}
void FillRand(double arr[][COLS], const int ROWS, const int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 100 / 100.0;
        }
    }
}

void Sort(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
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
}
void Sort(double arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                double buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
}
void Sort(int arr[][COLS], const int ROWS, const int COLS)
{
    int* temp = new int[ROWS * COLS];
    int index = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            temp[index++] = arr[i][j];
        }
    }

    for (int i = 0; i < ROWS * COLS; i++)
    {
        for (int j = i + 1; j < ROWS * COLS; j++)
        {
            if (temp[j] < temp[i])
            {
                int buffer = temp[i];
                temp[i] = temp[j];
                temp[j] = buffer;
            }
        }
    }

    index = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = temp[index++];
        }
    }

    delete[] temp;
}
void Sort(double arr[][COLS], const int ROWS, const int COLS)
{
    double* temp = new double[ROWS * COLS];
    int index = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            temp[index++] = arr[i][j];
        }
    }

    for (int i = 0; i < ROWS * COLS; i++)
    {
        for (int j = i + 1; j < ROWS * COLS; j++)
        {
            if (temp[j] < temp[i])
            {
                double buffer = temp[i];
                temp[i] = temp[j];
                temp[j] = buffer;
            }
        }
    }

    index = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = temp[index++];
        }
    }

    delete[] temp;
}

int Sum(int arr[], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
double Sum(double arr[], const int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int Sum(int arr[][COLS], const int ROWS, const int COLS)
{
    int sum = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}
double Sum(double arr[][COLS], const int ROWS, const int COLS)
{
    double sum = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

double Average(int arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
double Average(double arr[], const int n)
{
    return Sum(arr, n) / n;
}
double Average(int arr[][COLS], const int ROWS, const int COLS)
{
    return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Average(double arr[][COLS], const int ROWS, const int COLS)
{
    return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

void Print(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void Print(double arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
