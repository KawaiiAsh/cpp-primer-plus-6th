#include <iostream>
#include <fstream>
#include <iomanip>
/* 
Name: Zhuangshui Jiang
Date: October 27, 2023
Purpose : Program that reads numbers into an array, finds the total rainfall capacity, average rainfall capacity ,the highest rainfall capacity in a month,and the lowest rainfall capacity in a month.
Input: numbers from an external file
Output: Output the total rainfall capacity, average rainfall capacity in 12 months,the highest rainfall capacity in a month,and the lowest rainfall capacity in a month and sort.
 */
using namespace std;

double totalRainFall(double[], int);

double averageRainFall(double[], int);

double getHighest(double[], int);

double getLowest(double[], int);

void selectionsort(string[], double[], int);

void swap(double &a, double &b);

void swap(string &a, string &b);

const int SIZE = 12;

int main() {
    double rainFall[SIZE];
    string months[SIZE];
    ifstream infile;
    infile.open("rainFall.txt");

    for (int i = 0; i < SIZE; i++) {
        infile >> months[i] >> rainFall[i];
    }
    for (int i = 0; i < SIZE; i++) {
        cout << setw(20) << months[i] << setw(15) << fixed << setprecision(2) << rainFall[i] << endl;
    }

    double total = totalRainFall(rainFall, SIZE);
    double average = averageRainFall(rainFall, SIZE);
    double highest = getHighest(rainFall, SIZE);
    double lowest = getLowest(rainFall, SIZE);
    cout << "\nThe total rainfall capacity in this year was: "
         << total << endl;
    cout << "\nThe average rainfall capacity in this year was:"
         << average << endl;
    cout << "\nThe highest rainfall capacity in this year was:"
         << highest << endl;
    cout << "\nThe lowest rainfall capacity in this year was:"
         << lowest << endl;
    selectionsort(months, rainFall, SIZE);


    infile.close();
    for (int i = 0; i < SIZE; i++) {

        cout << setw(20) << months[i] << setw(15) << fixed << setprecision(2) << rainFall[i] << endl;
    }
    return 0;
}

double totalRainFall(double arr[], int month) {
    double sum = 0;
    for (int i = 0; i < month; i++) {
        sum += arr[i];
    }
    return sum;
}


double averageRainFall(double arr[], int month) {
    double sum = 0;
    for (int i = 0; i < month; i++) {
        sum += arr[i];
    }
    return sum / month;
}


double getHighest(double arr[], int month) {
    double max = 0;
    for (int i = 0; i < month; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

double getLowest(double arr[], int month) {
    double min = arr[0];
    for (int i = 1; i < month; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

void selectionsort(string months[], double arr[], int length) {
    int smallest;
    for (int i = 0; i < length - 1; i++) {
        smallest = i;
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }
        swap(months[i], months[smallest]);
        swap(arr[i], arr[smallest]);
    }
}

void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}