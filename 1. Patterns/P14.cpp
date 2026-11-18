// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int i;
    char j;

    for (i=1; i<=n; i++) {
        for (j='A'; j<='A'+i; j++) {
            cout << j;
        };
        cout << "\n";
    };
};