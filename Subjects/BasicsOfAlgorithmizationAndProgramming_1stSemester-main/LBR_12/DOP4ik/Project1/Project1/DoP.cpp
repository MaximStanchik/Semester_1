#include <cstring>
#include <iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");
	char str[256];
	int i, k, position = 0, a = 0;
	puts("Введите предложение: ");
	gets_s(str);

	for (i = 0; i <= strlen(str); i++)
	{
		if (*(str + i) == ' ' || *(str + i) == '\0')
		{
			position++;
			if (position % 2 == 0)
			{
				for (k = i - 1; k > a; k--)
					cout << *(str + k);
				cout << " ";
			}
			else a = i;

		}
	}
}