#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    for (int i = 1000; i <= 10000; i++)
    {
        if ((i / 1000) + ((i % 1000) / 100) == ((i % 100) / 10) + (i % 10))
        {
            c++;
        }
    }
    cout << "Число «счастливых сочетаний»: " << c << endl;
}