#include<iostream>
using namespace std;

#define delimiter "\n----------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");
	// cout << "DataTypes" << endl;
	// cout << true << endl;
	// cout << false << endl;

	cout << "Переменная типа 'int' занимает " << sizeof(int) << "Bytes" << endl;
	cout << "unsigned int: " << 0 << " ... " << USHRT_MAX << endl;
	cout << endl;
	cout << "Переменная типа 'short' занимает " << sizeof(short) << "Bytes" << endl;
	cout << "unsigned short: " << 0 << " ... " << UINT_MAX << endl;
	cout << endl;
	cout << "Переменная типа 'long' занимает " << sizeof(long) << "Bytes" << endl;
	cout << "unsigned long: " << 0 << " ... " << ULONG_MAX << endl;
	cout << endl;
	cout << "Переменная типа 'long long' занимает " << sizeof(long long) << "Bytes" << endl;
	cout << "unsigned long long: " << 0 << " ... " << ULLONG_MAX << endl;
	cout << endl;
	cout << "Переменная типа 'char' занимает " << sizeof(char) << "Bytes" << endl;
	cout << "unsigned char: " << 0 << " ... " << UCHAR_MAX << endl;
	cout << delimiter << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << delimiter << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
	cout << delimiter << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << LONG_MIN << " ... " << LONG_MAX << endl;
	cout << delimiter << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << delimiter << endl;
	cout << "short: " << sizeof(short) << endl;
	cout << SHRT_MIN << " ... " << SHRT_MAX << endl;
	cout << delimiter << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << delimiter << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << CHAR_MIN << " ... " << CHAR_MAX << endl;

	SHRT_MIN;
	SHRT_MAX;
	USHRT_MAX;

	LONG_MIN;
	LONG_MAX;
	ULONG_MAX;

	INT_MIN;
	INT_MAX;
	UINT_MAX;

	LLONG_MIN;
	LLONG_MAX;
	ULLONG_MAX;
}