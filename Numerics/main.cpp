#include <iostream>
#include <iomanip>
using namespace std;
using std::cin;
using std::cout;
void main()
{
    setlocale(LC_ALL, "");
    int numric;
    cout << "������� ���������� �����: ";
    cin >> numric;
    // ���� ������������ ������ ���������� ����� �� �� �� ����� ��������.
    if (numric < 0) 
    {
        cout << "����������, ������� ������������� �����." << endl;
    }
    // ���� ���� ����� ��� �������, �������� 0.
    if (numric == 0) 
    {
        cout << "0";
    }
    // ������� ������ ���������� �����
    int temp = numric;
    int numBits = 0;
    while (temp > 0) 
    {
        temp /= 2;
        numBits++;
    }
    // ������� ���� � ���������� ������� (� ���� ����� ������� �������� 1)
    for (int i = numBits - 1; i >= 0; --i) 
    {
        cout << ((numric >> i) & 1);
    }
    cout << endl;
}