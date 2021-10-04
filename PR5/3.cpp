#include <iostream>
using namespace std;

void change(int *n1, int *n2, int *n3)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    *n3 = *n1 + *n2 + *n3;
}

int main()
{
    int n1 = 12, n2 = 17, n3 = 3;
    change(&n1, &n2, &n3);
    cout << "n1=" << n1 << " n2=" << n2 << " n3=" << n3 << endl;
}