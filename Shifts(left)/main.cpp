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
	for (int i = 0; i < number_of_shifts; i++)
	{
		//1) Сохраняем нулевой элемент массива
		int buffer = arr[0];
		//2) Сдвигаем массив:
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		//3) Записываем нулевой элемент в конец массива:
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}