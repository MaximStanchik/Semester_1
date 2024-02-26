#include <iostream>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Russian");
	int x='a', xlarge = 'A', y = 'а',  ylarge = 'А', z='0';
	printf("Разница значений прописной и заглавной латинской буквы сосавляет %d позиций\n", x-xlarge);
	printf("Разница значений прописной и заглавной русскойской буквы сосавляет %d позиций\n", y - ylarge);
	printf("Код заданной цифры = %d\n", z);
}