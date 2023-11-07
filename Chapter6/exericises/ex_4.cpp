#include <iostream>

using namespace std;

const int SIZE = 60;
const int MEMBERSIZE = 5;

void showMenu();

struct bop {
    char fullname[SIZE];
    char title[SIZE];
    char bopname[SIZE];
    int preference;
};

int main() {
    char ch;

    bop bopMember[MEMBERSIZE] = {
            {"Wimp Macho",   "bbb",   "c",      0},
            {"Raki Rhodes",  "2XXXX", "3XXXXX", 1},
            {"Celia Laiter", "2AAAA", "3AAAAA", 2},
            {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
            {"Pat Hand",     "4CCCC", "3CCCCC", 1}
    };

    showMenu();

    while (true) {
        cin >> ch;

        if (ch == 'q') {
            break;
        }

        for (int i = 0; i < MEMBERSIZE; i++) {
            if (ch == 'a') {
                cout << "Full Name: " << bopMember[i].fullname << endl;
            } else if (ch == 'b') {
                cout << "Title: " << bopMember[i].title << endl;
            } else if (ch == 'c') {
                cout << "Bop Name: " << bopMember[i].bopname << endl;
            } else if (ch == 'd') {
                cout << "Preference: " << bopMember[i].preference << endl;
            } else {
                cout << "Wrong input." << endl;
                break;
            }
        }

        showMenu();  // 显示菜单以供用户再次选择
    }

    return 0;
}

void showMenu() {
    cout << "a. display by name       b. display by title" << endl;
    cout << "c. display by bopname    d. display by preference" << endl;
    cout << "q. quit" << endl;
}
