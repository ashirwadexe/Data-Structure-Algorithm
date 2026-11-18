// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5

#include <iostream>
using namespace std;

int main() {
    int i, j;
    int n = 9;
    int size = n * 2 - 1;

    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;
            int minDist = min(min(top, bottom), min(left, right));

            cout << (n - minDist) << " ";
        };
        cout << "\n";
    };
};