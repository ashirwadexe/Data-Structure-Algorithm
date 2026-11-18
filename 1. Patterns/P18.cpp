// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// E 
// D E 
// C D E 
// B C D E 
// A B C D E

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int i;
    char j;
    char endChar = 'A' + n -1;

    for (i=1; i<=n; i++) {
        for (j=endChar-i+1; j<=endChar; j++) {
            cout << j;
        };
        cout << "\n";
    };
};