/*
5. Longest Palindromic Substring
Medium
24.9K
1.5K
Companies
Given a string s, return the longest 
palindromic
 
substring
 in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.

*/

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()==1 )return s;
        if(s.length()==2 && s[0]==s[1])return s;

        int start=0;
        int end=0;
        for(int i=0;i<s.length();i++){
            int len1 = expandFromcenter(s,i,i+1);
            int len2 = expandFromcenter(s,i,i);
            int len = max(len1,len2);
            if(end-start<len){
                start = i - (len-1)/2;
                end = i + len/2;
            }
        }
        return s.substr(start,end-start+1);
    }
    
    int expandFromcenter(string s,int i,int j){
        while(i>=0 && j<s.length() && s[i]==s[j]){
            i--;
            j++;
        } 
        return j-i-1;
    }
};
