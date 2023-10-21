#include <iostream>

using namespace std;

void formatTime(int, int);

void formatTime(int hours, int minutes) {
    cout << "Time: " << hours << ":" << minutes << endl;
}

int main() {
    int hours, minutes;
    cout << "Enter the number of hours:";
    cin >> hours;
    cout << "Enter the number of minutes:";
    cin >> minutes;
    formatTime(hours,minutes);
    return 0;
}