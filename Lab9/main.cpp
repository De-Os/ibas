#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

#define LENGTH 101

void No1() {
    char str[LENGTH];
    char *temp = 0;
    int length, count = 0;
    cout << "Введите текст не более " << (LENGTH - 1) << " символов:" << endl;
    cin.getline(str, LENGTH);
    cout << "Введите длину слова для поиска: ";
    cin >> length;

    if (length <= 0) {
        cout << "Длина слова должна быть больше нуля" << endl;
        return;
    }

    temp = strtok(str, " ");

    while (temp) {
        if (strlen(temp) == length) count++;
        temp = strtok(0, " ");
    }

    cout << "Кол-во слов с длиной " << length << ": " << count << endl;
}

void No2() {
    char str[LENGTH], temp[1];
    int array[LENGTH];
    int i = 0, a_i = 0;
    cout << "Введите текст не более " << (LENGTH - 1) << " символов:" << endl;
    cin.getline(str, LENGTH);

    for (i = 0; i < LENGTH; i++) {
        if (str[i]) {
            temp[0] = str[i];
            if (atoi(temp) != 0 or str[i] == '0') {
                array[a_i] = atoi(temp);
                a_i++;
            }
        } else break;
    }

    if (!array[0]) {
        cout << "В строке нет чисел";
    } else {
        cout << "Массив с числами: ";
        for (i = 0; i < a_i; i++) {
            cout << array[i];
            if (i < a_i - 1 && array[i + 1]) cout << ", ";
        }
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Номер 1" << endl;
    No1();
    cout << endl << "Номер 2" << endl;
    No2();

    return 0;
}