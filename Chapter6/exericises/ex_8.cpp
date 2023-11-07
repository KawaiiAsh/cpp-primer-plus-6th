#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string fileName = "patron.txt";
    ifstream infile;
    infile.open(fileName);

    char ch;
    int count = 0;
    while(infile >> ch){
        count++;
    }
    infile.close();

    cout << "There are " << count << " characters." << endl;
    return 0;
}