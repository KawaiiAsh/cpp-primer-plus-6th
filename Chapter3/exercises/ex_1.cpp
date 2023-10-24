#include <iostream>

using namespace std;

int main() {
    double height;
    const double INCHES_PER_FOOT = 12;
    cout << "Please enter your height (in inches)__";
    cin >> height;
    cout << "Your height is " << height << "(Inches)" << endl;
    cout << "Your height is " << height / INCHES_PER_FOOT << "(Feet)" << endl;
    return 0;
}
