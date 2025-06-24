//Я сделал так как я понял, а именно во втором заданий надо сделать так чтобы генерировались только;
// число с плавающей запятой;

#include <iostream>
#include <iomanip> 
//Для использования setprecision, 
// который позволяет задавать точность вывода чисел с плавающей точкой.

using namespace std;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, double minRand = 0, double maxRand = 100, int precision = 2);


void Print(const int arr[], const int n);
void Print(const double arr[], const int n, int precision = 2);

void main()
{
    setlocale(LC_ALL, "");
    const int D_SIZE = 8;
    double d_arr[D_SIZE];

    FillRand(d_arr, D_SIZE);
    Print(d_arr, D_SIZE); 
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (maxRand - minRand + 1) + minRand;
    }
}
void FillRand(double arr[], const int n, double minRand, double maxRand, int precision)
{
    double scale = pow(10, precision); // Масштабирующий коэффициент для заданной точности
    minRand *= scale; // Масштабирование минимального значения
    maxRand *= scale; // Масштабирование максимального значения

    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % static_cast<int>(maxRand - minRand + 1) + minRand) / scale;
    }
}


void Print(const int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void Print(const double arr[], const int n, int precision)
{
    cout << setprecision(precision) << fixed; 
    //Установка точности вывода чисел с плавающей точкой
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}