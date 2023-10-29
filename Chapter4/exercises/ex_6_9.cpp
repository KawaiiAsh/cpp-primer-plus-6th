#include <iostream>

using namespace std;

struct CandyBar {
    string brand;
    double weight;
    double calories;
};

int main() {
    const int SIZE = 3;
    CandyBar *candyBar = new CandyBar[SIZE];
    candyBar[0] = {"Brand1", 1.0, 100.0};
    candyBar[1] = {"Brand2", 1.5, 150.0};
    candyBar[2] = {"Brand3", 2.0, 200.0};

    for (int i = 0; i < SIZE; i++) {
        cout << "CandyBar " << i + 1 << ":\n";
        cout << "Brand: " << candyBar[i].brand << endl;
        cout << "Weight: " << candyBar[i].weight << " ounces" << endl;
        cout << "Calories: " << candyBar[i].calories << " calories" << endl;
        cout << endl;
    }

    delete[] candyBar;
    return 0;
}