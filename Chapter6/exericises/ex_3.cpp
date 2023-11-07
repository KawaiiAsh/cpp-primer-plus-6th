#include <iostream>

using namespace std;

void showMenu();

int main() {
    char ch;
    showMenu();

    while (true) {
        cout << "Please enter a c, p, t, or g:";
        cin >> ch;
        if(ch == 'q'){
            break;
        }
        switch (ch) {
            case 'c':
                cout << "the maple is a carnivore" << endl;
                break;
            case 'p':
                cout << "the maple is a pianist" << endl;
                break;
            case 't':
                cout << "the maple is a tree" << endl;
                break;
            case 'g':
                cout << "the maple is a game" << endl;
                break;
            default:
                cout << "Invalid input. Please enter a valid option." << endl;
        }
    }
    return 0;
}

void showMenu() {
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore          p) pianist" << endl;
    cout << "t) tree               g) game" << endl;

}