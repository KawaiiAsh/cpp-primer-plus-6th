#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName, lastName, fullName;

    cout << "Enter your first name:";
    getline(cin, firstName);

    cout << "Enter your last name:";
    getline(cin, lastName);

    fullName = firstName + ", " + lastName;

    cout << "Here's the information in a single string: " << fullName << endl;

    return 0;
}