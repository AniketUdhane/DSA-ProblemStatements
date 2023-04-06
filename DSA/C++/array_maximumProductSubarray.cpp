/*

152. Maximum Product Subarray
Medium
15.6K
469
Companies
Given an integer array nums, find a 
subarray
 that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int m = ans;
        int n= ans;

        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(m,n);
            }
            m=max(nums[i],m*nums[i]);
            n=min(nums[i],n*nums[i]);
            ans=max(ans,m);
        }
        return ans;

// T=O(n)

    }
};

