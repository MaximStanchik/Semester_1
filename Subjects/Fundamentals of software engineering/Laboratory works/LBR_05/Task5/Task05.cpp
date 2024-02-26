#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int x = 'a', xlarge = 'A', y = 'а', ylarge = 'А', k;
	char z;

	puts("Что вы хотите сделать ?\n1 - узнать разницу значений прописной и заглавной латинской буквы\n2 - узнать разницу значений прописной и заглавной русской буквы\n3 - узнать код введенной цифры\n4 - выйти из программы");
	cin >> k;
	switch (k)
	{
	case 1: {
		puts("Введите латинскую букву ");
		cin >> z;
		if ((z >= 'A') && (z <= 'z'))
			printf("Разница значений прописной и заглавной латинской буквы сосавляет %d позиций\n", x - xlarge);
		else
			puts("Это не латинская буква");
		break;
	}
	case 2: {
		puts("Введите русскую букву ");
		cin >> z;
		if ((z >= -128) && (z <= -17))
			printf("Разница значений прописной и заглавной русской буквы сосавляет %d позиций\n", y - ylarge);
		else
			puts("Это не русская буква");
		break;
	}
	case 3: {
		puts("Введите цифру ");
		cin >> z;
		if ((z >= '0') && (z <= '9'))
			printf("Код заданной цифры = %d\n", z);
		else
			puts("Это не цифра");
		break;
	}
	case 4: break;
	default: puts("Нет такой программы");
	}
	return 0;
}
