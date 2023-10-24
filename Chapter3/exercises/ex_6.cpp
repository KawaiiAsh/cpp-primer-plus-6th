#include <iostream>

using namespace std;

int main() {
    double distance, gallons, litersPer100Kilometers;

    cout << "Enter your current distance in kilometers:";
    cin >> distance;
    cout << "Enter how many gallons total used:";
    cin >> gallons;

    litersPer100Kilometers = (gallons * 3.875) / (distance / 100);

    cout << "Fuel consumption is " << litersPer100Kilometers << " liters per 100 kilometers." << endl;
    return 0;
}
