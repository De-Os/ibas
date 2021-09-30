#include <iostream>

using namespace std;

int main() {
    string X = "";
    char E;

    do {
        cout << "char = ";
        cin >> E;
        X += E;
    } while (E != '.');

    cout << "string = " << X << endl;

    return 0;
}