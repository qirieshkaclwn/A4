#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int N, Znak, DNfact;
    double Tsum, sum, Eps, diff, Argx;
    cout << "Введите Eps-->>";
    cin >> Eps;
    if (Eps > 0)
    {
        Tsum = 1 / 2.71828; N = 0; Znak = 1; Argx = 1; DNfact = 1; sum = 1; diff = Tsum - sum;
        while (diff>Eps)
        {
            N++;

        }
    }
    else
    {
        cout << "ошибка eps должен быть больше 0";
        return 1;
    }
    /*
    double eps;      // точность вычислений
    double sum = 1.0;  // начальное значение суммы
    double term = 1.0; // первый член ряда
    int n = 1;        // счетчик для факториала
    const double exact_value = 1.0 / 2.71828; // точное значение 1/e
    double diff;      // разница между текущей суммой и точным значением

    // Ввод точности вычислений
    cout << "Введите точность: ";
    cin >> eps;

    if (eps > 0) {
        do {
            term *= -1.0 / n;  // вычисление следующего члена ряда
            sum += term;       // добавление члена к сумме
            n++;               // увеличение счетчика
            diff = fabs(sum - exact_value); // вычисление разницы с точным значением
        } while (diff > eps);   // цикл продолжается, пока разница больше точности

        // Вывод результатов
        cout << "Количество просуммированных элементов: " << n << endl;
        cout << "Сумма: " << sum << endl;
        cout << "Разница с точным значением: " << diff << endl;
        cout << "Точное значение: " << exact_value << endl;
    }
    else {
        cout << "Ошибка: точность должна быть положительной." << endl;
    }
    */
    return 0;
}
