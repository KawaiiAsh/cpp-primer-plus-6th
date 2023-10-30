#include <iostream>
#include <array>

using namespace std;

int main() {
    const int SIZE = 3;
    array<double, SIZE> scores;
    double score;
    cout << "Your grade:";
    cin >> score;
    scores[0] = score;
    cout << "Your grade:";
    cin >> score;
    scores[1] = score;
    cout << "Your grade:";
    cin >> score;
    scores[2] = score;
    double averageScore = (scores[0] + scores[1] + scores[2]) / 3;
    cout << "In " << scores.size() << " times." << endl;
    cout << "The average score is " << averageScore << ".";
    return 0;
}