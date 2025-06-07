#include<iostream>
#include <algorithm> //��� sort
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int minRand, maxRand;
	cout << "������� ����������� ��������� �����: "; cin >> minRand;
	cout << "������� ������������ ��������� �����: "; cin >> maxRand;
	srand(time(0)); //��������������� ��������� ����� (sort ��� ��� ������ srand, ��� ��� � ��������� �����.)
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	sort(arr, arr + SIZE);  //sort �������� ���������� ����� �� ��������� � ��������
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}