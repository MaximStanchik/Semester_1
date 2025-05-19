#include <stdio.h>
#include <conio.h>
#define N 10 
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int n, l;
	int array1[10][10];
	cout << "¬ведите размерность матрицы: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		l = i + 1;
		for (int j = 0; j < n; j++) {
			array1[i][j] = l;
			l++;
			if (l > n)
				l = 1;
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
}