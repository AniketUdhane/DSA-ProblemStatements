/*

238. Product of Array Except Self
Medium
16.9K
933
Companies
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
       /* vector<int> answer(nums.size());

        answer[0]=1;

        int i,j;
        for(i=0;i<nums.size();i++){
            int ans=1;
            for(j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                ans=ans*nums[j];
            }
            answer[i]= ans;
        }
    return answer;*/

        vector<int> answer(nums.size(),1);
        // answer[0]=1;
        for(int i=1;i<nums.size();++i){
            answer[i]=answer[i-1]*nums[i-1];
        }
        int suffix=1;
        for(int j=nums.size()-1;j>=0;--j){
            answer[j]=answer[j]*suffix;
            suffix=suffix*nums[j];
        }
return answer;
    }
};

