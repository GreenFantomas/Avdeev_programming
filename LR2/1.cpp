#include <iostream>
using namespace std;

// simple - проверка, является ли число a простым
bool simple(int a)
{
    for (int i = a - 1; i > 1; i--)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

// printArr - вывод массива на экран в приятном для глаза виде
void printArr(int *arr, int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (i != 0)
            cout << ", ";
        cout << arr[i];
    }
    cout << "]" << endl;
}

int main()
{
    int N = 0, i = 0;
    cout << "Введите N: ";
    cin >> N;
    int arr[N];

    // цикл до максимального значения int16, с целью проверки каждого числа на простоту
    // и занесение простого числа в массив
    for (int a = 2; a < INT16_MAX; a++)
    {
        if (simple(a))
        {
            arr[i] = a;
            i++;
            // если достигли конца массива - выходим
            if (i == N)
                break;
        }
    }
    
    // выводим массив на экран
    printArr(arr, N);
}