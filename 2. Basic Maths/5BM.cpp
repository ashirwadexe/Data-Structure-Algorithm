// Return the Largest Digit in a Number
// You are given an integer n. Return the largest digit present in the number.

// Example 1:
// Input: n = 25
// Output: 5
// Explanation: The largest digit in 25 is 5.

// Example 2:
// Input: n = 99
// Output: 9
// Explanation: The largest digit in 99 is 9.


#include <iostream>
#include <climits>
using namespace std;

int main() { 
    int n = 12327;
    int max = INT_MIN;

    while(n > 0) {
        int lastDigit = n % 10;
        if (lastDigit > max) {
            max = lastDigit;
        }
        n = n / 10;
    }
    cout << "Largest n: " << max;
    return 0;
};