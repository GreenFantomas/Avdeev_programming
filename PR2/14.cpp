#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Введите число: ";
    cin >> n;
    int sum = 0;
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl
         << sum << endl;
}