// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int i, j;

    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            if((i+j)%2==0) {
                cout << "1";
            } else {
                cout << "0";
            }
        };
        cout << "\n";
    };
};