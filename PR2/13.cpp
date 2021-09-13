#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cout << "Введите X: ";
    cin >> x;
    cout << "Введите Y: ";
    cin >> y;

    if ((pow(x, 2) + pow(y, 2)) <= 1)
    {
        cout << "Счёт: 2 очка" << endl;
        return 0;
    }
    if ((pow(x, 2) + pow(y, 2)) <= 4)
    {
        cout << "Счёт: 1 очко" << endl;
        return 0;
    }
    cout << "Счёт: 0 очков" << endl;
    return 0;
}