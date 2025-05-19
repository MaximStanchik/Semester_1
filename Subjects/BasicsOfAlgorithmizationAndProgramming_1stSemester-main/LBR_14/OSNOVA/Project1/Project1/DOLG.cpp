#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
//ќпределить количество различных элементов матрицы размером nxm(повтор€ющиес€ элементы считать один раз).
int main()
{
	const int m = 4;
	const int n = 3;
	int para = 0, sum = 0, el = 0;
	int a[m][n]
	{
		{1, 2, 2},
		{3, 4, 1},
		{3, 2, 8},
		{4,10,-6}
	};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == a[i][j + 1] || a[i][j] == a[i][j + 2])
			{
				para += 2;
			}
			if (a[i][j] == a[i + 1][j] || a[i][j] == a[i + 2][j])
			{
				para += 2;
			}
			el++;
		}

	}
	el = el - para;
	cout << "Razlichnih elementov : " << el << endl;
}
