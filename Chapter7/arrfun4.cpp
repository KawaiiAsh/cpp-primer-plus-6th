#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(const int *begin, const int *end);

int main() {
    int cookies[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = sumArr(cookies, cookies + SIZE);

    cout << "Total cookies eaten: " << sum << endl;
    sum = sumArr(cookies, cookies + 3);
    cout << "First three eaters ate: " << sum << endl;
    sum = sumArr(cookies + 4, cookies + SIZE);
    cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}

int sumArr(const int *begin, const int *end) {
    const int *pt;
    int total = 0;
    for (pt = begin; pt != end; pt++) {
        total += *pt;
    }
    return total;
}