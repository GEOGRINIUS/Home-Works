#include<iostream>;
using namespace std;

#define offset "\t\t\t\t\t" // Дерактива #define,
//define - опредилить (definition - определение)
//Директива define создает МАКРООПРЕДЕЛЕНИЕ (МАКРОС)
//offset - это имя макроса, заменитель табуляторами
// "\t\t\t\t\t" табуляторы для макросы, 
// как и другие отрабатывает в компиляций.
// при помощи дерективы define создавались констаты, 
// например: #define PI 3.14 cout << PI
// Итог: покажет 3.14  
// Не у всех макросов есть значение.
// #define Elochka компиляция пройдёт успешно. 
// Такие макросы используются вместе с дерективами условной компиляций
// #if defind Elochka 
//В конце до фигурной скобкий #endif
#define Elochka

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined Elochka 
	//ЕСЛИ ОПРЕДЕЛЕНО Elochka, то нидеследуюший код будет виден компилятору
	//до директивы #endif
	cout << offset << "В лесу родилась ёлочка\n";
	cout << offset << "В лесу она росла\n";
	cout << offset << "Зимой и летом стройная\n";
	cout << offset << "Зелёная была\n";
	cout << "\n\n\n";
	cout << offset << "Метель ей пела песенку\n";
	cout << offset << "\"Спи, ёлочка, бай - бай!\"\n";
	cout << offset << "Мороз снежком укутывал\n";
	cout << offset << "Смотри, не замерзай!\n";
	cout << "\n\n\n";
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под ёлочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << "\n\n\n";
	cout << offset << "Чу! Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит\n";
	cout << "\n\n\n";
	cout << offset << "Везет лошадка дровенки\n";
	cout << offset << "А в дровнях старичок\n";
	cout << offset << "Срубил он нашу ёлочку\n";
	cout << offset << "Под самый корешок.\n";
	cout << "\n\n\n";
	cout << offset << "Теперь она, нарядная\n";
	cout << offset << "На праздник к нам пришла\n";
	cout << offset << "И много, много радости\n";
	cout << offset << "Детишкам принесла\n";
#endif
}