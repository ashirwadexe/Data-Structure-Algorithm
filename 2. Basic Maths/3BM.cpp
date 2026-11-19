//  Reverse a number

// Core
// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

// Example 1:
// Input: n = 25
// Output: 52
// Explanation: Reverse of 25 is 52.

// Example 2:
// Input: n = 123
// Output: 321
// Explanation: Reverse of 123 is 321.


#include <iostream>
using namespace std;

int main() { 
    int n = 187;
    int rev = 0;

    while(n > 0) {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n = n / 10;
    }
    cout << "Reversed n: " << rev;
    return 0;
};