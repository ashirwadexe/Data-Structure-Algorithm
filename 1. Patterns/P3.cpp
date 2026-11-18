// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

int main() {
    int i, j;
    
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            cout << j;
        }
        cout << "\n";
    }
};