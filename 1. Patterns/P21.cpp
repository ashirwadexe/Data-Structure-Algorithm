// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// *****
// *   *
// *   *
// *   *
// *****

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int i, j;

    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if(j==1 || j==n || i==1 || i==n) {
                cout << "*";
            } else {
                cout << " ";
            }
        };
        cout << "\n";
    };
};