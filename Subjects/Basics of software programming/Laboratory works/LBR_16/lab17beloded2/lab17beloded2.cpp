/*2. Если есть в матрице столбец, все элементы которого отрицательны, 
то найти среднее арифметическое этих элементов. Вычесть полученное значение из всех элементов матрицы.*/
#include <iostream>
#include <ctime>

using namespace std;

void matrica(int& ROW, int& COLUMN);

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int ROW, COLUMN;
    cout << "Введите количество строк и столбцов матрицы" << endl;
    cin >> ROW;
    cin >> COLUMN;
    matrica(ROW, COLUMN);

}

void matrica(int& ROW, int& COLUMN)
{
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));
    int** matrica = new int* [ROW];
    int sum = 0, srednee_arifmeticheskoe = 0, sum2 = 0, index;
    for (int i = 0; i < COLUMN; i++)
    {
        matrica[i] = new int[COLUMN];
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            matrica[i][j] = rand() % 15 - 10 + 1;
            cout << matrica[i][j] << "|" << ends;
        }
        cout << endl;
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            if (matrica[j][i] < 0)
            {
                sum += 1;
                sum2 += matrica[j][i];
                index = j;
            }
            if (sum == COLUMN)
            {
                srednee_arifmeticheskoe = sum2 / COLUMN;
            }
        }
        sum = 0;
        sum2 = 0;
    }
    cout <<"srednee arifmetichescoe= "<< srednee_arifmeticheskoe<< endl;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            matrica[i][j] = matrica[i][j] - srednee_arifmeticheskoe;
        }
    }

    cout << endl;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << matrica[i][j] << "|" << ends;
        }
        cout << endl;
    }

}
