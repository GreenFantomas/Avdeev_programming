#include <iostream>
#include <cmath>
using namespace std;

double aprox(double x, int n)
{
    double z1 = 0;
    for (int i = 0; i <= n; i++)
    {
        z1 += 1 / ((2 * i + 1) * pow(x, 2 * i + 1));
    }
    return (2.0) * z1;
}

int main()
{
    double z, z1;
    for (double x = 1.5; x <= 4.5; x += 0.25)
    {
        z = log((x + 1) / (x - 1));
        z1 = aprox(x, 100);
        cout << "X: " << x << " Z: " << z << " Z1: " << z1 << endl;
    }
}