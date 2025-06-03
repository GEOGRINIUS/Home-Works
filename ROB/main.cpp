#include <iostream>
using namespace std;
using std::cin;
using std::cout;

//#define RHOMBUS-1
//#define RHOMBUS-2

void main()
{
    setlocale(LC_ALL, "");
    int n;
    cout << "����� ������ ����� (��������: 1): "; cin >> n;
    cout << endl;
#ifdef RHOMBUS-1
    //������� ����� �����
    for (int i = 0; i < n; i++) //�������� �� ������� ������� ����� �����.
    {
        for (int j = n; j > i; j--) //������� ������� ����� " / " ����� ������� ������.
        {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < 2 * i; j++) //������� ������� ����� " / " � " \ ".
        {
            cout << " ";
        }
        cout << "\\" << endl; //��������� �� ��������� ������.
    }
    //����� ����� �����
    for (int i = n - 1; i >= 0; i--) //�������� �� ������� ������ ����� �����.
    {
        for (int j = n; j > i; j--) //������� ������� ����� " \ " ����� ������� ������.
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < 2 * i; j++) //������� ������� ����� " \ " � " / ".
        {
            cout << " ";
        }
        cout << "/" << endl; //��������� �� ��������� ������.
    }
#endif // RHOMBUS-1

#ifdef RHOMBUS-2
    for (int i = 0; i < n * 2; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (i == j + n || i + n == j)cout << "\\";
            else if (i + n == n * 2 - 1 - j || i - n == n * 2 - 1 - j)cout << "/";
            else cout << " ";
        }
        cout << endl;
    }
#endif // RHOMBUS-2
}