#include <iostream>

using namespace std;

int main() {
    int year;
    char address[80];

    cout << "What year was your house built?\n";
    (cin >> year).get();
    cout << "What is its street address?\n";
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}