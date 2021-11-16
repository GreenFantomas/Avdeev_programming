#include <iostream>
#include <map>
using namespace std;

int findMaxCount(int *arr, int size)
{
    map<int, int> count;
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    int maxCount = 0, maxElement = 0;
    for (auto &[k, v] : count)
    {
        if (v > maxCount)
        {
            maxCount = v;
            maxElement = k;
        }
        else if (v == maxCount && k < maxElement)
        {
            maxElement = k;
        }
    }
    return maxElement;
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
    int arr[10] = {3, -4, 6, 6, 3, 7, 1, -4, 6, -4};
    printArray(arr, 10);
    cout << "Наиболее часто встречающийся элемент: " << findMaxCount(arr, 10) << endl;
}