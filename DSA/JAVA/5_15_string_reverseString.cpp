//leetcode solution - reverse string

/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/


class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0;
int m=s.size()-1;
while(l<m){
    swap(s[l++],s[m--]);
}
    }
};
