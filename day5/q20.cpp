#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    long long largestPrimeFactor = -1;

    // Divide by 2 as long as possible
    while (num % 2 == 0) {
        largestPrimeFactor = 2;
        num /= 2;
    }

    // Check odd factors
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    // If num is still greater than 2, it is prime
    if (num > 2) {
        largestPrimeFactor = num;
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}