/*
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnNumber = 1
Output: "A"
Example 2:

Input: columnNumber = 28
Output: "AB"
Example 3:

Input: columnNumber = 701
Output: "ZY"
*/


class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result="";
        int n=columnNumber;
        while(n){
            char ch='A'+(n-1)%26;
            result=ch+result;
            n=(n-1)/26;
        }
        return result;
    }
};
