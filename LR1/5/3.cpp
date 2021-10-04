#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N = 0;
    cout << "Введите N: ";
    cin >> N;
    float arr[N];
    int c = 0;
    for (int i = 0; i < N; i++)
    {
        float buff = 0;
        cout << "Введите число " << i + 1 << ": ";
        cin >> buff;
        arr[i] = buff;
        if (i != 0 && arr[i] > 0 && arr[i - 1] > 0)
        {
            c++;
        }
    }
    cout << "Число положительных соседних пар: " << c << endl;
}