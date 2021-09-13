#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    double c = (double)a/(double)b;
    cout << c << endl;
    cout << "третья цифра после запятой:" << ((int)(c*1000))%10 << endl;
}