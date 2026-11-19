// Count of odd numbers in Array

// Given an array of n elements. The task is to return the count of the number of odd numbers in the array.

// Example 1:
// Input: n=5, array = [1,2,3,4,5]
// Output: 3
// Explanation: The three odd elements are (1,3,5).

// Example 2:
// Input: n=6, array = [1,2,1,1,5,1]
// Output: 5
// Explanation: The five odd elements are one 5 and four 1's.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,1,1,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        };
    }

    cout << "Count of odd elements in array: " << count << endl;
    return 0;
}
