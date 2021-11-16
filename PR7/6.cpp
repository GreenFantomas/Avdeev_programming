#include <iostream>
using namespace std;

bool contains(int *A, int n, int *B, int m)
{
    for (int b = 0; b < m; b++)
    {
        bool exist = false;
        for (int a = 0; a < n; a++)
        {
            if (B[b] == A[a])
            {
                exist = true;
                break;
            }
        }
        if (!exist)
        {
            return false;
        }
    }
    return true;
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
    int A[10] = {3, -4, 6, 6, 3, 7, 1, -4, 6, -4};
    int B1[5] = {3, 1, -4, 6, 3};
    int B2[5] = {3, 1, 2, 6, 3};

    cout << "Массив A: ";
    printArray(A, 10);
    cout << "Массив B1: ";
    printArray(B1, 5);
    cout << "Массив B2: ";
    printArray(B2, 5);

    if (contains(A, 10, B1, 5))
    {
        cout << "Массив A содержит массив B1" << endl;
    }
    else
    {
        cout << "Массив A не содержит массив B1" << endl;
    }

    if (contains(A, 10, B2, 5))
    {
        cout << "Массив A содержит массив B2" << endl;
    }
    else
    {
        cout << "Массив A не содержит массив B2" << endl;
    }
}