/*
125. Valid Palindrome
Easy
6.5K
6.9K
Companies
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/
class Solution {
public:
    bool isPalindrome(string s) {
      //  transform(s.begin(),s.end(),s.begin(),::tolower);
        string str="";
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                str+=tolower(s[i]);
            }else if(isdigit(s[i])){
                str=str+s[i];
            }
        }
        string str1=str;
        reverse(str1.begin(),str1.end());
        return str1==str;

        
    }
};
