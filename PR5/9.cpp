#include<iostream>
using namespace std;

float test(float, float = 1000);

int main(){
    test(3.2);
}

float test(float a, float b){
    cout << b << endl;
}