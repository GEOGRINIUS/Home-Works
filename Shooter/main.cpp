#include <iostream>
#include <conio.h>  // ��� ������� _getch()
#include <cctype>   // ��� ������� tolower()
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    cout << "������� ����� ������� (������������������). ������� '`', ����� �����: " << endl;
    while (true)
    {
        char ch = _getch();  // ��������� ������� �������
        char lowerCh = tolower(static_cast<unsigned char>(ch));  // ����������� ������ � ������ �������
        cout << "�� ������: " << lowerCh << endl;  // ������� ���������

        if (lowerCh == 'w')
        {
            cout << "������������ ����� �����" << endl;
        }
        if (lowerCh == 'W')
        {
            cout << "������������ ����� �����" << endl;
        }
        else if (lowerCh == 's')
        {
            cout << "������������ ����� �����" << endl;
        }
        else if (lowerCh == 'S')
        {
            cout << "������������ ����� �����" << endl;
        }
        else if (lowerCh == 'a')
        {
            cout << "������������ ����� ������" << endl;
        }
        else if (lowerCh == 'A')
        {
            cout << "������������ ����� ������" << endl;
        }
        else if (lowerCh == 'd')
        {
            cout << "������������ ����� �������" << endl;
        }
        else if (lowerCh == 'D')
        {
            cout << "������������ ����� �������" << endl;
        }

        else if (lowerCh == ' ')
        {
            cout << "������������ �������" << endl;
        }
        else if (lowerCh == '\r')
        {
            cout << "������������ ��������" << endl;
        }

        else if (lowerCh == 'k')
        {
            cout << " (������� �����)������������ ����� ������" << endl;
        }
        else if (lowerCh == 'm')
        {
            cout << "(������� ������)������������ ����� �������" << endl;
        }
        else if (lowerCh == 'p')
        {
            cout << "(������� ����)������������ ����� �����" << endl;
        }
        else if (lowerCh == 'h')
        {
            cout << "(������� �����)������������ ����� �����" << endl;
        }

        else if (lowerCh == 'z')
        {
            cout << "������������ ���� ����������" << endl;
        }
        else if (lowerCh == 'x')
        {
            cout << "������������ ����������� �������." << endl;
        }
        else if (lowerCh == 'c')
        {
            cout << "������������ ����� �������." << endl;
        }

        else if (lowerCh == '`')
        {
            break;
        }
    }
    cout << "��������� ���������." << endl;
}