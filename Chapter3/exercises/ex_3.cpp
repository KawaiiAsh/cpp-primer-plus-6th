#include <iostream>
using namespace std;

int main(){
    double degrees,minutes,seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees:";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:";
    cin >> seconds;

    double latitude = degrees + (minutes / 60) + (seconds / 3600);

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude << " degrees";

    return 0;
}