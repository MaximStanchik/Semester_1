#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
int rows, cols, k = 0, sum = 0;
int** matr;
printf("Kol-vo strok: \n");
cin >> rows;
printf("Kol-vo stolbcov: \n");
cin >> cols;

matr = new int* [rows];
for (int i = 0; i < rows; i++) {

    matr[i] = new int[cols];

    for (int j = 0; j < cols; j++)
    {
        printf("Ввести [%d;%d] элемент: ", i + 1, j + 1);
        cin >> matr[i][j];
    }
}

int index = 0;

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (matr[i][j] > 0) {

            k++;

        }
        else {

            k = 0;
            break;
        }
    }
    if (k == cols) {

        index = i + 1;
        break;

    }
}
cout << endl << "Номер строки, где все элементы положительны: " << index << endl;

for (int i = index - 1; i < index; i++) {

    for (int j = 0; j < cols; j++) {

        sum += matr[i][j];

    }
}
cout << endl << "Сумма элементов этой строки: " << sum << endl;

cout << endl << "Измененная матрица:" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        matr[i][j] -= sum;
        cout << matr[i][j] << "\t";
    }
    cout << endl;
}
}