#include <iostream>
using namespace std;

string getUserInput(const string& prompt) {
    string input;
    cout << prompt;
    getline(cin, input);
    return input;
}

char getUserCharInput(const string& prompt) {
    char input;
    cout << prompt;
    cin >> input;
    cin.ignore();
    return input;
}

int main() {
    string firstName = getUserInput("What is your first name?");
    string lastName = getUserInput("What is your last name?");
    char letterGrade = getUserCharInput("What grade do you deserve?");
    unsigned int age;

    cout << "What is your age?";
    cin >> age;

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << char(letterGrade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}
