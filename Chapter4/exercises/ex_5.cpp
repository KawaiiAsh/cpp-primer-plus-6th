#include <iostream>

using namespace std;

struct CandyBar {
    string brand = "Mocha Munch";
    double weight = 2.3;
    double calories = 350;
};

int main() {
    CandyBar snack;
    cout << "Brand is " << snack.brand << endl;
    cout << "Weight is " << snack.weight << endl;
    cout << "Calories is " << snack.calories << endl;

    return 0;
}