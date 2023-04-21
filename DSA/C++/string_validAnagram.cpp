/*

242. Valid Anagram
Easy
8.8K
283
Companies
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1=s.length();
        int l2=t.length();

        if(l1!=l2) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0;i<l1;i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
       /* bool b=false;
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(s[i]==t[j]){
                    b=true;
                   // break;
                }
            }
        }
        return false;*/
    }
};

