#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, rem, sum = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to power digits
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong Number.";
    else
        cout << n << " is not an Armstrong Number.";

    return 0;
}