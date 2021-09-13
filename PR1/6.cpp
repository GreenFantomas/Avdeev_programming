#include <iostream>
#include <math.h>
using namespace std;

double getDouble(string str)
{
    double r;
    cout << "Введите " << str << "=";
    cin >> r;
    return r;
}

int main()
{
    double b, c, d;
    b = getDouble("b");
    cout << (double)((double)3 / 8) << endl;
    double z1 = pow(cos((double)((double)3 / 8) * M_PI - (double)(b / (double)4)), 2) - pow(cos((double)((double)11 / 8) * M_PI + (double)(b / 4)), 2);
    cout << "z1=" << z1 << endl;
}