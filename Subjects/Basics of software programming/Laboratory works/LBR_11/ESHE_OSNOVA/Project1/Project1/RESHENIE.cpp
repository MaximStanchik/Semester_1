#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

//Заданы два массива A и B, каждый из n элементов. 
//Подсчитать количество таких k, для которых: A[k] = B[k], A[k] > B[k] и A[k] < B[k].


int main()
{
	setlocale(LC_CTYPE, "Russian");
	srand(time(NULL));
	int size, nEqual = 0, n_A_bigger = 0, n_B_bigger = 0;
	cin >> size;

	int* A = new int[size];
	int* B = new int[size];

	cout << "Массив A:\n";
	for (int i = 0; i < size; i++)
	{
		*(A + i) = rand() % 100;
		cout << *(A + i) << " ";
	}

	cout << "\nМассив B:\n";
	int* pB;
	for (pB = B; pB < B + size; pB++)
	{
		*pB = rand() % 100;
		cout << *pB << " ";
	}

	for (int i = 0; i < size; i++)
	{
		if (*(A + i) == *(B + i))
		{
			nEqual++;
		}
		else if (*(A + i) > *(B + i))
		{
			n_A_bigger++;
		}
		else if (*(A + i) < *(B + i))
		{
			n_B_bigger++;
		}
	}
	cout << endl << "Количество a[k] = b[k] равно " << nEqual << endl;
	cout << "Количество a[k] > b[k] равно " << n_A_bigger << endl;
	cout << "Количество a[k] < b[k] равно " << n_B_bigger << endl;
}