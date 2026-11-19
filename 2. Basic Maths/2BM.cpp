//  Count number of odd digits in a number

// You are given an integer n. You need to return the number of odd digits present in the number.
// The number will have no leading zeroes, except when the number is 0 itself.

// Example 1:
// Input: n = 5
// Output: 1
// Explanation: 5 is an odd digit.

// Example 2:
// Input: n = 25
// Output: 1
// Explanation: The only odd digit in 25 is 5.

#include <iostream>
using namespace std;

int main() { 
    int n = 222222;
    int count = 0;
    int ans;

    while (n > 0) { 
        ans = n % 10;
        if(ans % 2 != 0) {
            count++;
        }
        n = n / 10;
    };
    cout << "No. of Odd Digits: " << count;
    return 0;
};