#include <iostream>
#include <math.h>
using namespace std;

int NOK(int x, int y, int z)
{
    for (int i = 1; i < x * y * z; i++)
    {
        if (i % x == 0 && i % y == 0 && i % z == 0)
        {
            return i;
        }
    }
    return x*y*z;
}

int main()
{
    int x, y, z;
    cout << "Введите числа:" << endl;
    cin >> x;
    cin >> y;
    cin >> z;

    cout << NOK(x, y, z) << endl;
}