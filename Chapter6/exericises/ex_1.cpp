#include <iostream>
#include <cctype>

int main() {
    using namespace std;

    cout << "Enter characters (type @ to stop): ";

    char ch;
    while (cin.get(ch) && ch != '@') {
        if (isalpha(ch)) {
            if (isupper(ch)) {
                ch = tolower(ch);
                cout << ch;
            } else {
                ch = toupper(ch);
                cout << ch;
            }
        } else {
            cout << ch;
        }
    }
    return 0;
}