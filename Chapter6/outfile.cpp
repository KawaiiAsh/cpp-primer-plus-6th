#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char autoMobile[50];
    int year;
    double aPrice;
    double dPrice;

    ofstream outFile;
    outFile.open("carinfo.txt");

    cout << "Enter the make and model of automobile:";
    cin.getline(autoMobile, 50);
    cout << "Enter the model year:";
    cin >> year;
    cout << "Enter the original asking price:";
    cin >> aPrice;
    dPrice = 0.913 * aPrice;
    cin.ignore();

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << autoMobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << aPrice << endl;
    cout << "Now asking $" << dPrice << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << autoMobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << aPrice << endl;
    outFile << "Now asking $" << dPrice << endl;

    outFile.close();
    return 0;
}