//  Palindrome Number
// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

// A palindrome number is a number which reads the same both left to right and right to left.

// Example 1:
// Input: n = 121
// Output: true
// Explanation: When read from left to right : 121.
// When read from right to left : 121.

// Example 2:
// Input: n = 123
// Output: false
// Explanation: When read from left to right : 123.
// When read from right to left : 321

#include <iostream>
using namespace std;

int main() { 
    int n = 121;
    int original = n;
    int rev = 0;

    while(n > 0) {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n = n / 10;
    }
    
    if(original == rev) {
        cout << "Palindrome";
    } else {
        cout << "Not a Palindrome";
    }
    return 0;
};