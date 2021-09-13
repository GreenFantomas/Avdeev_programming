#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double sum = 0;
    for(int n = 1; n<=50; n++){
        sum += pow(-1.0, n+1)/n;
    }
    cout << "Сумма: " << sum << endl;
}