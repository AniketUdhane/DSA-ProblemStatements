/*
Given two binary strings a and b, return their sum as a binary string.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

*/

class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        string result="";
        int i=0,sum;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        while(i<a.size() || i<b.size()){
            sum=carry;
            if(i<a.size()) sum=sum+a[i]-'0';
            if(i<b.size()) sum=sum+b[i]-'0';

            if(sum==0) carry=0, result=result+'0';
            else if(sum==1) carry=0, result=result+'1';
            else if(sum==2) carry=1, result=result+'0';
            else carry=1,result=result+'1';
            i++;
        }
        if(carry==1){
            result=result+'1';
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
