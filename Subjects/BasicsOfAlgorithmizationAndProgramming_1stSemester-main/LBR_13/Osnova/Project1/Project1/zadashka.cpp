#include <stdio.h>
#include <conio.h>
#define N 10 
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>
using namespace std;
int main() {
	srand(time(nullptr));

	const int size = 4;
	int index = 0;

	int arr[size][size]; int tmp;
	for (int i = 0; i < size; ++i)
	{

		for (int j = 0; j < size; ++j)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
	cout << '\n' << '\n';
	tmp = arr[0][0];
	for (int i = 1; i < size; ++i)
	{
		if (tmp < arr[i][i]) { tmp = arr[i][i]; index = i; }

		if (i == size - 1)
		{
			for (int j = 0; j < size; ++j)
			{
				cout << arr[index][j] << " ";
			}
			cout << '\n';
		}
	}

	cout << "Max: " << tmp << " Index: " << index << '\n';
}