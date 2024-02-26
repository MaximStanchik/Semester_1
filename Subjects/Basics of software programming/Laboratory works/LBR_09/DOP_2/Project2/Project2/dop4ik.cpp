#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
//Number_2

int main() {
	setlocale(LC_ALL, "Russian");
	const int size = 10;
	int sum = 0, max = 0, array[size];
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++) {
		array[i] = (int)(((double)rand() / (double)RAND_MAX) * (100 - (-100)) + (-100));
		cout << array[i] << "  " << endl;
	}
	for (int i = 0; i < size; i++) {
		if (array[i] > 0 && array[i + 1]) {
			sum += array[i];
		}
		if (sum > max) max = sum;
		else if (array[i] < 0) sum = 0;
	}
	cout << endl << max;
	return 0;
	system("pause");
}