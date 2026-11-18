// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// A
// BB
// CCC
// DDDD
// EEEEE


#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char i;
    char j;

    for (i='A'; i<'A'+n; i++) {
        for (j='A'; j<=i; j++) {
            cout << i;
        };
        cout << "\n";
    };
};