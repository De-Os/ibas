#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>


using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int *array, i, j, k, N, M;
    cout << "Кол-во строк массива = ";
    cin >> N;
    cout << "Кол-во столбцов массива = ";
    cin >> M;
    cout << endl;

    array = (int *) malloc(N * M * sizeof(int));
    if (array == NULL) exit(1);

    int a, b;
    cout << "Нижняя граница рандомизации = ";
    cin >> a;
    cout << "Верхняя граница рандомизации = ";
    cin >> b;
    cout << endl;

    srand(time(NULL));
    if (a > b) {
        int r = a;
        a = b;
        b = r;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            *(array + i * M + j) = rand() % (b - a + 1) + a;
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            for (k = 0; k < M; k++) {
                if (*(array + i * M + j) < *(array + i * M + k)) {
                    int tmp = *(array + i * M + j);
                    *(array + i * M + j) = *(array + i * M + k);
                    *(array + i * M + k) = tmp;
                }
            }
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << setw(5) << *(array + i * M + j) << " |";
        }
        cout << endl;
    }
    cout << endl;

    free(array);
    return 0;
}