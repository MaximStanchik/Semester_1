#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <math.h>
using namespace std;

double Correct_Input()
{
	double k;
	while (true)
	{
		cin >> k;
		if (cin.get() == '\n') {
			break;
		}
		/*else
		{
			cin.clear(); //убираем флаг ошибки
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //выкидываем все, что ввёл пользователь
			cout << "Oops, that input is invalid. Please try again.\n";
		}*/
	}
	return k;
}

int taskfirst()
{
	int** a, n, m, i, j;
	cout << "Enter size of array:" << endl;
	n = Correct_Input();
	m = Correct_Input();

	if (n <= 0 || m <= 0)
	{
		cout << "Your array can't be created" << endl;
	}

	a = new int* [n];

	for (i = 0; i < n; i++)
		a[i] = new int[m]; //формирование матрицы m*n

	for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j)
		{
			cout << " a[ " << i + 1 << " ] [ " << j + 1 << " ] =  ";
			a[i][j] = Correct_Input();
		}
	cout << endl;


	
	for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j) {
			if (a[i][0] > 0)
			{
				a[i][j] += 1;
			}
			else
				break;
		}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

	delete[]a;
	return 0;
}

//Второе задание

char Vvodilki()
{
	int x, n;
	cout <<"Enter the number of items:" << "\n";
	cin >>n;
	char* str = new char(n);
	cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++) {
		cin >> str[x];
	}
	/*int size = 5;
	char* str = new char [size] ;
	cin.getline(str, size);*/
	for (int i = 0; str[i] != '\0'; i++)
	{
		
		unsigned char c = str[i];
		if (c > 192 && c < 255) {
			str[i] = toupper(c);
		}
		else
			str[i] = '?';
	}
	cout << str << endl;
	return 0;
	delete str;
}

int tasktwo() {
	SetConsoleCP(1251);
	setlocale(LC_ALL, "rus");
	//cout << "Enter the string : " << endl;
	Vvodilki();
	return 0;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0;
	cout << "Какое задание выполнить?(1 или 2)" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		taskfirst();
		break;
	case 2:
		tasktwo();
		break;
	}
	return 0;
}