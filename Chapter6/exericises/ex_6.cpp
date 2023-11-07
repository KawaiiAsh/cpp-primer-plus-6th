#include <iostream>
#include <string>

using namespace std;

struct Patron {
    string name;
    double money;
};

int main() {

    int size;
    cout << "Enter the number of patron.";
    cin >> size;
    Patron *patron = new Patron[size];

    for (int i = 0; i < size; ++i) {
        cout << "Enter patron name:";
        cin >> (patron + i)->name;
        cout << "Enter money:";
        cin >> (patron + i)->money;
    }

    for (int i = 0; i < size; ++i) {
        if ((patron + i)->money > 10000) {
            cout << (patron + i)->name << endl;
        }
    }

    delete[] patron;

    return 0;
}
