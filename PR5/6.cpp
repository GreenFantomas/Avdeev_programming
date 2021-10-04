#include <iostream>
using namespace std;

float sum(float *n1)
{
    return *n1;
}

float sum(float *n1, float *n2)
{
    return (*n1 + *n2) / 2.0;
}

float sum(float *n1, float *n2, float *n3)
{
    return (*n1 + *n2 + *n3) / 3.0;
}

float sum(float *n1, float *n2, float *n3, float *n4)
{
    return (*n1 + *n2 + *n3 + *n4) / 4.0;
}

int main()
{
    float n1 = 3.2, n2 = 4.5, n3 = 55.89, n4 = -12.3765;
    cout << sum(&n1) << endl;
    cout << sum(&n1, &n2) << endl;
    cout << sum(&n1, &n2, &n3) << endl;
    cout << sum(&n1, &n2, &n3, &n4) << endl;
}