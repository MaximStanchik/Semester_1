#include <iostream>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Russian");
	int x='a', xlarge = 'A', y = '�',  ylarge = '�', z='0';
	printf("������� �������� ��������� � ��������� ��������� ����� ��������� %d �������\n", x-xlarge);
	printf("������� �������� ��������� � ��������� ����������� ����� ��������� %d �������\n", y - ylarge);
	printf("��� �������� ����� = %d\n", z);
}