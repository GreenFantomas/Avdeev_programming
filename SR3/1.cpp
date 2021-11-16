#include <iostream>
using namespace std;

struct Object
{
    int var1;
    float var2;
};

void printBigest(Object *a, Object *b)
{
    if (a->var1 > b->var1)
    {
        cout << "У первого объекта больше" << endl;
    }
    else if (a->var1 < b->var1)
    {
        cout << "У второго объекта больше" << endl;
    }
    else
    {
        cout << "Значения одинаковые" << endl;
    }
}

int main()
{
    Object a;
    a.var1 = 11;
    a.var2 = 2.9;

    Object b;
    b.var1 = 55;
    b.var2 = -9.6;

    printBigest(&a, &b);
}