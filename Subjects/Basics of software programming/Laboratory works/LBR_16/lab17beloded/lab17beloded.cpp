/*1. Создать одномерный массив, содержащий 15 элементов,
наполнить его случайными значениями в интер-вале от 1 до 200. Определить произведение элементов массива с индексами от 2 до 7.*/
#include <iostream>
#include <ctime>

using namespace std;

void massiv(int& number);

void main()
{
    setlocale(LC_CTYPE, "Russian");
    int number;
    cout << "Введите количество элементов массива" << endl;
    cin >> number;
    massiv(number);
}

void massiv(int& number)
{
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));
    int* mass = new int[number];
    int proizvedenie = 1;
    for (int i = 0; i < number; i++)
    {
        mass[i] = rand() % 20 + 1;
        cout << mass[i] << "|" << ends;
    }
    cout << endl;

    for (int i = 2; i < 7; i++)
    {
        proizvedenie *= mass[i];
    }

    cout << "Произведение элементов со 2 индекса до 7 равно: " << proizvedenie << endl;

}