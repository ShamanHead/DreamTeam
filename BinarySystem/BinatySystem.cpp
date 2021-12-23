#include <iostream> 
using namespace std;
void binaryto()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33];
	cout << "Введите число: ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Двоичная система: " << tmp << endl;
	_itoa_s(A, tmp, 8);
	cout << "Восьмеричная система: " << tmp << endl;
	_itoa_s(A, tmp, 16);
	cout << "Шестнадцатеричная система: " << tmp << endl;
}