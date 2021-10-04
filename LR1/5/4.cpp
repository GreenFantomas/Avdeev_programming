#include <iostream>
#include <cmath>
using namespace std;

double row(float x, int n)
{
    double z = 0;
    for (int i = 0; i < n; i++)
    {
        z += (pow(-1, i + 1) * pow(x, 2 * i + 1)) / (2 * i + 1);
    }
    return z + M_PI_2;
}

int main()
{
    for (float x = -0.9; x <= 0.9; x += 0.1)
    {
        cout << "X: " << fixed << x << " Y: " << M_PI_2 - atan(x) << " Yrow: " << row(x, 50) << endl;
    }
}