#include <iostream>
using namespace std;

bool equal(int a, int b)
{
    return a == b;
}

bool equal(float a, float b)
{
    return a == b;
}

int main()
{
    int a = 2, b = 3;
    float c = 3.33, d = 3.33;
    if (equal(a, b))
    {
        cout << "Числа a и b равны" << endl;
    }
    else
    {
        cout << "Числа a и b не равны" << endl;
    }

    if (equal(c, d))
    {
        cout << "Числа c и d равны" << endl;
    }
    else
    {
        cout << "Числа c и d не равны" << endl;
    }
}