#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "");
    int high;
    cout << "������� ������: ";
    cin >> high;
    for (int i = 0; i < high; ++i) //���� �� i �������� �� ������� �� 0 �� high.
    {
        for (int j = 0; j < high - i - 1; ++j) //������ ���������� ���� ������� ������ ������� ����� * (������: * *).
        {
            cout << " "; //���� ������� ����������� �����.
        }
        for (int k = 0; k < i + 1; ++k) //������ ���������� ���� ������� * ������� ���������� �������, ������� � high.
        {
            cout << "*"; //���� ������� ����������� �����.
        }
        cout << endl; //������� �� ����� ������
    }
}