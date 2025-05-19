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
	int n;
	int array1[10][10];
	int array2[10][10];
	cout << "¬ведите размерность матрицы n (n*2): ";
	cin >> n;
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			array1[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			array2[i][j] = array1[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array1[i][j] = array2[i + n][j + n];
		}
	}
	for (int i = n; i < 2 * n; i++) {
		for (int j = 0; j < n; j++) {
			array1[i][j] = array2[i - n][j + n];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = n; j < 2 * n; j++) {
			array1[i][j] = array2[i + n][j - n];
		}
	}
	for (int i = n; i < 2 * n; i++) {
		for (int j = n; j < 2 * n; j++) {
			array1[i][j] = array2[i - n][j - n];
		}
	}
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
}