#include <iostream>
#include <cmath>

using namespace std;

void No1() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") " << (
            abs(X) < 1 && abs(Y) < 1 && Y > -X
            ? "" : "не ") << "находится в штрихе" << endl;
}

void No2() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            pow(X, 2) + pow(Y, 2) >= pow(0.5, 2)
            && pow(X, 2) + pow(Y, 2) <= 1
            && X >= 0
            && Y >= 0
    )) {
        cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

void No3() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (Y > 0) {
        if (!(Y < 1 && Y <= -abs(X) + 1)) cout << "не ";
    } else {
        if (!(Y > -1 && pow(X, 2) + pow(Y, 2) <= 1)) cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

void No4() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            pow(X, 2) + pow(Y, 2) <= 1
            && Y >= 0
            && (X >= 0 || Y >= tan(45) * -X)
    ))
        cout << "не ";

    cout << "находится в заштрихованной области" << endl;
}

void No5() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            X >= 0
            && pow(X, 2) + pow(Y, 2) >= 1
            && pow(X, 2) + pow(Y, 2) <= pow(2, 2)
    )) {
        cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

void No6() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            Y <= -(1 / 3) * (X - 2)
            && Y <= 2 * (X + 1.5)
            && Y >= 1 / 4 * (X - 2)
    )) {
        cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

void No7() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            Y <= 2
            && Y >= 0
            && Y >= 2 * (X - 1)
            && Y >= -2 * (X + 1)
    )) {
        cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

void No8() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            abs(Y) <= 1
            && abs(X) <= 1
            && (Y >= X || Y >= -X)
    )) {
        cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

void No9() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            Y >= -(1 / 4) * (X - 2)
            && Y >= (1 / 2) * (X - 2)
            && Y >= -(X + 1)
    )) {
        cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

void No10() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            Y >= 0
            && Y <= 1 - pow(X, 2)
            && Y < X + 1
    )) {
        cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

void No11() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            X >= -2
            && X <= 1
            && Y >= -2
            && Y <= 1
            && (Y <= 0 || (X <= -1 || Y <= -X))
    )) {
        cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

void No12() {
    float X, Y;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;

    cout << "Точка (" << X << ", " << Y << ") ";

    if (!(
            Y >= -1
            && Y <= X + 2
            && Y <= -2 * (X + 0.5)
    )) {
        cout << "не ";
    }
    cout << "находится в заштрихованной области" << endl;
}

int main() {
    No1();
    No2();
    No3();
    No4();
    No5();
    No6();
    No7();
    No8();
    No9();
    No10();
    No11();
    No12();

    return 0;
}