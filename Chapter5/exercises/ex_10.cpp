#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter number of rows:";
    int row;
    cin >> row;

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < row; ++j)
        {
            if(row - j > i + 1)
                cout << ".";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}