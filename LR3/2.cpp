#include <iostream>
#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
using namespace std;

struct GPSSystem
{
    string name;
    int lat[3]; // широта
    int lot[3]; // долгота

    string getLat()
    {
        stringstream ss;
        ss << lat[0] << "." << lat[1] << "." << lat[2];
        return ss.str();
    }

    string getLot()
    {
        stringstream ss;
        ss << lot[0] << "." << lot[1] << "." << lot[2];
        return ss.str();
    }

    void print()
    {
        cout << name << " - " << getLat() << ", " << getLot() << endl;
    }
};

void fillArray(GPSSystem *arr, int size);
string getLongestLat(GPSSystem *arr, int size);
void saveArray(GPSSystem *arr, int size);
bool compareLot(GPSSystem a, GPSSystem b);
bool compareLat(GPSSystem a, GPSSystem b);

int main()
{
    const int N = 2;
    GPSSystem systems[N];
    fillArray(systems, N);

    cout << "Второе устройство:" << endl;
    systems[1].print();

    cout << compareLot(systems[1], systems[0]);
    sort(systems, systems + N, compareLot);
    cout << "Отсортированный массив по широте:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << ": ";
        systems[i].print();
    }

    cout << "Наименование самого отдаленного по долготе устройства: " << getLongestLat(systems, N) << endl;

    saveArray(systems, N);
}

void fillArray(GPSSystem *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        GPSSystem system;
        cout << "Введите название " << i + 1 << " устройства: ";
        cin >> system.name;
        cout << "Введите широту:" << endl;
        cin >> system.lat[0] >> system.lat[1] >> system.lat[2];
        cout << "Введите долготу:" << endl;
        cin >> system.lot[0] >> system.lot[1] >> system.lot[2];
        arr[i] = system;
    }
}

// Алгоритм сравнения двух структур по широте
bool compareLot(GPSSystem a, GPSSystem b)
{
    return (a.lot[0] < b.lot[0]) || (a.lot[0] == b.lot[0] && a.lot[1] < b.lot[1]) || (a.lot[0] == b.lot[0] && a.lot[1] == b.lot[1] && a.lot[2] < b.lot[2]);
}

// Алгоритм сравнения двух структур по долготе
bool compareLat(GPSSystem a, GPSSystem b)
{
    return (a.lat[0] < b.lat[0]) || (a.lat[0] == b.lat[0] && a.lat[1] < b.lat[1]) || (a.lat[0] == b.lat[0] && a.lat[1] == b.lat[1] && a.lat[2] < b.lat[2]);
}

// Возвращает наименование самого отдаленного по долготе устройства
string getLongestLat(GPSSystem *arr, int size)
{
    int idx = 0;
    for (int i = 1; i < size; i++)
    {
        if (compareLat(arr[idx], arr[i]))
        {
            idx = i;
        }
    }
    return arr[idx].name;
}

// Запись массива в файл
void saveArray(GPSSystem *arr, int size)
{
    ofstream file;
    file.open("systems.txt");
    file << "Наименование" << setw(12) << "Широта" << setw(12) << "Долгота" << endl;
    for (int i = 0; i < size; i++)
    {
        file << setw(15) << arr[i].name << setw(12) << arr[i].getLat() << setw(12) << arr[i].getLot() << endl;
    }
    file.close();
}