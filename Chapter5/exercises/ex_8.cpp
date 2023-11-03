#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char ch[100];
    int sum = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> ch;
    while (strcmp(ch, "done")) {
        sum++;
        cin >> ch;
    }
    cout << "You entered a total of " << sum << " words." << endl;

    return 0;
}