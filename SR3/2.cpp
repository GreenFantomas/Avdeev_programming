#include <iostream>
using namespace std;

int op(int *arr, int size)
{
    int endIDX = 0;
    int a = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            endIDX = i;
            break;
        }
    }
    for (int i = 0; i < endIDX; i++)
    {
        a *= arr[i];
    }
    return a;
}

int main()
{
    int arr[5] = {-12, -1, -5, 2, 1};
    cout << op(arr, 5) << endl;
}