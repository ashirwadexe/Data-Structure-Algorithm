// 742. Second Highest Occurring Element
// Given an array of n integers, find the second most frequent element in it.

// If there are multiple elements that appear second most frequent times, find the smallest of them.

// If second most frequent element does not exist return -1.

// Example 1:
// Input: arr = [1, 2, 2, 3, 3, 3]

// Output: 2

// Explanation:

// The number 2 appears the second most (2 times) and number 3 appears the most(3 times). 

// Example 2:
// Input: arr = [4, 4, 5, 5, 6, 7]

// Output: 6

// Explanation:

// Both 6 and 7 appear second most times, but 6 is smaller.


class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i=0; i<n; i++) {
            mpp[nums[i]]++;
        }

        int max1=INT_MIN, max2=INT_MIN;
        int ans1=-1, ans2=-1;

        for(auto it: mpp) {
            if(it.second > max1) {
                max2 = max1;
                ans2 = ans1;

                max1 = it.second;
                ans1 = it.first;
            } else if(it.second == max1) {
                ans1 = min(ans1, it.first);
            } else if(it.second > max2) {
                max2 = it.second;
                ans2 = it.first;
            } else if(it.second == max2) {
                ans2 = min(ans2, it.second);
            }
        }

        return ans2;
    }
};