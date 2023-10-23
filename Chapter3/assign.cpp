#include <iostream>

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2E12;
    cout << "Tree = " << tree << endl;
    cout << "Guess = " << guess << endl;
    cout << "Debt = " << debt << endl;

    return 0;
}