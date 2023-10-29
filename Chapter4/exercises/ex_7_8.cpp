#include <iostream>
#include <string>

using namespace std;

struct Pizza {
    string companyName;
    double diameter;
    double weight;
};

int main() {
    Pizza *hotPizza = new Pizza;

    cout << "Enter the diameter of the pizza (in inches):";
    cin >> hotPizza->diameter;

    cin.ignore();

    cout << "Enter the name of the pizza company:";
    getline(cin, hotPizza->companyName);

    cout << "Enter the weight of the pizza:";
    cin >> hotPizza->weight;

    cout << "The company name of hot pizza is " << hotPizza->companyName << endl;
    cout << "The size of hot pizza is " << hotPizza->diameter << endl;
    cout << "The weight of hot pizza is " << hotPizza->weight << endl;

    delete hotPizza;

    return 0;
}