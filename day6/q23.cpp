#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        count += n & 1;  // Check last bit
        n = n >> 1;      // Right shift by 1
    }

    cout << "Number of set bits = " << count;

    return 0;
}