/*

1768. Merge Strings Alternately
Easy
1.9K
33
Companies
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d

*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      /*  
        int cnt=word1.length()+word2.length();
        if(word1=="") return word2;
        if(word2=="") return word1;

        string str="";
        while(str.length()!=cnt){
            int c=1;
            if(word1.length()<word2.length()){
            for(int i=0;i<word1.length();i++){
                str=str+word1[i]+word2[i];
                c++;
            }
            for(int j=c;j<word2.length();j++){
                str=str+word2[j];
            }
            }
            else if(word1.length()>=word2.length()){
                    for(int i=0;i<word2.length();i++){
                str=str+word1[i]+word2[i];
                c++;
            }
            for(int j=c;j<word1.length();j++){
                str=str+word1[j];
            }
            }

        }
        return str;*/

        int mini_size_str = min(word1.length(),word2.length());
        string result="";
        for(int i=0;i<mini_size_str;i++){
            result=result+word1[i];
            result=result+word2[i];
        }
        return result+word1.substr(mini_size_str)+word2.substr(mini_size_str);
    }
};
