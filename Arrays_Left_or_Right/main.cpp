#include <iostream>
using namespace std;
using std::cin; using std::cout; using std::endl;

//#define COLUMS_SHIFT
#define CROSS_CUTTING_SHIFTS
#define tab "\t"
#define delimiter "\n--------------------------------------------------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 3;
	const int COLS = 10;
	int arr[ROWS][COLS] =
	{
		{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9  },
		{ 10,11,12,13,14,15,16,17,18,19 },
		{ 20,21,22,23,24,25,26,27,28,29 },
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << delimiter;

#ifdef COLUMS_SHIFT
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			int buffer = arr[i][0];
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			arr[i][COLS - 1] = buffer;
		}
		//Вывод сдвигнутого массива:
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}
	}
#endif //COLUMS_SHIFT //Вправо;

#ifdef CROSS_CUTTING_SHIFTS
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			int buffer = arr[i][COLS - 1];
			for (int j = COLS - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = buffer;
		}
		//Вывод сдвигнутого массива:
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}
	}
#endif //CROSS_CUTTING_SHIFTS
}