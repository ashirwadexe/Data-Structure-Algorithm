// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// ABCDE
// ABCD
// ABC
// AB
// A

#include <iostream>
using namespace std;

int main() {
    int n = 9;
    int i;
    char j;

    for (i=1; i<=n; i++) {
        for (j='A'; j<'A'+n+1-i; j++) {
            cout << j;
        };
        cout << "\n";
    };
};