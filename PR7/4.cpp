#include <iostream>
#include <map>
using namespace std;

int uniqElements(int *arr, int size)
{
    map<int, int> count;
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    return count.size();
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
    int arr[8] = {3, 4, 6, 3, 7, 1, 4, 4};
    printArray(arr, 8);
    cout << "Число уникальных элементов в массиве: " << uniqElements(arr, 8) << endl;
}