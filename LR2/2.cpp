#include <iostream>
#include <map>
using namespace std;

// setArray - ввод массива пользователем
void setArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// countEqualElements - возвращает число повторений самого частовстречающегося элемента массива
int countEqualElements(int *a, int size)
{
    // Создаём карту в которой ключ - элемент в из массива, значение - кол-во повторений этого элемента в массиве
    map<int, int> counts;
    // Подсчёт кол-во повторений для каждого элемента
    for (int i = 0; i < size; i++)
    {
        // Если элемента нет в мапе, то он добавляется и его значение равно 1(0++ = 1)
        // Если элемент есть в мапе, то к его значению добавляется 1
        counts[a[i]]++;
    }

    int max = 0;
    /*
    Начиная с С++11 можно проходить(спец символ :)
    через списки без использования индексов, в тех случаях когда он не нужен.
    Использование [тип_данных имя_переменной_которой_назначается_текущее_вхождение : список_через_которой_проходим]).
    
    Спец. слово auto говорит компилятору автоматически определить тип ключа и значения в мапе, 
    что позволяет "проходить" через любые карты с разными типами данных
    */
    for (const auto &[key, value] : counts)
    {
        if (value > max)
        {
            max = value;
        }
    }
    return max;
}

int main()
{
    int N = 0;
    cout << "Введите размер N: ";
    cin >> N;
    int a[N], b[N];

    cout << endl << "Заполнение первого массива" << endl;
    setArray(a, N);
    cout << endl << "Заполнение второго массива" << endl;
    setArray(b, N);

    int countA = countEqualElements(a, N), countB = countEqualElements(b, N);
    if (countA > countB)
    {
        cout << "В первом массиве больше повторяющихся элементов." << endl;
    }
    else if (countA < countB)
    {
        cout << "Во втором массиве больше повторяющихся элементов." << endl;
    }
    else
    {
        cout << "В обоих массивах одинаковое кол-во повторяющихся элементов" << endl;
    }
}