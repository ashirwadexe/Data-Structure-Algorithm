// 14. Longest Common Prefix
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sort krrunga pahle dict order me
        sort(strs.begin(), strs.end());

        // 1st or last string lunga ab
        string first = strs[0];
        string last = strs[strs.size() - 1];

        // char ko compare kro 1st or last string elements ke
        int i = 0;
        while(i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        return first.substr(0, i);
    }
};