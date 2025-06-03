#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int t1 = 0, t2 = 1, nextTerm = 0, n;
	cout << "¬веди желаемое число: "; cin >> n;
	cout << t1 << "," << t2 << ",";
	nextTerm = t1 + t2;
	while (nextTerm <= n)
	{
		cout << nextTerm << ",";
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
}