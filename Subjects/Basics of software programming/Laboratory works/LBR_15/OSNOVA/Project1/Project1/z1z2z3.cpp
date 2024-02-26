#include <iostream>
#include <string>
using namespace std;

char chars[200];
void FindZ() {
	string str;
	cin.ignore();
	getline(cin, str);
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'c') counter++;
		chars[i] = str[i];
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (chars[i] == 'c') {
			for (int j = str.length(); j != i; j--)
			{
				chars[j] = chars[j - 1];
			}
			chars[i + 1] = '*';
		}
	}
	cout << endl;
	for (int i = 0; i < strlen(chars); i++)
	{

		cout << chars[i] << " ";
	}
}
void returnMaxElement(int** A, int max, int rows, int cols, int i, int j) {
	int posMaxI = 0, posMaxJ = 0, counter = 0, sum = 0;
	//int 
	max = A[0][0];
	for (int g = 0; g < 2; g++) {
		for (i = 0; i < rows; i++) {
			for (j = 0; j < cols; j++) {
				if (i > j && g == 1) {
					sum += *(*(A + i) + j);
				}
				if (*(*(A + i) + j) > max)
				{
					max = *(*(A + i) + j);
					posMaxI = i;
					posMaxJ = j;
				}
				if (*(*(A + i) + j) == max && g == 1) {
					counter++;
					posMaxI = i;
					posMaxJ = j;
					if (counter > 1) cout << "Позиция максимального элемент массива i: " << posMaxI << " , j: " << posMaxJ << endl;
				}
			}
		}
		if (g == 0) {
			cout << "Максимальный элемент массива: " << max << endl;
			cout << "Позиция максимального элемент массива i: " << posMaxI << " , j: " << posMaxJ << endl;
		}
	}
	cout << "Сумма элементов массива ниже главной диагонали: " << sum << endl;
	for (i = 0; i < rows; i++)
		delete A[i];
	delete[] A;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int choice;
	int max = 0;
	do {
		cout << "Выберите вариант работы" << endl;
		cout << "1 - задание 1" << endl;
		cout << "2 - задание 2" << endl;
		cout << "3 - выход" << endl;
		cin >> choice;
		switch (choice) {
		default: break;
		case 1:
			int** A, rows, cols, i, j;
			cout << "Введите число строк: ";
			cin >> rows;
			cout << "Введите число столбцов: ";
			cin >> cols;
			A = new int* [rows];
			for (i = 0; i < rows; i++) A[i] = new int[cols];
			for (i = 0; i < rows; i++)
				for (j = 0; j < cols; j++) {
					cin >> *(*(A + i) + j);
				}
			returnMaxElement(A, max, rows, cols, i, j);
			break;
		case 2:
			FindZ();
			break;
		}
	} while (choice != 3);

	return 0;
}