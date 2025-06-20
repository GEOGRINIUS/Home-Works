#include <iostream>
using namespace std;

int Fac(int number, int factorial);

void main()
{
	setlocale(LC_ALL, "");
	int number;
	cout << "Введи число или цифру для факториала: "; cin >> number;
	int factorial = 1;
	cout << Fac(number, factorial) << endl;
}

int Fac(int number, int factorial)
{
	cout << number << "!" << " " << "=" << " ";
	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
		if (i < number)
		{
			cout << i << "*";
		}
		else
		{
			cout << i;
		}
	}
	cout << " " << "=" << " " << factorial;
	return factorial;
}