// LCM of two numbers

// You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers. Return the LCM of the two numbers.
// The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.

// Example 1:
// Input: n1 = 4, n2 = 6
// Output: 12
// Explanation: 4 * 3 = 12, 6 * 2 = 12.
// 12 is the lowest integer that is divisible both 4 and 6.

// Example 2:
// Input: n1 = 3, n2 = 5
// Output: 15
// Explanation: 3 * 5 = 15, 5 * 3 = 15.
// 15 is the lowest integer that is divisible both 3 and 5.

#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

long long findLCM(int a, int b) {
    if (a == 0 || b == 0) return 0;
    
    // Divide first to avoid integer overflow
    return (1LL * a / findGCD(a, b)) * b;
}

int main() {
    int a = 4, b = 6;
    cout << "LCM of " << a << " and " << b << " is: " << findLCM(a, b) << endl;
    return 0;
}
