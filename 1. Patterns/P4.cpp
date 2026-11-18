// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
using namespace std;

int main() {
    int i, j;
    
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            cout << i;
        }
        cout << "\n";
    }
};