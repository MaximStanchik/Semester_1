#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	srand(time(NULL));

	int sizeK, sizeN, bSizeOfArray, Zlength = 0;

	cout << "Введите размер массива Х: ";
	cin >> sizeK;
	cout << "Введите размер массива Y: ";
	cin >> sizeN;

	int* X = new int[sizeK];
	int* Y = new int[sizeN];

	if (sizeK < sizeN) bSizeOfArray = sizeN;
	else bSizeOfArray = sizeK;

	for (int i = 0, randomNumber1, randomNumber2, l = 0; i < bSizeOfArray; i++)
	{

		randomNumber1 = -10 + rand() % 30;
		randomNumber2 = -10 + rand() % 30;
		if (i < sizeK) *(X + i) = randomNumber1;
		if (i < sizeN) *(Y + i) = randomNumber2;

		if (i < sizeK) cout << *(X + i) << "\t";
		else cout << "\t";
		if (i < sizeN) cout << *(Y + i) << endl;
		else cout << endl;

		if (*(X + i) == *(Y + i))
		{

			Zlength++;

		}

	}

	int* Z = new int[Zlength];
	cout << "Массив Z: ";

	for (int i = 0, l = 0; i < bSizeOfArray; i++)
	{
		if (*(X + i) != NULL || *(Y + i) != NULL)
		{

			if (*(X + i) == *(Y + i))
			{

				*(Z + l) = *(X + i);
				cout << *(Z + l) << " ";
				l++;

			}

		}
	}
}