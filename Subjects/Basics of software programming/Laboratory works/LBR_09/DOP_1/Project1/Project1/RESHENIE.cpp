#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");

//Number_4
const int size = 100;
int k, elem, M[size], count;
cout << "������� ������ �������: ";
cin >> k;
cout << "������� �������� �������: " << endl;
for (int i = 0; i < k; i++) {
	cin >> elem;
	M[i] = elem;
}
count = k;
for (int i = 0; i < k; i++) {
	for (int j = 0; j < k; j++) {
		if (i != j) {
			if (M[i] == M[j]) {
				count--;
				break;
			}
		}
	}
}
cout << "� ������� " << count << " ��������� ��������� (��� ����� �������������).";
return 0;
system("pause");
}