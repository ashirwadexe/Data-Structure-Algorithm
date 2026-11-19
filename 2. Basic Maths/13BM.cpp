// Divisors of a Number

// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
// A number which completely divides another number is called it's divisor.

// Example 1:
// Input: n = 6
// Output = [1, 2, 3, 6]
// Explanation: The divisors of 6 are 1, 2, 3, 6.

// Example 2:
// Input: n = 8
// Output: [1, 2, 4, 8]
// Explanation: The divisors of 8 are 1, 2, 4, 8.

#include <iostream>
#include <vector> 
using namespace std;

vector<int> getDivisors(int n) {
    vector<int> divisors;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

    return divisors;
}

int main() {
    int n = 6;
    vector<int> result = getDivisors(n);

    cout << "Divisors: ";
    for (int d : result) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
