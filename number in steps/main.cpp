#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;
	int step;
	int result = 1;
	cout << "Введите число или цифру: "; cin >> number;
	cout << "В какую степень нужно сделать компьютеру?: "; cin >> step;
	cout << number << "^" << step << " = " << endl;
	for (int i = 0; i < step; i++) {
		if (i > 0) {
			cout << "*";
		}
		cout << number;
		result *= number;
	}
	cout << " = " << result << endl;
	cout << "Результат: " << result << endl;
	return;
}