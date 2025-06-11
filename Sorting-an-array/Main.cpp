#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    const int n = 10;
    int arr[n];
    bool duplicatesFound = false;
    for (int i = 0; i < n; i++) // ������ ��������� ����� � �������, � ��������� ���������� �����.
    {
        arr[i] = rand() % 30;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                if (!duplicatesFound)
                {
                    cout << "������������� �����: " << endl;
                    duplicatesFound = true;
                }
                cout << arr[i] << endl;
            }
        }
    }
    for (int i = 0; i < n; i++) //��������� �� �������� � ��������
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
    cout << "��������������� ������: " << endl; //������� ��� �������� ������.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}