#include <iostream>
using namespace std;

int main(){
    double feet,inches,weight_lb;

    cout << "Please enter your height in feet: ";
    cin >> feet;

    cout << "Please enter your height in inches: ";
    cin >> inches;

    cout << "Please enter your weight in pounds: ";
    cin >> weight_lb;

    // Convert height to inches
    double height_inches = feet * 12 + inches;

    // Convert height to meters
    double height_meters = height_inches * 0.0254;

    // Convert weight to kilograms
    double weight_kg = weight_lb / 2.2;

    // Calculate BMI
    double bmi = weight_kg / (height_meters * height_meters);

    // Display the result
    cout << "Your BMI is: " << bmi << endl;
    return 0;
}