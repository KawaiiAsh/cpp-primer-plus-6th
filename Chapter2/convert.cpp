#include <iostream>

int stonetolb(int);

int stonetolb(int sts) {
    return sts * 14;
}

int main(){
    using namespace std;
    int stone;
    cout << "Enter the weight in stone:";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds" << endl;
    return 0;
}