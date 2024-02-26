#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void main() {
    setlocale(LC_ALL, "Rus");
    // Доп 3 Вариант 9 Задание 1
    float* array;
    int i, size, sum = 0, pr = 1, minElI, minEl;
    cout << "Введите размер массива: ";
    cin >> size;

    if (!(array = (float*)calloc(size, sizeof(int)))) {
        cout << "Not enough memory";
        return;
    }

    cout << "\nСозданный массив:\n";
    for (i = 0; i < size; i++) {
        cin >> array[i];
        cout << array[i] << "\t";
    }
    minEl = array[0];

    for (i = 0; i < size; i++) {
        if (minEl > array[i])
        {
            minEl = array[i];
            minElI = i;
        }
    }

    for (i = 0; i < minElI; i++) {
        sum += array[i];
        pr *= array[i];
    }
    cout << endl << "Сумма до минималбного элемента: " << sum << endl << "Произведение до минималбного элемента: " << pr << endl;
}