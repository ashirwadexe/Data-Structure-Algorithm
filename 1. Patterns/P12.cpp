// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int i, j;

    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            cout << j;
        };
        for (j=1; j<=n-i; j++) {
            cout << "-";
            cout << "-";
        };
        for (j=i; j>=1; j--) {
            cout << j;
        }
        cout << "\n";
    }
    
};