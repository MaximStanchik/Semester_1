#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

//Number_6
int main() {
	setlocale(LC_ALL, "Russian");
const int size = 50;
int countOfPair = 0, array[size], array2[size], k = 0;
srand((unsigned)time(NULL));
for (int i = 0; i < size; i++) {
	array[i] = (int)(((double)rand() / (double)RAND_MAX) * (50 - (-50)) + (-50));
	cout << array[i] << "  ";
}
for (int i = 0; i < size; i++) {
	if (array[i] == array[i + 1]) {
		countOfPair++;
		array2[k] = array[i];
		array2[k + 1] = array[i + 1];
		k++;
	}
}
cout << endl << "Пар: " << countOfPair << endl;
for (int i = 0; i < countOfPair; i++) {
	cout << " Пары: " << array2[i] << "  " << array2[i];
}
}