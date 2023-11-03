#include <iostream>
#include <string>

using namespace std;

void printByPrompt(string prompt);

void getInput(int &start, int &end);

void printByPrompt(string prompt) {
    cout << prompt;
}

void getInput(int &start, int &end) {
    cin >> start;
    cin >> end;
}

int main() {
    int start, end, sum = 0;
    string prompt = "Enter the start number and end number:\n";
    printByPrompt(prompt);
    getInput(start, end);
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    cout << "The sum of " << start << " to " << end << " is " << sum << ".\n";
    return 0;
}