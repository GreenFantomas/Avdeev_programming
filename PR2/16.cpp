#include <iostream>
#include <cmath>
using namespace std;

double aprox(double x, int n)
{
    double z1 = 0;
    for (int i = 1; i <= n; i++)
    {
        z1 += pow(x, i) / i;
    }
    return (-1.0) * z1;
}

int main()
{
    double z, z1;
    for (double x = -0.75; x <= 0.75; x += 0.25)
    {
        z = log(1 - x);
        z1 = aprox(x, 50);
        cout << "X: " << x << " Z: " << z << " Z1: " << z1 << endl;
    }
}