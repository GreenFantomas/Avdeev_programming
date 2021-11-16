#include <iostream>
using namespace std;

struct Transmitter
{
    int type;
    string modulation;
    float power;
    float resistance;
    float freaq;

    float amplify(int k) { return power * k; }

    Transmitter() {}

    Transmitter(int type, string modulation, float power, float resistance, float freaq)
        : type(type), modulation(modulation), power(power), resistance(resistance), freaq(freaq)
    {
    }
};

void show_struct(Transmitter *transmitter)
{
    cout << "Тип трансмиттера: " << transmitter->type << endl;
    cout << "Вид модуляции трансмиттера: " << transmitter->modulation << endl;
    cout << "Мощность входного сигнала трансмиттера: " << transmitter->power << endl;
    cout << "Значение входного сопротивления трансмиттера: " << transmitter->resistance << endl;
    cout << "Значение рабочей частоты трансмиттера: " << transmitter->freaq << endl;
}

void printMaxFreqTransmitter(Transmitter *transmitters, int size)
{
    float maxFreq = 0;
    int maxID = -1;
    for (int i = 0; i < size; i++)
    {
        if (transmitters[i].freaq > maxFreq)
        {
            maxFreq = transmitters[i].freaq;
            maxID = i;
        }
    }
    show_struct(&transmitters[maxID]);
}

int main()
{
    Transmitter transmitters[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Введите тип трансмиттера " << i + 1 << ": ";
        cin >> transmitters[i].type;
        cout << "Введите вид модуляции трансмиттера " << i + 1 << ": ";
        cin >> transmitters[i].modulation;
        cout << "Введите мощность входного сигнала трансмиттера " << i + 1 << ": ";
        cin >> transmitters[i].power;
        cout << "Введите значение входного сопротивления трансмиттера " << i + 1 << ": ";
        cin >> transmitters[i].resistance;
        cout << "Введите значение рабочей частоты трансмиттера " << i + 1 << ": ";
        cin >> transmitters[i].freaq;
        cout << endl;
    }

    cout << "Третий трансмиттер:" << endl;
    show_struct(&transmitters[2]);
    cout << endl;

    // 2. Функция принимающая массив структур
    cout << "Трансмиттер с наибольшей мощностью:" << endl;
    printMaxFreqTransmitter(transmitters, 4);
    cout << endl;

    // 3. Встроенный метод
    int k = 1;
    cout << "Введите коэффициент усиления: ";
    cin >> k;
    cout << "Усиление 3 трансмиттера. Мощность в итоге: " << transmitters[2].amplify(k)
         << endl
         << endl;

    // 4. Создание с помощью конструктора
    Transmitter transmitter(5, "AM", 50.2, 20.5, 144);
    show_struct(&transmitter);
}