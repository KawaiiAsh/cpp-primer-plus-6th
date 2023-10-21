#include <iostream>

using namespace std;

int main() {
    double lightYear;
    double astronomicalUnit;
    cout << "Enter the number of light year:";
    cin >> lightYear;
    astronomicalUnit = lightYear * 63240;
    cout << lightYear << " light years = " << astronomicalUnit << " astronomical units." << endl;
    return 0;
}