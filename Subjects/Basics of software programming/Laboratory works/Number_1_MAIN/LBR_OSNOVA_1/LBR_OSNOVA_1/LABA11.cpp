#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	const int N = 100;
	int i, sz, A[N], rmn = 0, rmx = 99;
	cout << "Введите размер массива";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
	}
}
