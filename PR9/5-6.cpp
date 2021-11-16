#include <iostream>
using namespace std;

struct Complex
{
    float real;
    float imag;
};

void printComplex(Complex *complex)
{
    if ((*complex).imag >= 0)
    {
        cout << (*complex).real << "+" << (*complex).imag << "i" << endl;
    }
    else
    {
        cout << (*complex).real << (*complex).imag << "i" << endl;
    }
}

Complex fillComplex(string comment)
{
    Complex complex;
    cout << "Введите действительную часть " << comment << " числа: ";
    cin >> complex.real;
    cout << "Введите мнимую часть " << comment << " числа: ";
    cin >> complex.imag;
    return complex;
}

Complex append(Complex *a, Complex *b)
{
    Complex result;
    result.real = (*a).real + (*b).real;
    result.imag = (*a).imag + (*b).imag;
    return result;
}

Complex multiplie(Complex *a, Complex *b)
{
    Complex result;
    result.real = (*a).real * (*b).real - (*a).imag * (*b).imag;
    result.imag = (*a).real * (*b).imag + (*a).imag * (*b).real;
    return result;
}

int main()
{
    Complex complex1, complex2;
    complex1 = fillComplex("первого");
    complex2 = fillComplex("второго");

    cout << "Первое число: ";
    printComplex(&complex1);
    cout << "Второе число: ";
    printComplex(&complex2);

    Complex app = append(&complex1, &complex2);
    Complex multi = multiplie(&complex1, &complex2);

    cout << "Сложение чисел: ";
    printComplex(&app);
    cout << "Умножение первого числа на второе: ";
    printComplex(&multi);
}