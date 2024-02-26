#include <cstring>
#include <iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "Rus");
	char str[3000];
	cout << "¬ведите строку: ";
	cin.getline(str, 3000);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			cout << str[i - 1];
		}
		else if (str[i + 1] == '\0') cout << str[i];

	}
}