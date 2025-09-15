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
	int a = 2;		   //ќбъ€вление и нициализаци€ переменной 'а';
	int* pa = &a;	   //ќбъ€вление и нициализаци€ указател€ 'pa';
	cout << a << endl; //¬ывод хначени€ переменной 'a' на экран;
	cout << &a << endl;//¬з€тие адреса переменной 'а' пр€мо при выводе;
	cout << pa << endl;//¬ывод на экран адреса переменной 'а', хран€щегос€ в указател€ 'pa'
	cout << *pa << endl;

	int* pb;			//ќбъ€вление указател€;
	int b = 3;			//ќбъ€вление переменной 'b
	pb = &b;
	cout << pb << endl;
	cout << *pb << endl;

	//int - 'int';
	//int* - ”казатель на 'int';
	//double - 'double';
	//double* - указатель на 'double';
	//char - 'char';
	//char* - ”казатель на 'char';

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