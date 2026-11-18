// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int i, j;
    char k;
    
    for (i=1; i<=n; i++) {
        for (j=1; j<n+1-i; j++) {
            cout << " ";
        };
        for (k='A'; k<'A'+i; k++) {
            cout << k;
        };
        for (k=i+'A'-2; k>='A'; k--) {
            cout << k;
        }
        cout << "\n";
    }
};