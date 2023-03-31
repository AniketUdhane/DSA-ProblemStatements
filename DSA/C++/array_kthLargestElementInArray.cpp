/*
215. Kth Largest Element in an Array
Medium
13.5K
669
Companies
Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

You must solve it in O(n) time complexity.

 

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4

*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
      /*  int num=0;
        for(int i=nums.size()-1;i>=nums.size()-k;i--){
            num=nums[i];
        }
        return num;*/
        return nums[nums.size()-k];
    }
};

