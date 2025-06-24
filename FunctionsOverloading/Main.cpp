#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

const int ROWS = 3;
const int COLS = 4;

double minValueIn(double arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(int arr[][COLS], const int ROWS, const int COLS);
int minValueIn(int arr[][COLS], const int ROWS, const int COLS);

void FillRand(int arr[][COLS], const int ROWS, const int COLS);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

int Sum(double arr[], const int n);
int Sum(int arr[][COLS], const int ROWS, const int COLS);

double Avarage(double arr[], const int n);
double Avarage(int arr[][COLS], const int RPWS, const int COLS);

void Sort(double arr[], const int n);
void Sort(int arr[][COLS], const int ROWS, const int COLS);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[], const int n);

void main()
{
    setlocale(LC_ALL, "");
    const int D_SIZE = 8;
    double d_arr[D_SIZE];
    FillRand(d_arr, D_SIZE);
    Print(d_arr, D_SIZE);
    cout << endl;
    Sort(d_arr, D_SIZE);
    Print(d_arr, D_SIZE);
    cout << "Минимальное значение: " << minValueIn(d_arr, D_SIZE) << endl;
    cout << "Максимальное значение: " << maxValueIn(d_arr, D_SIZE) << endl;
    cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
    cout << "Среднее-арифметическое элементов массива: " << Avarage(d_arr, D_SIZE) << endl;
    cout << endl;

    int i_arr_2[ROWS][COLS];
    FillRand(i_arr_2, ROWS, COLS);
    Print(i_arr_2, ROWS, COLS);
    cout << endl;
    Sort(i_arr_2, ROWS, COLS);
    Print(i_arr_2, ROWS, COLS);
    cout << "Минимальное значение: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
    cout << "Максимальное значение: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
    cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
    cout << "Среднее-арифметическое элементов массива: " << Avarage(i_arr_2, ROWS, COLS) << endl;
}

double minValueIn(double arr[], const int n)
{
    double min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
double maxValueIn(double arr[], const int n)
{
    double max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}


int minValueIn(int arr[][COLS], const int ROWS, const int COLS)
{
    int min = INT_MAX;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int maxValueIn(int arr[][COLS], const int ROWS, const int COLS)
{
    int max = INT_MIN;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
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
    minRand *= 100;
    maxRand *= 100;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (maxRand - minRand) + minRand;
        arr[i] /= 100;
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
    for (int k = 0; k < ROWS * COLS; k++)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                int currentIndex = i * COLS + j;
                if (currentIndex < ROWS * COLS - 1)
                {
                    int nextRow = (currentIndex + 1) / COLS;
                    int nextCol = (currentIndex + 1) % COLS;
                    if (arr[nextRow][nextCol] < arr[i][j])
                    {
                        int buffer = arr[i][j];
                        arr[i][j] = arr[nextRow][nextCol];
                        arr[nextRow][nextCol] = buffer;
                    }
                }
            }
        }
    }
}


int Sum(double arr[], const int n)
{
    int sum = 0;
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

double Avarage(double arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
double Avarage(int arr[][COLS], const int RPWS, const int COLS)
{
    int sum = Sum(arr, ROWS, COLS);
    return (double)sum / (ROWS * COLS);
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

