#include <iostream>
#include <cmath>

using namespace std;

int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) result *= i;
    return result;
}

int main() {
    int X;
    int maxN = 2;
    float result = 0;
    cout << "X = ";
    cin >> X;

    for (int n = 0; n <= maxN; n++) {
        result += pow(-1, n) * (pow(X, 2 * n + 1) / factorial(2 * n + 1));
    }


    cout << "sin(x) = " << result << endl;


    return 0;
}