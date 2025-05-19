#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	srand(time(NULL));
	int sizeN1, sizeN2, bSizeOfArray, sSizeOfArray, f, nearByQ = 0;

	cout << "Введите размер массива S: ";
	cin >> sizeN1;
	cout << "Введите размер массива D: ";
	cin >> sizeN2;
	cout << "Введите f: ";
	cin >> f;

	int* S = new int[sizeN1];
	int* D = new int[sizeN2];

	if (sizeN1 < sizeN2)
	{

		bSizeOfArray = sizeN2;
		sSizeOfArray = sizeN1;

	}
	else
	{

		sSizeOfArray = sizeN2;
		bSizeOfArray = sizeN1;

	}

	for (int i = 0, randomNumber1, randomNumber2; i < bSizeOfArray; i++)
	{

		randomNumber1 = -10 + rand() % 30;
		randomNumber2 = -10 + rand() % 30;
		if (i < sizeN1) *(S + i) = randomNumber1;
		if (i < sizeN2) *(D + i) = randomNumber2;

		if (i < sizeN1) cout << *(S + i) << "\t";
		else cout << "\t";
		if (i < sizeN2) cout << *(D + i) << endl;
		else cout << endl;

	}

	int I = 0, J = 0;

	for (int i = 0; i < bSizeOfArray; i++)
	{

		for (int j = 0, currentValue = 0, nextValue = 0; j < sSizeOfArray; j++)
		{

			currentValue = fabs(*(S + i) + *(D + j) - f);

			cout << *(S + i) << " + " << *(D + j) << " Разница: " << fabs(*(S + i) + *(D + j) - f);

			if (i == 0 && j == 0 || currentValue < nearByQ)
			{

				I = i;
				J = j;
				nearByQ = currentValue;

				cout << "\t" << " - близкое к q" << endl;

			}
			else cout << endl;

		}

	}

	cout << endl << "Сумма близкая к q: " << *(S + I) << " + " << *(D + J);
}