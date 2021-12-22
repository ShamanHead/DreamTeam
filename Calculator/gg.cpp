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
            cout << "Введите первую переменную: "; cin >> a;
            cout << "Введите вторую переменную: "; cin >> b;
            cout << "Какую операцию произвести? "; cin >> d;
            if (d == '+'){
                c = a + b;
                cout << "Результат сложения: " << c << endl;
            }
            if (d == '-') {
                c = a - b;
                cout << "Результат вычитания: " << c << endl;
            }
            if (d == '*') {
                c = a * b;
                cout << "Результат уумножения: " << c << endl;
            }
            if (d == '/') {
                c = a / b;
                cout << "Результат деления: " << c << endl;
            }

        }
        case 2:
        {
            break;
        }
        }
    }
}
