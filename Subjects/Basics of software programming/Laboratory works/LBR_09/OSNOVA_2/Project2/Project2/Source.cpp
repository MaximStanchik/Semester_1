#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

//В массиве А(n) каждый элемент, кроме первого, заменить суммой всех предыдущих.
//Variant 11

#include <iostream>

#include <math.h>
using namespace std;

int main()
{
    int N;
    cout << "N=";
    cin >> N;
    int* A = new int[N];

    int S = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        S += A[i];
    }

    for (int i = N - 1; i > 0; i--)
    {
        S -= A[i];
        A[i] = S;
    }
    for (int i = 0; i < N; i++)
        cout << A[i] << ' ';
    return 0;
}