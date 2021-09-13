#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double sum = 0;
    for(int n = 1; n<=50; n++){
        sum += 1.0/(n*sqrt(n+1));
    }
    cout << "Сумма: " << sum << endl;
}