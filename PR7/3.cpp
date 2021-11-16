#include <iostream>
#include <cmath>
using namespace std;

// сортировка выбором
void sort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIDX = i;
        for (int j = i; j < size; j++)
        {
            if (abs(arr[j]) < abs(arr[minIDX]))
            {
                minIDX = j;
            }
            int buf = arr[minIDX];
            arr[minIDX] = arr[i];
            arr[i] = buf;
        }
    }
}

void printArray(int *arr, int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main()
{
    int arr[6] = {9, 1, 4, -7, -22, 1};
    printArray(arr, 6);
    sort(arr, 6);
    printArray(arr, 6);
}