#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

// #define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS

	//cout << "Hello Pointer" << endl;
	int a = 2;		   //���������� � ������������ ���������� '�';
	int* pa = &a;	   //���������� � ������������ ��������� 'pa';
	cout << a << endl; //����� �������� ���������� 'a' �� �����;
	cout << &a << endl;//������ ������ ���������� '�' ����� ��� ������;
	cout << pa << endl;//����� �� ����� ������ ���������� '�', ����������� � ��������� 'pa'
	cout << *pa << endl;

	int* pb;			//���������� ���������;
	int b = 3;			//���������� ���������� 'b
	pb = &b;
	cout << pb << endl;
	cout << *pb << endl;

	//int - 'int';
	//int* - ��������� �� 'int';
	//double - 'double';
	//double* - ��������� �� 'double';
	//char - 'char';
	//char* - ��������� �� 'char';

#endif // POINTERS_BASICS

	const int n = 5;
	short arr[n] = { 3, 5, 8, 13, 21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << tab;
	}
	cout << endl;
}