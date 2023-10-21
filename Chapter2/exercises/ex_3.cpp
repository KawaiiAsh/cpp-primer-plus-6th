#include <iostream>
using namespace std;

void customPrintFunctionOne();
void customPrintFunctionTwo();

void customPrintFunctionOne(){
    cout << "Three blind mice" << endl;
}

void customPrintFunctionTwo(){
    cout << "See how they run" << endl;
}

int main(){
    customPrintFunctionOne();
    customPrintFunctionTwo();

    return 0;
}