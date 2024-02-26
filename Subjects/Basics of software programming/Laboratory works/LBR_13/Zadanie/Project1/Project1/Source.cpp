#include <stdio.h>
#include <conio.h>
#define N 10 
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>
using namespace std;

//dop

int main()
{
	int matrix[N][N], n, avg, k;

	printf("Enter size of matrix: ");
	scanf_s("%d", &n);

	printf("Enter elements: \n");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf_s("%d", &matrix[i][j]);

	for (int i = 0; i < n; i++)
	{
		k = 0; avg = 0;
		for (int j = 0; j < n; j++)
		{
			if (matrix[j][i] < 0)
			{
				avg += matrix[j][i];
				k++;
			}
			else break;
		}

		if (k == n)
		{
			avg /= n;
			break;
		}
	}

	printf("Average = %d \n\nMatrix: \n", avg);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] -= avg;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}