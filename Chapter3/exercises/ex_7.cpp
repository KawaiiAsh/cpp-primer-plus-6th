#include <iostream>

using namespace std;

int main() {
    double litersPer100Kilometers, milesPerGallon;

    cout << "Enter fuel consumption in European style (liters per 100 kilometers):";
    cin >> litersPer100Kilometers;

    // Convert from European style to American style (miles per gallon)
    milesPerGallon = 62.14 / (litersPer100Kilometers / 3.875);

    cout << "Fuel consumption in American style is approximately " << milesPerGallon << " miles per gallon." << endl;

    return 0;
}
