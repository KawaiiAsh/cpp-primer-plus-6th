#include <iostream>
#include <string>

using namespace std;

struct car {
    string producer;
    int year;
};

int main() {
    int size;

    cout << "How many car do you with to catalog?";
    cin >> size;
    cin.ignore();
    car *myCar = new car[size];

    for (int i = 0; i < size; i++) {
        cout << "Car #" << i + 1<< ":\n";
        cout << "Please enter the make:";
        getline(cin,myCar[i].producer);
        cout << "Please enter the year:";
        cin >> myCar[i].year;
        cin.ignore();
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < size; i++) {
        cout << myCar[i].year << " " << myCar[i].producer << endl;
    }
    return 0;
}