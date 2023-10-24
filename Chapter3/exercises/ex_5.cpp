#include <iostream>

using namespace std;

int main() {
    long long globalPopulation;
    long long usPopulation;
    cout << "Enter the world's population:";
    cin >> globalPopulation;
    cout << "Enter the population of the US:";
    cin >> usPopulation;
    double percentage = static_cast<double>(usPopulation) * 100 / globalPopulation;
    cout << "The population of the US is " << percentage << "% of the world population.";
    return 0;
}