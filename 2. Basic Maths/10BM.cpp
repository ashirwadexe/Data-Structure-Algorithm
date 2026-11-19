//  Count of Prime Numbers till N

// You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive). Return the number of prime numbers in the range.
// A prime number is a number which has no divisors except, 1 and itself.

// Example 1:
// Input: n = 6
// Output: 3
// Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.

// Example 2:
// Input: n = 10
// Output: 4
// Explanation: Prime numbers in the range [1, 10] are 2, 3, 5, 7.

#include <iostream>
using namespace std;

int main() { 
    int n = 25;
    int count = 0;

    for (int i=2; i<=n; i++) {
        bool isPrime = true;
        for (int j=2; j*j<=i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            count++;
        };
    }

    cout << "No of Prime Numbers in range [1, " << "n" << "] : " << count;
    return 0; 
};