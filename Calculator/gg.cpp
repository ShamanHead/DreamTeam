#include <iostream>
using namespace std;
float a, b, c;
char d;
int p;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    while (p < 2)
    {
        cout << " 1 = calculator \n 2 - exit \n";
        cin >> p;
        switch (p)
        {
        case 1:
        {
            float c;
            cout << "������� ������ ����������: "; cin >> a;
            cout << "������� ������ ����������: "; cin >> b;
            cout << "����� �������� ����������? "; cin >> d;
            if (d == '+'){
                c = a + b;
                cout << "��������� ��������: " << c << endl;
            }
            if (d == '-') {
                c = a - b;
                cout << "��������� ���������: " << c << endl;
            }
            if (d == '*') {
                c = a * b;
                cout << "��������� ����������: " << c << endl;
            }
            if (d == '/') {
                c = a / b;
                cout << "��������� �������: " << c << endl;
            }

        }
        case 2:
        {
            break;
        }
        }
    }
}
