#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;


//Удалить пять первых нечетных элементов массива. Добавить в конец массива три новых нулевых элемента
//Variant 11


int main() {
	setlocale(LC_ALL, "Russian");
	const int asize = 100;
	int array[asize], array2[asize], k, l = 0, counter = 0;
	cout << "Введите размер массива: ";
	cin >> k;
	srand((unsigned)time(NULL));
	cout << "Изначальный массив: " << endl;
	for (int i = 0; i < k; i++) {
		array[i] = (int)(((double)rand() / (double)RAND_MAX) * (99 - 1) + 1);
		cout << array[i] << "  ";
	}
	for (int i = 0; i < k; i++) {
		if (counter < 5) {
			if (array[i] % 2 == 0) {
				array2[l] = array[i];
				counter++;
				l++;
			}
		}
		else {
			array2[l] = array[i];
			l++;
		}
	}
	for (int i = l; i < l + 3; i++) {
		array2[i] = 0;
	}
	cout << endl << "Конечный массив: " << endl;
	for (int i = 0; i < l + 3; i++) {
		cout << array2[i] << " ";
	}
	return 0;
	system("pause");
}
		