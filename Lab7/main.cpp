#include <iostream>
#include <clocale>

using namespace std;

void No1() {
    int N, i, j, temp, r, a, b, sum = 0, product = 1, max_i = -1, min_i = -1, max = INT_MIN, min = INT_MAX;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        r = a;
        a = b;
        b = r;
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        X[i] = rand() % (b - a + 1) + a;

        if (X[i] > max) {
            max = X[i];
            max_i = i;
        } else if (X[i] < min) {
            min = X[i];
            min_i = i;
        }

        if (X[i] < 0) sum += X[i];

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;

    if (max_i < min_i) {
        r = max_i;
        max_i = min_i;
        min_i = r;
    }
    for (i = min_i + 1; i <= max_i - 1; i++) product *= X[i];

    cout << "Сумма отрицательных: " << sum << endl << "Произведение чисел  между минимальным и максимальным: "
         << product << endl;

    for (i = 0; i < N; i++) {
        for (j = N - 1; j > i; j--) {
            if (X[j - 1] > X[j]) {
                temp = X[j - 1];
                X[j - 1] = X[j];
                X[j] = temp;
            }
        }
    }

    cout << "Отсортированный по возрастанию массив: ";
    for (i = 0; i < N; i++) {
        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;
}

void No2() {
    int N, i, j, temp, r, a, b, sum = 0, product = 1, max_i = -1, min_i = -1, max = INT_MIN, min = INT_MAX;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        r = a;
        a = b;
        b = r;
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        X[i] = rand() % (b - a + 1) + a;

        if (abs(X[i]) > max) {
            max = abs(X[i]);
            max_i = i;
        } else if (abs(X[i]) < min) {
            min = abs(X[i]);
            min_i = i;
        }

        if (X[i] > 0) sum += X[i];

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;

    if (max_i < min_i) {
        r = max_i;
        max_i = min_i;
        min_i = r;
    }
    for (i = min_i + 1; i <= max_i - 1; i++) product *= X[i];

    cout << "Сумма положительных: " << sum << endl << "Произведение чисел  между минимальным и максимальным по модулю: "
         << product << endl;

    for (i = 0; i < N; i++) {
        for (j = N - 1; j > i; j--) {
            if (X[j - 1] < X[j]) {
                temp = X[j - 1];
                X[j - 1] = X[j];
                X[j] = temp;
            }
        }
    }

    cout << "Отсортированный по убыванию массив: ";
    for (i = 0; i < N; i++) {
        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;
}

void No3() {
    int N, i, j, temp, r, a, b, sum = 0, product = 1, max_i = -1, min_i = -1;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        r = a;
        a = b;
        b = r;
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        X[i] = rand() % (b - a + 1) + a;

        if (X[i] == 0) {
            max_i = i;
            if (i < min_i) min_i = i;
        }

        if (i % 2 == 0) sum += X[i];

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;

    if (max_i != -1 && min_i != -1 && min_i != max_i) {
        if (max_i < min_i) {
            r = max_i;
            max_i = min_i;
            min_i = r;
        }
        for (i = min_i + 1; i <= max_i - 1; i++) product *= X[i];
    }

    cout << "Сумма элементов с чётными номерами: " << sum << endl
         << "Произведение чисел  между первым и последним нулевыми элементами: "
         << product << endl;

    for (i = 0; i < N; i++) {
        for (j = N - 1; j > i; j--) {
            if (X[j - 1] < X[j]) {
                temp = X[j - 1];
                X[j - 1] = X[j];
                X[j] = temp;
            }
        }
    }

    cout << "Отсортированный массив: ";
    for (i = 0; i < N; i++) {
        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;
}

void No4() {
    int N, i, a, b, r, j, temp, sum = 0, free = 0, product = 1, max_i = -1, min_i = -1;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        r = a;
        a = b;
        b = r;
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        X[i] = rand() % (b - a + 1) + a;

        if (X[i] < 0) {
            max_i = i;
            if (i < min_i) min_i = i;
        }

        if (i % 2 != 0) sum += X[i];

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;

    if (max_i != -1 && min_i != -1 && min_i != max_i) {
        if (max_i < min_i) {
            r = max_i;
            max_i = min_i;
            min_i = r;
        }
        for (i = min_i + 1; i <= max_i - 1; i++) product *= X[i];
    }

    cout << "Сумма элементов с нечётными номерами: " << sum << endl
         << "Произведение чисел  между первым и последним отрицательными элементами: "
         << product << endl;

    for (i = 0; i < N; i++) {
        if (abs(X[i]) <= 1) {
            free++;
            for (j = i; j < N - 1; j++) {
                X[j] = X[j + 1];
            }
        }
    }
    for (i = N - free - 1; i < N; i++) X[i] = 0;

    cout << "Отсортированный массив: ";
    for (i = 0; i < N; i++) {
        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;
}

void No5() {
    int N, i, a, b, d, e, r, j, temp, sum = 0, free = 0, max = INT_MIN, max_i = -1;
    cout << "Размер массива: ";
    cin >> N;
    int X[N];
    cout << "Нижняя граница рандомизации: ";
    cin >> a;
    cout << "Верхняя граница рандомизации: ";
    cin >> b;
    cout << "Нижняя граница модуля для исключения: ";
    cin >> d;
    cout << "Верхняя граница модуля для исключения: ";
    cin >> e;

    srand(time(NULL));
    if (a > b) {
        r = a;
        a = b;
        b = r;
    }
    cout << "Массив: ";
    for (i = 0; i < N; i++) {
        X[i] = rand() % (b - a + 1) + a;

        if (X[i] > 0) max_i = i;
        if (X[i] > max) max = X[i];

        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;

    if (max_i != -1) {
        for (i = 0; i < max_i; i++) sum += X[i];
    }

    cout << "Сумма элементов до последнего положительного числа: " << sum << endl
         << "Максимальное число: "
         << max << endl;

    for (i = 0; i < N; i++) {
        if (abs(X[i]) >= d && abs(X[i]) <= e) {
            free++;
            for (j = i; j < N - 1; j++) {
                X[j] = X[j + 1];
            }
        }
    }
    for (i = N - free - 1; i < N; i++) X[i] = 0;

    cout << "Отсортированный массив: ";
    for (i = 0; i < N; i++) {
        cout << X[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;
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