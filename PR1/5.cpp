#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a;
    cout << "Введите a: ";
    cin >> a;
    cout << "b=" << sqrt(a) * pow(sin(3 * a + 1), 2) << endl;
}