#include <iostream>

using namespace std;

int main() {
    int daphne = 100;
    int cleo = 100;
    int year = 0;
    for (year; cleo <= daphne; year++) {
        daphne += 10;
        cleo *= 1.05;
    }

    cout << year << " years later, " << endl;
    cout << "Daphne has $" << daphne << endl;
    cout << "Cleo has $" << cleo << endl;

    return 0;
}