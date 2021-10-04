#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int size = 3;

    float a, b;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;

    int buffer = (a / b) * pow(10, size);
    int bb = 1;
    for (int i = 10; i <= pow(10, size); i = i * 10)
    {
        if ((buffer % i) / bb == 3)
        {
            cout << "3 встречается в дробной части числа" << endl;
            return 0;
        }
        bb = bb * 10;
    }
    cout << "3 не встречается в дробной части числа" << endl;
}