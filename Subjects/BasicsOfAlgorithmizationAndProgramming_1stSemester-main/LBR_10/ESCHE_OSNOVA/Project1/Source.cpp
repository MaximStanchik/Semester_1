#include <iostream> 
#include <bitset>
using namespace std;

//”становить в 0 в числе ј n битов влево от позиции p, заменить ими m битов числа ¬, начина€ с позиции q.
//Variant 11


void main()
{
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    int a, b;
    cout << "¬ведите число A: ";
    cin >> a;
    cout << "¬ведите число B: ";
    cin >> b;

    _itoa_s(a, tmp, 2);
    cout << "A в двоичном виде = " << tmp << '\n';
    _itoa_s(b, tmp, 2);
    cout << "B в двоичном виде = " << tmp << '\n';

    cout << " ак много битов обратить в '0': ";
    int nA;
    cin >> nA;

    cout << " ак много битов в B обратить заменить: ";
    int nB;
    cin >> nB;

    int positionA = -1;
    while (positionA < 1)
    {
        cout << "— какой позиции сделать это: ";
        cin >> positionA;
    }

    int positionB = -1;
    while (positionB < 1)
    {
        cout << "— какой позиции сделать это: ";
        cin >> positionB;
    }

    unsigned int maskA = (1 << nA) - 1;

    unsigned int maskNullB = (1 << nB) - 1;
    b &= ~(maskNullB << (positionB - 1));

    unsigned int maskB = a, counter = 0;
    _itoa_s(maskB, tmp, 2);
    for (int i = 0; i < size(tmp); i++) {
        if (tmp[i] == '1' || tmp[i] == '0') {
            counter++;
        }
    }
    unsigned int steps = 0;
    steps = 33 - nB;
    maskB >>= positionA - 1;
    _itoa_s(maskB, tmp, 2);
    cout << tmp << endl;
    maskB <<= steps;
    maskB >>= steps;
    _itoa_s(maskB, tmp, 2);

    a &= ~(maskA << (positionA - 1));
    b |= maskB << (positionB - 1);

    _itoa_s(a, tmp, 2);
    cout << "\nA в двоичном представлении после всех манипул€ций: " << tmp << "\nA в дес€тичном представлении: " << a << "\n";

    _itoa_s(b | maskB << (positionB - 1), tmp, 2);
    cout << "\nB в двоичном представлении после всех манипул€ций: " << tmp << "\nB в дес€тичном представлении: " << b << "\n";
}