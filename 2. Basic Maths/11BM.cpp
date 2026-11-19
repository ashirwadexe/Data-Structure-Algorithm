// GCD of Two Numbers

// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.
// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

// Example 1:
// Input: n1 = 4, n2 = 6
// Output: 2
// Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6
// Greatest Common divisor = 2.

// Example 2:
// Input: n1 = 9, n2 = 8
// Output: 1
// Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.
// Greatest Common divisor = 1.

#include <iostream>
#include <algorithm>
using namespace std;

int findGCD(int a, int b) {
    int result = min(a,b);
    while (result != 0) {
        if(a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    };
    return result;
};

int main() {
    int a = 20, b = 50;
    int ans = findGCD(a, b);
    cout << "GCD of (" << a << "," << b << ") : " << ans;
    return 0; 
};
