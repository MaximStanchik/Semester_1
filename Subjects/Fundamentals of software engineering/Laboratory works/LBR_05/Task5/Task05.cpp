#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int x = 'a', xlarge = 'A', y = '�', ylarge = '�', k;
	char z;

	puts("��� �� ������ ������� ?\n1 - ������ ������� �������� ��������� � ��������� ��������� �����\n2 - ������ ������� �������� ��������� � ��������� ������� �����\n3 - ������ ��� ��������� �����\n4 - ����� �� ���������");
	cin >> k;
	switch (k)
	{
	case 1: {
		puts("������� ��������� ����� ");
		cin >> z;
		if ((z >= 'A') && (z <= 'z'))
			printf("������� �������� ��������� � ��������� ��������� ����� ��������� %d �������\n", x - xlarge);
		else
			puts("��� �� ��������� �����");
		break;
	}
	case 2: {
		puts("������� ������� ����� ");
		cin >> z;
		if ((z >= -128) && (z <= -17))
			printf("������� �������� ��������� � ��������� ������� ����� ��������� %d �������\n", y - ylarge);
		else
			puts("��� �� ������� �����");
		break;
	}
	case 3: {
		puts("������� ����� ");
		cin >> z;
		if ((z >= '0') && (z <= '9'))
			printf("��� �������� ����� = %d\n", z);
		else
			puts("��� �� �����");
		break;
	}
	case 4: break;
	default: puts("��� ����� ���������");
	}
	return 0;
}
