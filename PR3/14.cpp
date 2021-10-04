#include <iostream>
#include <cmath>
using namespace std;

double ln(float x)
{
    return log(1 - x);
}

double row(float x, int n)
{
    double z1 = 0;
    for (float i = 1; i <= n; i++)
    {
        z1 += (pow(x, i)) / i;
    }
    return (-1) * z1;
}

int main()
{
    for (float x = -0.75; x <= 0.75; x += 0.25)
    {
        cout << "X: " << x << " Y: " << ln(x) << " Yrow: " << row(x, 50) << endl;
    }
}