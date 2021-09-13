#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double y;
    for(double x = 0; x <= M_PI ; x=x+0.1){
        cout << "X: " << x << " Y: " << sin(x/2.0) << endl;
    }
    
}