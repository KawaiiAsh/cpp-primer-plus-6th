#include <iostream>

using namespace std;

int main() {
    long totalSeconds;
    cout << "Enter the number of seconds:";
    cin >> totalSeconds;

    int days = totalSeconds / 86400;

    int remainingTime = totalSeconds % 86400;
    int hours = remainingTime / 3600;

    int remainingHours = remainingTime % 3600;
    int minutes = remainingHours / 60;

    int remainingMinutes = remainingHours % 60;
    int seconds = remainingMinutes;
    cout << totalSeconds << " seconds = "
    << days << " days, "
    << hours << " hours, "
    << minutes << " minutes, "
    << seconds << " seconds.";
    return 0;
}