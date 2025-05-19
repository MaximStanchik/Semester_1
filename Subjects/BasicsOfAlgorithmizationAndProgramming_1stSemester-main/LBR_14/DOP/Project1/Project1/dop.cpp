#include <iostream>
using namespace std;
//В каждой строке заданной матрицы A(n, m) вычислить сумму, количество и среднее арифметическое положительных элементов.
int main()
{
	const int m = 4;
	const int n = 3;
	int polojitelnie = 0, sum = 0;
	int a[m][n]
	{
		{1, -3, 2},
		{-5, 4, -1},
		{6, 7, 8},
		{9,10,-6}
	};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			polojitelnie++;
			if (a[i][j] < 0)
			{
				a[i][j] = 0;
				polojitelnie--;
			}
			sum = sum + a[i][j];
			if (j == n - 1)
			{
				cout << "Polojitelnih v " << i << " stroke : " << polojitelnie << endl;
				cout << "Summa = " << sum << endl;
				sum = 0;
				polojitelnie = 0;
			}
		}
	}
}