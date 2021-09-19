#include <iostream>
using namespace std;

bool parity(int x, int y, int z)
{
    return (x % 2 == 0 && y % 2 == 0 && z % 2 == 0) || (x % 2 != 0 && y % 2 != 0 && z % 2 != 0);
}

int main()
{
    int x, y, z;
    cout << "Введите числа:" << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    if (parity(x, y, z))
    {
        cout << "Числа имеют одинаковую чётность" << endl;
    }
    else
    {
        cout << "Числа не имеют одинаковую чётность" << endl;
    }
}