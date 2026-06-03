#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int count = 0;

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            count++;
            n /= 10;
        }
    }

    cout << count << endl;

    return 0;
}