/*
2390. Removing Stars From a String
Medium
1.4K
104
Companies
You are given a string s, which contains stars *.

In one operation, you can:

Choose a star in s.
Remove the closest non-star character to its left, as well as remove the star itself.
Return the string after all stars have been removed.

Note:

The input will be generated such that the operation is always possible.
It can be shown that the resulting string will always be unique.
 

Example 1:

Input: s = "leet**cod*e"
Output: "lecoe"
Explanation: Performing the removals from left to right:
- The closest character to the 1st star is 't' in "leet**cod*e". s becomes "lee*cod*e".
- The closest character to the 2nd star is 'e' in "lee*cod*e". s becomes "lecod*e".
- The closest character to the 3rd star is 'd' in "lecod*e". s becomes "lecoe".
There are no more stars, so we return "lecoe".
Example 2:

Input: s = "erase*****"
Output: ""
Explanation: The entire string is removed, so we return an empty string.

*/

class Solution {
public:
    string removeStars(string s) {
     /*   string str;
        str.assign(s);
        int size = str.length();
        int l = 0;
        int r = 1;
        char ch1 = str[l];
        char ch2 = str[r];

        while(l<size){
            if(ch2!='*'){
                l++;
                r++;
            }else if(ch2=='*')
                str.erase(l,r);
                l--;
                r--;
                size=size-2;
            }
        }
   
    return str.toString();
       */
       string answer;

       for(const char c:s){
           if(c!='*'){
               answer.push_back(c);
           }else if(c=='*'){
               answer.pop_back();
           }
       }
       return answer;

    }
};
