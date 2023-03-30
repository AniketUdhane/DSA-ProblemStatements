/*
217. Contains Duplicate
Easy
8.7K
1.1K
Companies
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
   /*    int a=nums[0];

        for(int i=1;i<nums.size();i++){
            if(a==nums[i])
            return true;
     
        }
        return false;
    }
    */
    unordered_set<int> seen;

    for(const int num:nums){
        if(!seen.insert(num).second){
            return true;
        }
    }
    return false;
    }
};
