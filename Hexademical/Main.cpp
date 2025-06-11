#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16 < 10 ? decimal % 16 + 48 : decimal % 16 + 55;
		/*	hex[i++] = decimal % 16;
			hex[i] += hex[i] < 10 ? 48 : 55;*/
	}
	for (--i; i >= 0; i--)cout << hex[i];
	// for (--i; i >= 0; i--)cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	cout << endl;
}