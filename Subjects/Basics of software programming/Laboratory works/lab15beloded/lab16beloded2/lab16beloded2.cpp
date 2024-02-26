#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

char Input()
{
	char k;
	while (true)
	{
		cin >> k;
		if (cin.get() == '\n') {
			break;
		}
		return k;
	}
}
	/*char Correct_Input()
	{
		char k;
		while (true)
		{
			cin >> k;
			if (cin.get() == '\n') {
				break;
			}
			else
			{
				cin.clear(); //убираем флаг ошибки
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); //выкидываем все, что ввёл пользователь
				cout << "Oops, that input is invalid. Please try again.\n";
			}
		}
		return k;
	}*/

	char main()
	{
		int i, j;
		char a[7]=" ";
		cout << "Enter elements of array:" << endl;


		/*if (n <= 0)
		{
			cout << "Your array can't be created" << endl;
		}*/



		/*for (i = 0; i < n; i++)
			a[i] = new int[m];*/ //формирование матрицы m*n

		for (i = 0; i < 6; ++i) {


			cout << " a[ " << i + 1 << " ] =  ";
			a[i] = Input();
		}
		cout << endl;

		/*for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}*/

		for (int i = 0; a[i] != '\0'; i++) {
			unsigned char c = a[i];
			if (a[i] > 192 && a[i] < 255) {
				a[i] = toupper(a[i]);
			}
		}

		for (int i = 0; i < 7; i++) {
			cout << a[i] << " ";
			cout << endl;
		}

		//delete[]a;
		return 0;
	}
