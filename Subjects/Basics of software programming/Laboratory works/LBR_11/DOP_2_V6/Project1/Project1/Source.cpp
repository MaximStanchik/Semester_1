#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Russian");
	srand(time(NULL));

	int sizeC, nearByQ = 0;

	cout << "¬ведите размер массива C: ";
	cin >> sizeC;

	int* C = new int[sizeC];

	for (int i = 0, randomNumber; i < sizeC; i++)
	{

		randomNumber = -10 + rand() % 30;

		if (randomNumber == 0) randomNumber = 1;

		*(C + i) = randomNumber;


	}

	sort(C, C + sizeC);

	for (int i = 0; i < sizeC; i++)
	{

		cout << *(C + i) << " ";

	}
}