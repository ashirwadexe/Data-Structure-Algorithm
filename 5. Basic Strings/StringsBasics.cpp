// C++ program to implement Introduction to Basic Traversal in Strings
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Checks whether a character is a vowel.
    // Uppercase vowels are also handled by converting the character to lowercase.
    bool isVowel(char ch) {
        ch = tolower(ch);

        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    // Counts vowels and consonants in the string.
    // Only alphabet characters are considered because spaces, digits, and symbols
    // are neither vowels nor consonants.
    pair<int, int> countVowelsAndConsonants(string s) {
        int vowels = 0;
        int consonants = 0;

        for (char ch : s) {
            // This check prevents spaces, digits, and symbols from being counted as consonants.
            if (isalpha(ch)) {
                if (isVowel(ch)) {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        return {vowels, consonants};
    }

    // Searches for the first occurrence of the target character.
    // Returns the index if found, otherwise returns -1.
    int searchCharacter(string s, char target) {
        for (int i = 0; i < s.length(); i++) {
            // Return immediately because the first matching index is required.
            if (s[i] == target) {
                return i;
            }
        }

        // -1 is used because it cannot be a valid string index.
        return -1;
    }

    // Counts how many times the target character appears in the string.
    // This comparison is case-sensitive, so 'A' and 'a' are treated differently.
    int characterFrequency(string s, char target) {
        int count = 0;

        for (char ch : s) {
            if (ch == target) {
                count++;
            }
        }

        return count;
    }

    // Finds the first character that appears only once in the string.
    // It uses frequency counting first, then checks the string again to preserve order.
    char firstNonRepeatingCharacter(string s) {
        // Size 256 is used to cover standard ASCII characters.
        vector<int> freq(256, 0);

        for (char ch : s) {
            freq[ch]++;
        }

        // Second traversal is needed because the answer depends on original string order.
        for (char ch : s) {
            if (freq[ch] == 1) {
                return ch;
            }
        }

        // '\0' represents that no non-repeating character exists.
        return '\0';
    }

    // Reverses the given string by reading characters from the end.
    string reverseString(string s) {
        string result = "";

        // The last character becomes the first character in the reversed string.
        for (int i = s.length() - 1; i >= 0; i--) {
            result += s[i];
        }

        return result;
    }

    // Removes all normal spaces from the string.
    string removeSpaces(string s) {
        string result = "";

        for (char ch : s) {
            // Only non-space characters are copied into the result.
            if (ch != ' ') {
                result += ch;
            }
        }

        return result;
    }

    // Toggles the case of alphabet characters.
    // Lowercase becomes uppercase, uppercase becomes lowercase,
    // and digits, spaces, and symbols remain unchanged.
    string toggleCase(string s) {
        string result = "";

        for (char ch : s) {
            if (islower(ch)) {
                result += toupper(ch);
            } else if (isupper(ch)) {
                result += tolower(ch);
            } else {
                // Non-alphabet characters should not be changed.
                result += ch;
            }
        }

        return result;
    }
};

int main() {
    string s = "Take U Forward";
    char target = 'a';

    Solution obj;

    pair<int, int> counts = obj.countVowelsAndConsonants(s);

    cout << "Vowels: " << counts.first << endl;
    cout << "Consonants: " << counts.second << endl;
    cout << "First index of target: " << obj.searchCharacter(s, target) << endl;
    cout << "Target frequency: " << obj.characterFrequency(s, target) << endl;
    cout << "First non-repeating character: " << obj.firstNonRepeatingCharacter(s) << endl;
    cout << "Reversed string: " << obj.reverseString(s) << endl;
    cout << "String without spaces: " << obj.removeSpaces(s) << endl;
    cout << "Toggle case string: " << obj.toggleCase(s) << endl;

    return 0;
}