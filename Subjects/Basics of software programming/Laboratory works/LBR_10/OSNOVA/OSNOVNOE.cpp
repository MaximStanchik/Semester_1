#include <iostream> 
#include <bitset>
using namespace std;

//��������� ������� �������� ���������, ������ �� ����������� ����� �.
//Variant 11

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33];
	cout << "������� ����� ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "����� � �������� ���� = " << tmp << endl;
	if ((A & 15) == 0)
		cout << "����� ������ 16" << endl;
	else
		cout << "����� �� ������ 16" << endl;
	system("pause");
}