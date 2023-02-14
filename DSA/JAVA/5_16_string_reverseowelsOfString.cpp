/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
*/

class Solution {
public:
    string reverseVowels(string s) {
        int l=0;
        int r=s.length()-1;
        const unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u',
                                     'A', 'E', 'I', 'O', 'U'};

        while(l<r){
            while (l < r && !vowels.count(s[l]))
        ++l;
      while (l < r && !vowels.count(s[r]))
        --r;
        swap(s[l++],s[r--]);
        }
        return s;
    }
};
