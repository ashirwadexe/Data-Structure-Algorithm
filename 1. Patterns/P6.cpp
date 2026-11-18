// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int i, j;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n+1-i; j++) {
            cout << j;
        };
        cout << "\n";
    };
};