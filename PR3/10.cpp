#include <iostream>
#include <math.h>
using namespace std;

double dB(double x0, double x1)
{
    return 10 * log10(x1 / x0);
}

double div(double x0, double x1)
{
    return x1 / x0;
}

int main()
{
    cout << "С 5А до 15А: " << div(5.0, 15.0) << " раз(а); " << dB(5.0, 15.0) << "дБ" << endl;
    return 0;
}