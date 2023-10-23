#include <iostream>

using namespace std;

int main() {
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add me to the character code" << endl;
    ch = ch + 1;
    i = ch;

    cout << "Displaying char ch using cout.put(ch) :";
    cout.put(ch);
    cout.put('!');
    cout << endl << "Done" << endl;
    return 0;
}