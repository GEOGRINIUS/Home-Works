#include <iostream>
#include <conio.h>  // Для функции _getch()
#include <cctype>   // Для функции tolower()
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    cout << "Нажмите любые клавиши (регистронезависимо). Нажмите '`', чтобы выйти: " << endl;
    while (true)
    {
        char ch = _getch();  // Считываем нажатие клавиши
        char lowerCh = tolower(static_cast<unsigned char>(ch));  // Преобразуем символ в нижний регистр
        cout << "Вы нажали: " << lowerCh << endl;  // Выводим результат

        if (lowerCh == 'w')
        {
            cout << "Пользователь пошёл вперёд" << endl;
        }
        if (lowerCh == 'W')
        {
            cout << "Пользователь пошёл вперёд" << endl;
        }
        else if (lowerCh == 's')
        {
            cout << "Пользователь пошёл назад" << endl;
        }
        else if (lowerCh == 'S')
        {
            cout << "Пользователь пошёл назад" << endl;
        }
        else if (lowerCh == 'a')
        {
            cout << "Пользователь пошёл налево" << endl;
        }
        else if (lowerCh == 'A')
        {
            cout << "Пользователь пошёл налево" << endl;
        }
        else if (lowerCh == 'd')
        {
            cout << "Пользователь пошёл направо" << endl;
        }
        else if (lowerCh == 'D')
        {
            cout << "Пользователь пошёл направо" << endl;
        }

        else if (lowerCh == ' ')
        {
            cout << "Пользователь прыгает" << endl;
        }
        else if (lowerCh == '\r')
        {
            cout << "Пользователь стреляет" << endl;
        }

        else if (lowerCh == 'k')
        {
            cout << " (стрелка влево)Пользователь пошёл налево" << endl;
        }
        else if (lowerCh == 'm')
        {
            cout << "(Стрелка вправо)Пользователь пошёл направо" << endl;
        }
        else if (lowerCh == 'p')
        {
            cout << "(Стрелка вниз)Пользователь пошёл назад" << endl;
        }
        else if (lowerCh == 'h')
        {
            cout << "(стрелка вверх)Пользователь пошёл вперёд" << endl;
        }

        else if (lowerCh == 'z')
        {
            cout << "Пользователь одел бронежелет" << endl;
        }
        else if (lowerCh == 'x')
        {
            cout << "Пользователь использовал аптечку." << endl;
        }
        else if (lowerCh == 'c')
        {
            cout << "Пользователь кинул гранату." << endl;
        }

        else if (lowerCh == '`')
        {
            break;
        }
    }
    cout << "Программа завершена." << endl;
}