/*

7. Reverse Integer
Medium
10.5K
12.1K
Companies
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

*/

class Solution {
public:
    int reverse(int x) {
        long long int reverse=0;

        if(x>0){
            int n=x;
            while(n>0){
                int digit=n%10;
                reverse=reverse*10+digit;
                n=n/10;
            }
        }else if(x<0){
            int n=abs(x);
            while(n>0){
                int digit=n%10;
                reverse=reverse*10+digit;
                n=n/10;
            }
            reverse=0-reverse;
        }
        return (reverse < INT_MIN || reverse > INT_MAX) ? 0 : reverse;
       
    }
};
