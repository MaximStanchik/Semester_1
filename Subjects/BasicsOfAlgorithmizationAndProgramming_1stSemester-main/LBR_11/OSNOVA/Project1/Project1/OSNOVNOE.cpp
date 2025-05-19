#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

//�������� ������������������ �� n ����������� �����. 
//���������� ���������� ���������� ����������� �����, ������������� � ������������������.

int main()
{
	setlocale(LC_CTYPE, "Russian");
	srand(time(NULL));
	int sizeOfArray = 0, randomNumber, value = 0, subsequence = 0;

	cout << "������� ������ �������: " << endl;
	cin >> sizeOfArray;

	cout << "� ����� ����� ������������������: " << endl;
	cin >> subsequence;

	int* newArray = new int[sizeOfArray];

	randomNumber = 1 + rand() % sizeOfArray;

	for (int i = 1; i <= sizeOfArray; i++)
	{
		newArray[i - 1] = i * subsequence;
	}

	for (int i = 0; i < sizeOfArray; i++)
	{
		if (i >= randomNumber) {
			*(newArray + i) = *(newArray + i + 1);
		}
	}

	for (int i = 0; i < sizeOfArray - 1; i++)
	{
		cout << *(newArray + i) << " ";

		if (*(newArray + i + 1) - *(newArray + i) > subsequence) {

			value = *(newArray + i) + subsequence;
		}
	}

	cout << endl << value;
}

		