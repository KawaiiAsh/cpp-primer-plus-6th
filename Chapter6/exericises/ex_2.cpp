#include <iostream>

using namespace std;

const int SIZE = 10;

int main() {

    double donationArray[SIZE];
    double donation;
    int count;
    for (int i = 0; i < 10; i++) {
        if (cin >> donation) {
            ++count;
            donationArray[i] = donation;
        } else {
            break;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << "Index "<< i << " = " << donationArray[i] << std::endl;
    }
    return 0;
}