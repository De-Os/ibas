#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

bool isEasy(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void No1() {
    int a, b, i, j, k, l, N, M, count, max = INT_MIN, rows_without_zero = 0;
    bool zero;
    cout << "Кол-во строк матрицы = ";
    cin >> N;
    cout << "Кол-во столбцов матрицы = ";
    cin >> M;
    int array[N][M];

    cout << "Нижняя граница рандомизации = ";
    cin >> a;
    cout << "Верхняя граница рандомизации = ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    for (i = 0; i < N; i++) {
        zero = false;
        for (j = 0; j < M; j++) {
            array[i][j] = rand() % (b - a + 1) + a;
            if (array[i][j] == 0) zero = true;
        }
        if (!zero) rows_without_zero++;
    }

    cout << "Матрица: " << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << setw(5) << array[i][j] << " |";
        }
        cout << endl;
    }
    cout << endl << "Строк без нулей: " << rows_without_zero << endl;


    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            count = 0;

            for (k = 0; k < N; k++) {
                for (l = 0; l < M; l++) {
                    if (array[i][j] == array[k][l]) count++;
                }
            }

            if (count > 1) {
                if (array[i][j] > max) max = array[i][j];
            }
        }
    }
    cout << "Максимальное число, встречающееся более одного раза: " << max << endl;
}

void No2() {
    int a, b, i, j, k, N, M, count, max_index, max = 0, rows_with_zero = 0;
    bool zero;
    cout << "Кол-во строк матрицы = ";
    cin >> N;
    cout << "Кол-во столбцов матрицы = ";
    cin >> M;
    int array[N][M];

    cout << "Нижняя граница рандомизации = ";
    cin >> a;
    cout << "Верхняя граница рандомизации = ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    for (i = 0; i < N; i++) {
        zero = false;
        for (j = 0; j < M; j++) {
            array[i][j] = rand() % (b - a + 1) + a;
            if (array[i][j] == 0) zero = true;
        }
        if (zero) rows_with_zero++;
    }

    cout << "Матрица: " << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << setw(5) << array[i][j] << " |";
        }
        cout << endl;
    }
    cout << endl << "Строк с нулями: " << rows_with_zero << endl;


    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            count = 1;

            if (j != M - 1) {
                for (k = j + 1; k < M; k++) {
                    if (array[i][j] == array[i][k]) {
                        count++;
                    } else break;
                }
            }

            if (count > max) {
                max = count;
                max_index = i;
            }
        }
    }
    cout << "Номер строки с максимальным количеством одинаковых элементов: " << max_index << endl;
}

void No3() {
    int a, b, i, j, k, d, N, temp_product, max, product = 1;
    bool negative, has_positive_row = false;
    cout << "Кол-во строк и столбцов матрицы = ";
    cin >> N;

    int array[N][N];

    cout << "Нижняя граница рандомизации = ";
    cin >> a;
    cout << "Верхняя граница рандомизации = ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            array[i][j] = rand() % (b - a + 1) + a;
        }
    }

    cout << "Матрица: " << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << setw(5) << array[i][j] << " |";
        }
        cout << endl;
    }
    cout << endl;


    for (i = 0; i < N; i++) {
        temp_product = 1;
        negative = false;
        for (j = 0; j < N; j++) {
            temp_product *= array[i][j];
            if (array[i][j] < 0) negative = true;
        }
        if (!negative) {
            has_positive_row = true;
            product *= temp_product;
        }
    }

    cout << "Произведение элементов строк матрицы, которые не содержат отрицательных элементов: ";
    if (has_positive_row) cout << product; else cout << "такие строки отсутствуют";
    cout << endl;

    max = array[0][N - 1];
    for (i = 1; i < N; i++) {
        k = d = INT_MIN;
        for (j = 0; j < N - i; j++) {
            k += array[i + j][j];
            d += array[j][i + j];
        }
        if (k > max) max = k;
        if (d > max) max = d;
    }
    cout << "Максимум среди сумм элементов диагоналей, параллельных главной: " << max << endl;
}

void No7() {
    int a, b, i, j, k, N, M, count, max_index, max = 0, rows_with_zero = 0;
    bool zero;
    cout << "Кол-во строк матрицы = ";
    cin >> N;
    cout << "Кол-во столбцов матрицы = ";
    cin >> M;
    int array[N][M];

    cout << "Нижняя граница рандомизации = ";
    cin >> a;
    cout << "Верхняя граница рандомизации = ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    for (i = 0; i < N; i++) {
        zero = false;
        for (j = 0; j < M; j++) {
            array[i][j] = rand() % (b - a + 1) + a;
            if (array[i][j] == 0) zero = true;
        }
        if (zero) rows_with_zero++;
    }

    cout << "Матрица: " << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << setw(5) << array[i][j] << " |";
        }
        cout << endl;
    }
    cout << endl << "Строк с нулями: " << rows_with_zero << endl;


    for (j = 0; j < M; j++) {
        for (i = 0; i < N; i++) {
            count = 1;

            if (i != N - 1) {
                for (k = i + 1; k < N; k++) {
                    if (array[i][j] == array[k][j]) {
                        count++;
                    } else break;
                }
            }

            if (count > max) {
                max = count;
                max_index = j;
            }
        }
    }
    cout << "Номер столбца с максимальным количеством одинаковых элементов: " << max_index << endl;
}

void No10() {
    int a, b, i, j, N, M, count, sum = 0;
    cout << "Кол-во строк матрицы = ";
    cin >> N;
    cout << "Кол-во столбцов матрицы = ";
    cin >> M;
    int array[N][M];

    cout << "Нижняя граница рандомизации = ";
    cin >> a;
    cout << "Верхняя граница рандомизации = ";
    cin >> b;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            array[i][j] = rand() % (b - a + 1) + a;
            if (array[i][j] > 0) sum += array[i][j];
        }
    }

    cout << "Матрица: " << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << setw(5) << array[i][j] << " |";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Номера столбцов с 2 и более простыми числами: ";
    for (j = 0; j < M; j++) {
        count = 1;
        for (i = 0; i < N; i++) {
            if (isEasy(array[i][j])) count++;
        }
        if (count > 2) cout << " " << j;
    }
    cout << endl << "Сумма положительных элементов матрицы: " << sum << endl;
}

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Номер 1" << endl;
    No1();
    cout << endl << "Номер 2" << endl;
    No2();
    cout << endl << "Номер 3" << endl;
    No3();
    cout << endl << "Номер 7" << endl;
    No7();
    cout << endl << "Номер 10" << endl;
    No10();

    return 0;
}