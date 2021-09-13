#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A;
    cout << "Введите A: ";
    cin >> A;
    double c = 1;
    double sum = 1;
    while (true)
    {
        c++;
        sum += 1.0 / c;
        if (sum > A)
        {
            cout << "Число: " << sum << endl;
            return 0;
        }
    }
}