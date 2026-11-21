// 749. Sum of Highest and Lowest Frequency
// Given an array of n integers, find the sum of the frequencies of the highest occurring number and lowest occurring number.

// Example 1:
// Input: arr = [1, 2, 2, 3, 3, 3]
// Output: 4
// Explanation: The highest frequency is 3 (element 3), and the lowest frequency is 1 (element 1). Their sum is 3 + 1 = 4.

// Example 2:
// Input: arr = [4, 4, 5, 5, 6]
// Output: 3
// Explanation: The highest frequency is 2 (elements 4 and 5), and the lowest frequency is 1 (element 6). Their sum is 2 + 1 = 3.

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        for(int i=0; i<n; i++) {
            mpp[nums[i]]++;
        };

        int max = INT_MIN;
        int min = INT_MAX;

        for(auto it: mpp) {
            if(it.second > max) {
                max = it.second;
            }
            if(it.second < min) {
                min = it.second;
            }
        }

        return max+min;
    }
};
