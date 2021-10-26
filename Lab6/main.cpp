#include <iostream>
#include <clocale>

using namespace std;

void No1() {
    int N, i, a, b, j, g, sum = 0, max = INT_MIN;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        X[i] = rand() % (b - a + 1) + a;
        if (X[i] > max) {
            max = X[i];
            g = i;
        }

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;
    for (i = g + 1; i < N; i++) sum += X[i];

    cout << "Сумма чисел после максимального: " << sum << endl;
}

void No2() {
    int N, i, a, b, j, temp, sum = 0;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }

    for (i = 0; i < N; i++) X[i] = rand() % (b - a + 1) + a;
    for (i = 0; i < N; i++) {
        for (j = N - 1; j > i; j--) {
            if (X[j - 1] > X[j]) {
                temp = X[j - 1];
                X[j - 1] = X[j];
                X[j] = temp;
            }
        }
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        if (X[i] >= 0) sum += X[i];

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl << "Сумма положительных элементов: " << sum << endl;
}

void No3() {
    int N, i, a, b, j, count = 0, max = INT_MIN;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        X[i] = rand() % (b - a + 1) + a;
        if (X[i] > max) max = X[i];

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;
    for (i = 0; i < N; i++) {
        if (X[i] == max) count++;
    }

    cout << "Максимальное число: " << max << endl << "Количество таких чисел: " << count << endl;
}

void No4() {
    int N, i, a, b, sum = 0, max = INT_MIN;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        X[i] = rand() % (b - a + 1) + a;

        if (abs(X[i]) > max) max = abs(X[i]);
        sum += abs(X[i]);

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;

    cout << "Сумма абсолютных значений: " << sum << endl << "Максимальное число по модулю: " << max << endl;
}

void No5() {
    int N, i, a, b, k1 = 0, k2 = 0, k3 = 0;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        X[i] = rand() % (b - a + 1) + a;

        if (X[i] > 0) {
            k1++;
        } else if (X[i] < 0) {
            k2++;
        } else k3++;

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;

    cout << "Кол-во положительных: " << k1 << endl << "Кол-во отрицательных: " << k2 << endl << "Кол-во нулевых: " << k3
         << endl;
}

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Номер 1" << endl;
    No1();
    cout << endl << "Номер 2" << endl;
    No2();
    cout << endl << "Номер 3" << endl;
    No3();
    cout << endl << "Номер 4" << endl;
    No4();
    cout << endl << "Номер 5" << endl;
    No5();

    return 0;
}