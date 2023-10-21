#include <iostream>

using namespace std;

int main() {
    int longDistance;
    int code;
    cout << "Please enter the distance of long:";
    cin >> longDistance;
    code = longDistance * 220;
    cout << "Code is "<< code << endl;
    return 0;
}