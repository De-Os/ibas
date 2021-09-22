#include <iostream>

using namespace std;

int main() {
    int Sz;
    float Kr;
    cout << "Sz = ";
    cin >> Sz;

    if (Sz <= 20000) {
        Kr = 0;
    } else if (Sz <= 40000) {
        Kr = Sz * 0.7;
    } else Kr = Sz * 1.2;

    if (Kr == 0) {
        cout << "Кредит недоступен";
    } else cout << "Сумма кредита: " << Kr;
    cout << endl;

    return 0;
}