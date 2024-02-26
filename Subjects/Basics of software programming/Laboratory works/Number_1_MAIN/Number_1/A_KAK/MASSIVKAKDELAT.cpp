#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	const int N = 100;
	int i, sz, A[N];
	cout << "Введите размер массива";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++) {
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << endl;
	for (i = 0; i < sz; i++)
	{

		if (A[i] % 2 != 0) {
			sz = sz - 1;
			for (int j = i; j < sz; j++) {
				A[j] = A[j + 1];
			}
			i -= 1;
		}
	}
	sz += 3;
	for (int i = sz; i >= sz - 3; i--) {
		A[i] = 0;
	}
	for (i = 0; i < sz; i++) {
		cout << A[i] << " ";
	}
}