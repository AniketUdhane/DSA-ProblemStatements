/*
647. Palindromic Substrings
Medium
8.9K
188
Companies
Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 

Constraints:

1 <= s.length <= 1000
s consists of lowercase English letters.

*/

class Solution {
public:
    int countSubstrings(string s) {
      /*  int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=s[i+1]){
                count=count+1;
            }
            else{
                for(int j=i;j<s.length();j++){
                    if(s[i]==s[j]){
                        count++;
                    }else{
                        count++;
                    }
                }
            }
        }
        return count;
        */
        int ans = 0;
        for(int i=0;i<s.length();i++){
            int l=i;
            int r=i;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                ans++;
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                ans++;
                l--;
                r++;
            }
        }
        return ans;
    }
};
