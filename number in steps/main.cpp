#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;
	int step;
	int result = 1;
	cout << "������� ����� ��� �����: "; cin >> number;
	cout << "� ����� ������� ����� ������� ����������?: "; cin >> step;
	cout << number << "^" << step << " = " << endl;
	for (int i = 0; i < step; i++) {
		if (i > 0) {
			cout << "*";
		}
		cout << number;
		result *= number;
	}
	cout << " = " << result << endl;
	cout << "���������: " << result << endl;
	return;
}