#include <iostream>
#include <cmath>

using namespace std;

void No1() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = 2 * pow(sin(3 * M_PI - 2 * A) * pow(cos(5 * M_PI - 2 * A), 2), 2);
    cout << "Z1 = " << Z << endl;
    Z = 1 / 4 - 1 / 4 * sin(5 / 2 * M_PI - 8 * A);
    cout << "Z2 = " << Z << endl << endl;
}

void No2() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = cos(A) + sin(A) + cos(3 * A) + sin(3 * A);
    cout << "Z1 = " << Z << endl;
    Z = 2 * sqrt(2) * cos(2 * A) * sin(M_PI / 4 + 2 * A);
    cout << "Z2 = " << Z << endl << endl;
}

void No3() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = (sin(2 * A) + sin(5 * A) - sin(3 * A)) / (cos(A) + 1 - 2 * pow(sin(2 * A), 2));
    cout << "Z1 = " << Z << endl;
    Z = 2 * sin(2 * A);
    cout << "Z2 = " << Z << endl << endl;
}

void No4() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = (sin(2 * A) + sin(5 * A) - sin(3 * A)) / (cos(A) - cos(3 * A) + cos(5 * A));
    cout << "Z1 = " << Z << endl;
    Z = tan(3 * A);
    cout << "Z2 = " << Z << endl << endl;
}

void No5() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = 1 - 1 / 4 * pow(sin(2 * A), 2) + cos(2 * A);
    cout << "Z1 = " << Z << endl;
    Z = pow(cos(A), 2) + pow(cos(A), 4);
    cout << "Z2 = " << Z << endl << endl;
}

void No6() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = cos(A) + cos(2 * A) + cos(6 * A) + cos(7 * A);
    cout << "Z1 = " << Z << endl;
    Z = 4 * cos(A / 2) * cos((5 / 2) * A) * cos(4 * A);
    cout << "Z2 = " << Z << endl << endl;
}

void No7() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = pow(cos((3 / 8) * M_PI - A / 4), 2) - pow(cos((11 / 8) * M_PI + A / 4), 2);
    cout << "Z1 = " << Z << endl;
    Z = (sqrt(2) / 2) * sin(A / 2);
    cout << "Z2 = " << Z << endl << endl;
}

void No8() {
    double X, Y;
    cout << "X = ";
    cin >> X;
    cout << "Y = ";
    cin >> Y;
    double Z = pow(cos(X), 4) + pow(sin(Y), 2) + 1 / 4 * pow(sin(2 * X), 2) - 1;
    cout << "Z1 = " << Z << endl;
    Z = sin(X + Y) * sin(Y - X);
    cout << "Z2 = " << Z << endl << endl;
}

void No9() {
    double A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    double Z = pow(cos(A) - cos(B), 2) - pow(sin(A) - sin(B), 2);
    cout << "Z1 = " << Z << endl;
    Z = -4 * pow(sin((A - B) / 2), 2) * cos(A + B);
    cout << "Z2 = " << Z << endl << endl;
}

void No10() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = sin((M_PI / 2) + 3 * A) / (1 - sin(3 * A - M_PI));
    cout << "Z1 = " << Z << endl;
    Z = 1 / tan(5 / 4 * M_PI + 3 / 2 * A);
    cout << "Z2 = " << Z << endl << endl;
}

void No11() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = (1 - 2 * pow(sin(A), 2)) / (1 + 2 * sin(A));
    cout << "Z1 = " << Z << endl;
    Z = (1 - tan(A)) / (1 + tan(A));
    cout << "Z2 = " << Z << endl << endl;
}

void No12() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = (sin(4 * A) / (1 + cos(4 * A))) * (cos(2 * A) / (1 + cos(2 * A)));
    cout << "Z1 = " << Z << endl;
    Z = 1 / tan(3 / 2 * M_PI - A);
    cout << "Z2 = " << Z << endl << endl;
}

void No13() {
    double A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    double Z = (sin(A) + cos(2 * B - A)) / (cos(A) - sin(2 * B - A));
    cout << "Z1 = " << Z << endl;
    Z = (1 + sin(2 * B)) / cos(2 * B);
    cout << "Z2 = " << Z << endl << endl;
}

void No14() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = (cos(A) + sin(A)) / (cos(A) - sin(A));
    cout << "Z1 = " << Z << endl;
    Z = tan(2 * A) + (1 / cos(2 * A));
    cout << "Z2 = " << Z << endl << endl;
}

void No15() {
    double A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    double Z = sqrt(2 * B + 2 * sqrt(pow(B, 2) - 4)) / (sqrt(pow(B, 2) - 4) + B + 2);
    cout << "Z1 = " << Z << endl;
    Z = 1 / sqrt(B + 2);
    cout << "Z2 = " << Z << endl << endl;
}

void No16() {
    double X;
    cout << "X = ";
    cin >> X;
    double Z = (pow(X, 2) + 2 * X - 3 + (X + 1) * sqrt(pow(X, 2) - 9)) /
               (pow(X, 2) - 2 * X - 3 - (X + 1) * sqrt(pow(X, 2) - 9));
    cout << "Z1 = " << Z << endl;
    Z = sqrt((X + 3) / (X - 3));
    cout << "Z2 = " << Z << endl << endl;
}

void No17() {
    double M;
    cout << "M = ";
    cin >> M;
    double Z = sqrt(pow(3 * M + 2, 2) - 24 * M) / (3 * sqrt(M) - 2 / sqrt(M));
    cout << "Z1 = " << Z << endl;
    Z = -sqrt(M);
    cout << "Z2 = " << Z << endl << endl;
}

void No18() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = ((A + 2) / sqrt(2 * A) + A / (sqrt(2 * A) + 2) + 2 / (A - sqrt(2 * A))) * (sqrt(A) - sqrt(2)) / (A + 2);
    cout << "Z1 = " << Z << endl;
    Z = 1 / (sqrt(A) + sqrt(2));
    cout << "Z2 = " << Z << endl << endl;
}

void No19() {
    double A;
    cout << "A = ";
    cin >> A;
    double Z = pow((1 + A + pow(A, 2)) / sqrt(2 * A) + 2 - (1 - A + pow(A, 2)) / (2 * A - pow(A, 2)), -1) *
               (5 - 2 * pow(A, 2));
    cout << "Z1 = " << Z << endl;
    Z = (4 - pow(A, 2)) / 2;
    cout << "Z2 = " << Z << endl << endl;
}

void No20() {
    double M, N;
    cout << "M = ";
    cin >> M;
    cout << "N = ";
    cin >> N;
    double Z = ((M - 1) * sqrt(M) - (N - 1) * sqrt(N)) / (sqrt(pow(M, 3) * N) + N * M + pow(M, 2) - M);
    cout << "Z1 = " << Z << endl;
    Z = (sqrt(M) - sqrt(N)) / M;
    cout << "Z2 = " << Z << endl << endl;
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
    No13();
    No14();
    No15();
    No16();
    No17();
    No18();
    No19();
    No20();

    return 0;
}