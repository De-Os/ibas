#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int *ptrvalue, i, j, N, M;
    cout << "Количество строк массива = ";
    cin >> N;
    cout << "Количество столбцов массива = ";
    cin >> M;
    cout << endl;

    ptrvalue = (int *) malloc(N * M * sizeof(int));

    if (ptrvalue == NULL) exit(1);
    int a, b;
    cout << "Нижняя граница рандомизации = ";
    cin >> a;
    cout << "Верхняя граница рандомизации = ";
    cin >> b;
    cout << endl;

// заполнение массива случайными числами из диапазона [a,b]
    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            *(ptrvalue + i * M + j) = rand() % (b - a + 1) + a;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            cout << setw(5) << *(ptrvalue + i * M + j) << " |";
        cout << endl;
    }
    cout << endl;

// высвобождение памяти
    free(ptrvalue);
    return 0;
}
