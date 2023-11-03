#include <iostream>

using namespace std;

const int SIZE = 20;

int main() {
    char name[SIZE];
    cout << "Your first name, please:";
    cin.getline(name, SIZE);
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;
    while(name[i] != '\0'){
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
}