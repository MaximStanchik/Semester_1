#include <cstring>
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");



	char str[] = "hello grey red doing cucumber dolo b";
	char ending[10];
	int countOfSymb = 0, position = 0;

	cout << str << endl << "Выберите оконачание из 3 букв: ";
	cin.getline(ending, 10);

	for (int i = 0; i < strlen(str) + 1; i++, countOfSymb++)
	{

		if (*(str + i) == ' ' || *(str + i) == '\0')
		{

			position = i - countOfSymb;
			for (int k = i - strlen(ending), j = 0, check = 0; k < i; k++, j++)
			{
				if (str[k] == ending[j]) check++;
				if (check == strlen(ending)) {
					if (i > countOfSymb) position++;
					for (int l = position; l < i; l++)
					{
						cout << str[l];
					}
					cout << " ";
				}
			}
			countOfSymb = 0;
		}
	}
}