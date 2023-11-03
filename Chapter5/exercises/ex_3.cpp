#include <iostream>

using namespace std;

int main() {
    int inputNumber = 0;
    int sum = 0;
    cin >> inputNumber;
    while (inputNumber != 0) {
        sum += inputNumber;
        cout << sum << endl;
        cin >> inputNumber;
    }

    return 0;
}