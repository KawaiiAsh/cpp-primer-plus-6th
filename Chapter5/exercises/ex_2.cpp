#include <iostream>
#include <array>

using namespace std;
const int SIZE = 101;

int main() {
    array<long double,SIZE> factorialArray{};
    factorialArray[0] = factorialArray[1] = 1;

    for (int i = 2; i < SIZE; i++) {
        factorialArray[i] = i * factorialArray[i - 1];
    }
    for (int i = 0; i < SIZE; i++) {
        cout << i << "! = " << factorialArray[i] << endl;
    }
    return 0;
}