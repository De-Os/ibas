#include <iostream>

using namespace std;

void No1() {
    char c;
    int x;
    float y;
    cout << "(char) c = ";
    cin >> c;
    cout << "(int) x = ";
    cin >> x;
    cout << "(float) y = ";
    cin >> y;
    cout << c << ',' << x << ',' << y << endl << endl;
    cout << "(char) c" << c << endl;
    cout << "(int) x" << x << endl;
    cout << "(float) y" << y << endl;
}

void No2() {
    double x, y, z;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    printf("x = %.2f\n", x);
    printf("y = %.3f\n", y);
    printf("z = %.4f\n", z);
}

int main() {
    No1();
    No2();
    return 0;
}