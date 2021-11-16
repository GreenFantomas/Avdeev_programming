#include <iostream>
#include <cmath>
using namespace std;

// moveCoord - вычисление новыйх координат X и Z
void moveCoord(float *X, float *Z, float fi)
{
    *X = (*X) * cos(fi) + (*Z) * sin(fi);
    *Z = (-1) * (*X) * sin(fi) + (*Z) * cos(fi);
}

// moveCoord - вычисление координаты Y
void moveCoord(float *Y, float A)
{
    *Y = (*Y) - A;
}

// moveCoord - вычисление новых координат после сдвига
void moveCoord(float *X, float *Y, float *Z, float fi, float A)
{
    moveCoord(X, Z, fi);
    moveCoord(Y, A);
}

// fillFloat - заполнение пользователем значение переменной с плавающей точкой
void fillFloat(float *a, string comment)
{
    cout << "Введите " << comment << ": ";
    cin >> *a;
}

int main()
{
    float X, Y, Z, fi, A;
    fillFloat(&X, "X");
    fillFloat(&Y, "Y");
    fillFloat(&Z, "Z");
    fillFloat(&fi, "угол φ");
    fillFloat(&A, "A");

    // преобразование градусов угла в радианы
    fi = fi * M_PI / 180.0;

    moveCoord(&X, &Y, &Z, fi, A);
    cout << "Новые координаты: (" << X << "," << Y << "," << Z << ")" << endl;
}