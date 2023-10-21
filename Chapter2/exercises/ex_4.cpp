#include <iostream>

using namespace std;

int main() {
    int age, month;
    cout << "Please enter your age:";
    cin >> age;
    month = age * 12;
    cout << "Your age is " << age << ". which is " << month << " month." << endl;
    return 0;
}