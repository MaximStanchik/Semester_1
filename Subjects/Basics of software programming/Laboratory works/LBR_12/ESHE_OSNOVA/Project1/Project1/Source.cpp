#include <cstring>
#include <iostream>
using namespace std;
//����� ����� ������� � ����� �������� ����� � �������� �����������.
void main() {
	setlocale(LC_ALL, "Rus");
	char str[3000];
	int counter = 0, position = 0, numberOfWord = 0;
	cout << "������� ������: ";
	cin.getline(str, 3000);
	for (int i = 0, c = 0, word = 1; i < strlen(str) + 1; i++)
	{
		if (*(str + i) == ' ' || *(str + i) == '\0')
		{
			if (counter < c) {
				position = i - c;
				numberOfWord = word;
				counter = c;
			}
			word++;
			c = 0;
		}
		else {
			c++;
		}

	}
	cout << "����� ������� ���-�� �������� � ����� " << counter << " ����� ����� � ����������� " << numberOfWord << " ������ ������� ������� ����� ����� " << position; 
}