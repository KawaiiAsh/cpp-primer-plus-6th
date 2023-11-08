#include <iostream>

using namespace std;

double getMean(double a, double b) {
    return 2.0 * a * b / (a + b);
}

int main() {
    double a, b, mean;
    cout << "Enter two number:";
    cin >> a >> b;
    while (a != 0 && b != 0) {
        mean = getMean(a, b);
        cout << "The mean of " << a << " and " << b << " is " << mean << ".\n";
        cin >> a >> b;
    }
    cout << "Program end.";

    return 0;
}