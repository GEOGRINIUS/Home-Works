#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = { 3, 5, 8 };
	int minRand, maxRand;
	cout << "������� ����������� ��������� �����: "; cin >> minRand;
	cout << "������� ������������ ��������� �����: "; cin >> maxRand;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	//����� ������� �� �����:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}