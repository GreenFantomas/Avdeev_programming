#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    struct tm start;
    struct tm end;

    cout << "Введите d0: ";
    cin >> start.tm_mday;
    cout << "Введите m0: ";
    cin >> start.tm_mon;
    cout << "Введите y0: ";
    int year;
    cin >> year;
    start.tm_year = year - 1900;

    cout << "Введите d1: ";
    cin >> end.tm_mday;
    cout << "Введите m1: ";
    cin >> end.tm_mon;
    cout << "Введите y1: ";
    cin >> year;
    end.tm_year = year - 1900;

    time_t s = mktime(&start);
    time_t e = mktime(&end);

    cout << "Кол-во дней разницы: " << abs(difftime(s, e) / (60 * 60 * 24)) << endl;
}
//avdeev@mirea.ru