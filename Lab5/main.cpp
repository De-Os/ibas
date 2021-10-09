#include <iostream>
#include <iomanip>
#include <clocale>
#include <cmath>
#include <sstream>

using namespace std;

int epsilon(double number) {
    std::stringstream ss;
    ss << std::setprecision(15) << number;
    std::string strNum = ss.str();
    size_t pos = strNum.find('.');
    return pos == strNum.npos ? 0 : strNum.size() - 1 - pos;
}

string prd(const double x, const int decDigits) {
    stringstream ss;
    ss << fixed;
    ss.precision(decDigits);
    ss << x;
    return ss.str();
}

int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) result *= i;
    return result;
}

void No1() {
    const int MaxIter = 500;
    int count = 0;
    double Xn, Xk, dX, eps, x;
    cout << "[1] Интервал: от Xn = ";
    cin >> Xn;
    cout << "до Xk = ";
    cin >> Xk;
    cout << "с шагом dX = ";
    cin >> dX;
    cout << "Точность = ";
    cin >> eps;
    bool done = true, hat = true;
    for (int i = 0; Xn < Xk; Xn += dX) {
        x = Xn;
        for (int n = 1; epsilon(x) < eps; n++) {
            x += pow(-1, n) * (pow(Xn, n + 1) / (n + 1));

            if (n > MaxIter) {
                cout << "Ряд расходится" << endl;
                done = false;
                break;
            }

            count = n;
        }

        if (done) {
            if (hat) {
                cout << setw(25) << right << "Итог" << endl;
                cout << setw(10) << left << "При x=" << setw(20) << left << "Значение функции: " << setw(20) << left
                     << "Кол-во членов ряда" << endl;
                hat = false;
            }
            cout << setw(10) << left << Xn << setw(20) << left << prd(x, eps) << setw(20) << left << count << endl;
        }
        x = Xn;
    }
}

void No2() {
    const int MaxIter = 500;
    int count = 0;
    double Xn, Xk, dX, eps, x;
    cout << "[2] Интервал: от Xn = ";
    cin >> Xn;
    cout << "до Xk = ";
    cin >> Xk;
    cout << "с шагом dX = ";
    cin >> dX;
    cout << "Точность = ";
    cin >> eps;
    bool done = true, hat = true;
    for (int i = 0; Xn < Xk; Xn += dX) {
        x = Xn;
        for (int n = 1; epsilon(x) < eps; n++) {
            x += pow(-1, n) * (pow(Xn, n + 1) / sqrt(n + 1));

            if (n > MaxIter) {
                cout << "Ряд расходится" << endl;
                done = false;
                break;
            }

            count = n;
        }

        if (done) {
            if (hat) {
                cout << setw(25) << right << "Итог" << endl;
                cout << setw(10) << left << "При x=" << setw(20) << left << "Значение функции: " << setw(20) << left
                     << "Кол-во членов ряда" << endl;
                hat = false;
            }
            cout << setw(10) << left << Xn << setw(20) << left << prd(x, eps) << setw(20) << left << count << endl;
        }
        x = Xn;
    }
}

void No3() {
    const int MaxIter = 500;
    int count = 0;
    double Xn, Xk, dX, eps, x;
    cout << "[3] Интервал: от Xn = ";
    cin >> Xn;
    cout << "до Xk = ";
    cin >> Xk;
    cout << "с шагом dX = ";
    cin >> dX;
    cout << "Точность = ";
    cin >> eps;
    bool done = true, hat = true;
    for (int i = 0; Xn < Xk; Xn += dX) {
        x = 1;
        for (int n = 1; epsilon(x) < eps; n++) {
            x += pow(-1, n) * (pow(Xn, n) / factorial(n));

            if (n > MaxIter) {
                cout << "Ряд расходится" << endl;
                done = false;
                break;
            }

            count = n;
        }

        if (done) {
            if (hat) {
                cout << setw(25) << right << "Итог" << endl;
                cout << setw(10) << left << "При x=" << setw(20) << left << "Значение функции: " << setw(20) << left
                     << "Кол-во членов ряда" << endl;
                hat = false;
            }
            cout << setw(10) << left << Xn << setw(20) << left << prd(x, eps) << setw(20) << left << count << endl;
        }
        x = Xn;
    }
}

void No4() {
    const int MaxIter = 500;
    int count = 0;
    double Xn, Xk, dX, eps, x;
    cout << "[4] Интервал: от Xn = ";
    cin >> Xn;
    cout << "до Xk = ";
    cin >> Xk;
    cout << "с шагом dX = ";
    cin >> dX;
    cout << "Точность = ";
    cin >> eps;
    bool done = true, hat = true;
    for (int i = 0; Xn < Xk; Xn += dX) {
        x = 1;
        for (int n = 1; epsilon(x) < eps; n++) {
            x += pow(-1, n) * (pow(Xn, 2 * n) / factorial(2 * n));

            if (n > MaxIter) {
                cout << "Ряд расходится" << endl;
                done = false;
                break;
            }

            count = n;
        }

        if (done) {
            if (hat) {
                cout << setw(25) << right << "Итог" << endl;
                cout << setw(10) << left << "При x=" << setw(20) << left << "Значение функции: " << setw(20) << left
                     << "Кол-во членов ряда" << endl;
                hat = false;
            }
            cout << setw(10) << left << Xn << setw(20) << left << prd(x, eps) << setw(20) << left << count << endl;
        }
        x = Xn;
    }
}

void No5() {
    const int MaxIter = 500;
    int count = 0;
    double Xn, Xk, dX, eps, x;
    cout << "[5] Интервал: от Xn = ";
    cin >> Xn;
    cout << "до Xk = ";
    cin >> Xk;
    cout << "с шагом dX = ";
    cin >> dX;
    cout << "Точность = ";
    cin >> eps;
    bool done = true, hat = true;
    for (int i = 0; Xn < Xk; Xn += dX) {
        x = 1;
        int j = 3;
        for (int n = 1; epsilon(x) < eps; n++) {
            x += pow(-1, n) * (pow(Xn, j) / factorial(j));

            if (n > MaxIter) {
                cout << "Ряд расходится" << endl;
                done = false;
                break;
            }

            count = n;
            j += 2;
        }

        if (done) {
            if (hat) {
                cout << setw(25) << right << "Итог" << endl;
                cout << setw(10) << left << "При x=" << setw(20) << left << "Значение функции: " << setw(20) << left
                     << "Кол-во членов ряда" << endl;
                hat = false;
            }
            cout << setw(10) << left << Xn << setw(20) << left << prd(x, eps) << setw(20) << left << count << endl;
        }
        x = Xn;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    No1();
    No2();
    No3();
    No4();
    No5();
    return 0;
}
