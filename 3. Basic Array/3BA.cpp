// Check if the Array is Sorted I

// Given an array arr of size n, the task is to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order. If the array is sorted then return True, else return False.

// Example 1:
// Input: n = 5, arr = [1,2,3,4,5]
// Output: True
// Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

// Example 2:
// Input: n = 5, arr = [5,4,6,7,8]
// Output: False
// Explanation: The given array is Not sorted i.e Every element in the array is not smaller than or equal to its next values, So the answer is False. Here element 5 is not smaller than or equal to its future elements.

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            return false;
        }
    };
    return true;
}

int main() {
    int arr[] = {5,4,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool ans = isSorted(arr, n);

    if(ans) {
        cout << "Sorted";
    } else {
        cout << "Not sorted";
    }
    return 0;
};