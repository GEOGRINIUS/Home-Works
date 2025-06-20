#include <iostream>
using namespace std;

int Step(int number, int step, int result);

void main()
{
	setlocale(LC_ALL, "");
	int number, step;
	int result = 1;
	cout << "Введите число или цифру: "; cin >> number;
	cout << "В какую степень нужно сделать компьютеру?: "; cin >> step;
	cout << number << "^" << step << endl;
	cout << " = " << Step(number, step, result) << endl;
}

int Step(int number, int step, int result)
{
	for (int i = 0; i < step; i++)
	{
		if (i > 0)
		{
			cout << "*";
		}
		cout << number;
		result *= number;
	}
	return result;
}