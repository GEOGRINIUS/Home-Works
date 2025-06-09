#include <Windows.h>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int k = 0; k < number_of_shifts; k++)
	{
		//1) Сохраняем нулевой элемент массива
		int buffer = arr[n - 1];
		//2) Сдвигаем массив:
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		//3) Записываем нулевой элемент в конец массива:
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}