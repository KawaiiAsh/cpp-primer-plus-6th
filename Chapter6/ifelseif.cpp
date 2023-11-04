#include <iostream>

using namespace std;

const int FAVE = 27;

int main() {
    int n;

    cout << "Enter a number in the range 1-100 to find";
    cout << "my favorite number:";
    do {
        cin >> n;
        if (n < FAVE) {
            cout << "Too low -- guess again:";
        } else if (n > FAVE) {
            cout << "Too high -- guess again:";
        } else {
            cout << FAVE << " is right!" << endl;
        }
    } while (n != FAVE);

    return 0;
}