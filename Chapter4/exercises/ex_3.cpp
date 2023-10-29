#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char firstName[20],lastName[20],fullName[40];
    cout << "Enter your first name:";
    cin.getline(firstName,20);
    cout << "Enter your last name:";
    cin.getline(lastName,20);

    strcpy(fullName,firstName);
    strcat(fullName,", ");
    strcat(fullName,lastName);

    cout << "Here's the information in a single string: " << fullName << endl;
    return 0;
}