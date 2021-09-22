#include <iostream>
#include <cmath>

using namespace std;

void No1() {
    int X, sum = 0;
    cout << "X = ";
    cin >> X;

    while (X != 0) {
        sum += X % 10;
        X /= 10;
    }

    cout << "sum = " << sum << endl << endl;
}

void No2() {
    int X;
    string result;
    cout << "X = ";
    cin >> X;
    result = to_string(X);
    for (int i = result.length() - 1; i >= 0; i--) cout << result[i];
    cout << endl << endl;
}

void No3() {
    int X, entrance = 1, floor = 1;
    cout << "(1-100) X = ";
    cin >> X;

    while (X > 5 * 4) {
        entrance++;
        X -= 5 * 4;
    }
    while (X > 4) {
        floor++;
        X -= 4;
    }

    cout << "entrance = " << entrance << endl << "floor = " << floor << endl << endl;
}

void No4() {
    int X1, X2, Y1, Y2;
    cout << "X1 = ";
    cin >> X1;
    cout << "Y1 = ";
    cin >> Y1;
    cout << "X2 = ";
    cin >> X2;
    cout << "Y2 = ";
    cin >> Y2;
    cout << "from (X1; X2) to (Y1; Y2) = " << distance(X1, Y1, X2, Y2) << endl << endl;
}

void No5() {
    int X1, X2, X3, Y1, Y2, Y3;
    cout << "X1 = ";
    cin >> X1;
    cout << "Y1 = ";
    cin >> Y1;
    cout << "X2 = ";
    cin >> X2;
    cout << "Y2 = ";
    cin >> Y2;
    cout << "X3 = ";
    cin >> X3;
    cout << "Y3 = ";
    cin >> Y3;
    cout << "perimeter = "(distance(X1, Y1, X2, Y2) + distance(X2, Y2, X3, Y3) + distance(X3, Y3, X1, Y1)) << endl;
}

float distance(int X1, int Y1, int X2, int Y2) {
    return sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
}

int main() {
    No1();
    No2();
    No3();
    No4();
    No5();

    return 0;
}