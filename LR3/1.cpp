#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Complex
{
    float a; // действительная часть
    float b; // мнимая часть

    float z;  // модуль
    float fi; // аргумент

    // Пустой конструктор нулевого комплексного числа
    Complex() : a(0), b(0)
    {
    }

    // Конструктор комплексного числа формуле бинома Ньютона
    Complex(float a_, float b_)
    {
        a = a_;
        b = b_;

        z = sqrt(pow(a, 2) + pow(b, 2));
        if (z == 0)
            return;
        if (a > 0)
        {
            fi = atan((b) / (a));
        }
        else if (a < 0 && b > 0)
        {
            fi = M_PI + atan((b) / (a));
        }
        else if (a < 0 && b < 0)
        {
            fi = (-1) * M_PI + atan((b) / (a));
        }
        else if (a == 0)
        {
            fi = M_PI_2;
        }
    }

    // Возведение комплексного числа в куб по
    Complex cube()
    {
        Complex complex;
        complex.a = pow(a, 3) - 3 * a * pow(b, 2);
        complex.b = 3 * b * pow(a, 2) - pow(b, 3);
        return complex;
    }
};

// Заполнение массива пользователем
void fillArr(Complex *arr, int size, string name)
{
    for (int i = 0; i < size; i++)
    {
        float a, b;
        cout << "Введите вещественную часть " << i + 1 << " элемента массива " << name << ": ";
        cin >> a;
        cout << "Введите мнимую часть " << i + 1 << " элемента массива " << name << ": ";
        cin >> b;
        // Использование конструктора для создания комплексного числа
        // с рассчитанной тригонометрической формой
        arr[i] = Complex(a, b);
    }
}

// Вывод обычного массива в консоль
void printArray(Complex *arr, int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i].a;
        if (arr[i].b < 0)
        {
            cout << arr[i].b << "i";
        }
        else if (arr[i].b > 0)
        {
            cout << "+" << arr[i].b << "i";
        }
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// Вывод вектора в консоль
void printArray(vector<Complex> arr, int size)
{
    cout << "[";
    int i = 0;
    for (Complex a : arr)
    {
        cout << a.a;
        if (a.b < 0)
        {
            cout << a.b << "i";
        }
        else if (a.b > 0)
        {
            cout << "+" << a.b << "i";
        }
        if (i != arr.size() - 1)
        {
            cout << ", ";
        }
        i++;
    }
    cout << "]" << endl;
}

// Расчёт кубов чисел и вывод в консоль
void printCubeArray(Complex *arr, int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        Complex cube = arr[i].cube();
        cout << cube.a;
        if (cube.b < 0)
        {
            cout << cube.b << "i";
        }
        else if (cube.b > 0)
        {
            cout << "+" << cube.b << "i";
        }
        if (i != size - 1)
        {
            cout << ", ";
        }
        //free(cube);
    }
    cout << "]" << endl;
}

// Возвращает сумму двух чисел
Complex append(Complex *a, Complex *b)
{
    Complex complex;
    complex.a = a->a + b->a;
    complex.b = a->b + b->b;
    return complex;
}

// Возвращает поэлементное суммирование массивов в виде вектора
vector<Complex> append(Complex *a, Complex *b, int size)
{
    vector<Complex> arr;
    for (int i = 0; i < size; i++)
    {
        arr.push_back(append(&a[i], &b[i]));
    }
    return arr;
}

// Нахождение и печать минимального аргумента и его позиции
void printMinFi(Complex *arr, int size)
{
    int index = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i].fi < arr[index].fi)
        {
            index = i;
        }
    }
    cout << "Минимальный аргумент на " << index + 1 << " позиции: " << arr[index].fi << endl;
}

int main()
{
    int N;
    cout << "Введите размер массивов: ";
    cin >> N;

    Complex a[N], b[N];
    fillArr(a, N, "A");
    cout << endl;
    fillArr(b, N, "B");

    cout << "Массив A: ";
    printArray(a, N);
    cout << "Массив B: ";
    printArray(b, N);

    vector<Complex> sum = append(a, b, N);
    cout << "Массив поэлементного сложения A+B: ";
    printArray(sum, N);

    cout << "Массив кубов элементов из A: ";
    printCubeArray(a, N);
    cout << "Массив кубов элементов из B: ";
    printCubeArray(b, N);

    cout << endl
         << "Задание 2 для массива A" << endl;
    printMinFi(a, N);
    cout << endl
         << "Задание 2 для массива B" << endl;
    printMinFi(b, N);
}