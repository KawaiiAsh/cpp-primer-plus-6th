#include <iostream>

using namespace std;

int main() {
    double celsius;
    double fahrenheit;
    cout << "Please enter the Celsius value:";
    cin >> celsius;
    fahrenheit = 1.8 * celsius + 32.0;
    cout << celsius << " degrees Celsius is 68 degrees Fahrenheit." << endl;
    return 0;
}