#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>

using namespace std;

int dividersCount(int n) {
    int count = 2; // т.к. всегда 1 и само число

    if (n < 0) n = abs(n);

    if (n == 1) count--;
    for (int i = n / 2; i > 1; i--) {
        if (n % i == 0) count++;
    }
    return count;
}

int basicDividersCount(int n) {
    int count = 2; // т.к. всегда само число

    if (n < 0) n = abs(n);

    if (n == 1) count--;
    for (int i = n / 2; i > 1; i--) {
        if (n % i == 0) {
            if (dividersCount(i) == 2 || i == 1) count++;
        }
    }
    return count;
}

int smallestDigit(int n) {
    string s = to_string(n);
    int min = INT_MAX, temp;
    for (int i = 0; i < s.length(); i++) {
        temp = (int) s[i] - '0';
        if (temp < min) min = temp;
    }
    return min;
}

string biggestEvenDigit(int n) {
    string s = to_string(n);
    int max = INT_MIN, temp;
    for (int i = 0; i < s.length(); i++) {
        temp = (int) s[i] - '0';
        if (temp > max && temp % 2 == 0) max = temp;
    }
    return max == INT_MIN ? "Чётн. цифры отсуствуют" : to_string(max);
}

string evenDigitsSum(int n) {
    string s = to_string(n);
    int sum = 0, temp;
    bool haseven = false;
    for (int i = 0; i < s.length(); i++) {
        temp = (int) s[i] - '0';
        if (temp % 2 == 0) {
            haseven = true;
            sum += temp;
        }
    }
    return haseven ? to_string(sum) : "Чётн. цифры отсуствуют";
}

int factorial(int cur, int end, int result = 1) {
    result *= cur;
    cur++;
    if (cur > end) {
        return result;
    } else return factorial(cur, end, result);
}

void No1() {
    int N, i, count;
    cout << "Размерность последовательности: ";
    cin >> N;

    if (N <= 0) {
        cout << "Размерность должна быть больше нуля" << endl;
        return;
    }
    int array[N];

    for (i = 0; i < N; i++) {
        cout << "Введите число (" << i + 1 << " из " << N << "): ";
        cin >> array[i];
    }

    cout << setw(25) << right << "Номер 10.1" << endl;
    cout << setw(10) << left << "Число" << setw(20) << left << "Количество делителей" << endl;
    for (i = 0; i < N; i++) {
        cout << setw(10) << left << array[i] << setw(5) << "|" << setw(20) << left << dividersCount(array[i]) << endl;
    }
    cout << endl;

}

void No2() {
    int N, i, count;
    cout << "Размерность последовательности: ";
    cin >> N;

    if (N <= 0) {
        cout << "Размерность должна быть больше нуля" << endl;
        return;
    }
    int array[N];

    for (i = 0; i < N; i++) {
        cout << "Введите число (" << i + 1 << " из " << N << "): ";
        cin >> array[i];
    }

    cout << setw(25) << right << "Номер 10.2" << endl;
    cout << setw(10) << left << "Число" << setw(20) << left << "Кол-во прост. дел." << endl;
    for (i = 0; i < N; i++) {
        cout << setw(10) << left << array[i] << setw(5) << "|" << setw(20) << left << basicDividersCount(array[i])
             << endl;
    }
    cout << endl;

}

void No3() {
    int N, i, count;
    cout << "Размерность последовательности: ";
    cin >> N;

    if (N <= 0) {
        cout << "Размерность должна быть больше нуля" << endl;
        return;
    }
    int array[N];

    for (i = 0; i < N; i++) {
        cout << "Введите число (" << i + 1 << " из " << N << "): ";
        cin >> array[i];
    }

    cout << setw(25) << right << "Номер 10.3" << endl;
    cout << setw(10) << left << "Число" << setw(20) << left << "Мин. цифра" << endl;
    for (i = 0; i < N; i++) {
        cout << setw(10) << left << array[i] << setw(5) << "|" << setw(20) << left << smallestDigit(array[i])
             << endl;
    }
    cout << endl;

}

void No4() {
    int N, i, count;
    cout << "Размерность последовательности: ";
    cin >> N;

    if (N <= 0) {
        cout << "Размерность должна быть больше нуля" << endl;
        return;
    }
    int array[N];

    for (i = 0; i < N; i++) {
        cout << "Введите число (" << i + 1 << " из " << N << "): ";
        cin >> array[i];
    }

    cout << setw(25) << right << "Номер 10.4" << endl;
    cout << setw(10) << left << "Число" << setw(20) << left << "Макс. чётн. цифра" << endl;
    for (i = 0; i < N; i++) {
        cout << setw(10) << left << array[i] << setw(5) << "|" << setw(20) << left << biggestEvenDigit(array[i])
             << endl;
    }
    cout << endl;

}

void No5() {
    int N, i, count;
    cout << "Размерность последовательности: ";
    cin >> N;

    if (N <= 0) {
        cout << "Размерность должна быть больше нуля" << endl;
        return;
    }
    int array[N];

    for (i = 0; i < N; i++) {
        cout << "Введите число (" << i + 1 << " из " << N << "): ";
        cin >> array[i];
    }

    cout << setw(25) << right << "Номер 10.5" << endl;
    cout << setw(10) << left << "Число" << setw(20) << left << "Сум. чётн. цифра" << endl;
    for (i = 0; i < N; i++) {
        cout << setw(10) << left << array[i] << setw(5) << "|" << setw(20) << left << evenDigitsSum(array[i])
             << endl;
    }
    cout << endl;

}

void NoDop() {
    int N;
    cout << "Введите число: ";
    cin >> N;

    if (N <= 0) {
        cout << "Число должно быть больше нуля" << endl;
        return;
    }

    cout << "Факториал: " << factorial(1, N) << endl;
}

int main() {
    setlocale(LC_ALL, "Rus");

    /*cout << "Номер 1" << endl;
    No1();
    cout << endl << "Номер 2" << endl;
    No2();
    cout << endl << "Номер 3" << endl;
    No3();
    cout << endl << "Номер 4" << endl;
    No4();
    cout << endl << "Номер 5" << endl;
    No5();*/
    cout << endl << "Дополнительное задание:" << endl;
    NoDop();

    return 0;
}