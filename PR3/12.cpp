#include <iostream>
#include <math.h>
using namespace std;

int NOD(int x, int y)
{
    x = abs(x);
    y = abs(y);
    for (int i = (x < y) ? x : y; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int x, y;
    cout << "Введите числа:" << endl;
    cin >> x;
    cin >> y;
    cout << "НОД: " << NOD(x, y) << endl;
}