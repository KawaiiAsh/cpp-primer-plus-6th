#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip> // 用于设置输出格式

using namespace std;

const int SIZE = 60;

int main() {
    char filename[SIZE];
    ifstream inFile;
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    while (inFile >> value) {
        if (inFile.fail()) {
            cout << "Input terminated by data mismatch.\n";
            break; // 如果数据格式不匹配，则终止循环
        }
        ++count;
        sum += value;
    }

    if (inFile.eof()) {
        cout << "End of file reached.\n";
    }

    cout << "Items read: " << count << endl;
    if (count == 0) {
        cout << "No data processed.\n";
    } else {
        cout << "Sum: " << fixed << setprecision(2) << sum << endl; // 设置输出格式为小数点后两位
        cout << "Average: " << fixed << setprecision(2) << sum / count << endl;
    }

    inFile.close();
    return 0;
}
