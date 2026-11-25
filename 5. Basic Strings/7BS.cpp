// 242. Valid Anagram

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:
// Input: s = "rat", t = "car"
// Output: false

// Constraints:
// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.
 
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        };

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(int i=0; i<s.size(); i++) {
            mp1[s[i]-'0']++;
            mp2[t[i]-'0']++;
        };

        return mp1 == mp2;
    }
};