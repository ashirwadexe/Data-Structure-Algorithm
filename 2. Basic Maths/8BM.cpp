// Check for Perfect Number

// You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number, otherwise, return false.
// A perfect number is a number whose proper divisors (excluding the number itself) add up to the number itself.

// Example 1:
// Input: n = 6
// Output: true
// Explanation: Proper divisors of 6 are 1, 2, 3.
// 1 + 2 + 3 = 6.

// Example 2:
// Input: n = 4
// Output: false
// Explanation: Proper divisors of 4 are 1, 2.
// 1 + 2 = 3.

#include <iostream>
using namespace std;

int main() { 
    int n = 496;
    int original = n;
    int sum = 0;

    for(int i=1; i<=n/2; i++) {
        if(n % i == 0) {
            sum += i;
        }
    };

    if(original == sum) {
        cout << "Perfect Divisor";
    } else {
        cout << "Not a Perfect Divisor";
    }

    return 0;

};