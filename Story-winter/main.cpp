#include<iostream>;
using namespace std;

#define offset "\t\t\t\t\t" // ��������� #define,
//define - ���������� (definition - �����������)
//��������� define ������� ���������������� (������)
//offset - ��� ��� �������, ���������� ������������
// "\t\t\t\t\t" ���������� ��� �������, 
// ��� � ������ ������������ � ����������.
// ��� ������ ��������� define ����������� ��������, 
// ��������: #define PI 3.14 cout << PI
// ����: ������� 3.14  
// �� � ���� �������� ���� ��������.
// #define Elochka ���������� ������ �������. 
// ����� ������� ������������ ������ � ����������� �������� ����������
// #if defind Elochka 
//� ����� �� �������� ������� #endif
#define Elochka

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined Elochka 
	//���� ���������� Elochka, �� ������������� ��� ����� ����� �����������
	//�� ��������� #endif
	cout << offset << "� ���� �������� ������\n";
	cout << offset << "� ���� ��� �����\n";
	cout << offset << "����� � ����� ��������\n";
	cout << offset << "������ ����\n";
	cout << "\n\n\n";
	cout << offset << "������ �� ���� �������\n";
	cout << offset << "\"���, ������, ��� - ���!\"\n";
	cout << offset << "����� ������� ��������\n";
	cout << offset << "������, �� ��������!\n";
	cout << "\n\n\n";
	cout << offset << "�������� ����� ���������\n";
	cout << offset << "��� ������� ������.\n";
	cout << offset << "����� ����, �������� ����\n";
	cout << offset << "������ ��������.\n";
	cout << "\n\n\n";
	cout << offset << "��! ���� �� ���� �������\n";
	cout << offset << "��� ������� �������\n";
	cout << offset << "������� ����������\n";
	cout << offset << "���������, �����\n";
	cout << "\n\n\n";
	cout << offset << "����� ������� ��������\n";
	cout << offset << "� � ������� ��������\n";
	cout << offset << "������ �� ���� ������\n";
	cout << offset << "��� ����� �������.\n";
	cout << "\n\n\n";
	cout << offset << "������ ���, ��������\n";
	cout << offset << "�� �������� � ��� ������\n";
	cout << offset << "� �����, ����� �������\n";
	cout << offset << "�������� ��������\n";
#endif
}