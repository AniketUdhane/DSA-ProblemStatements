/*
31. Next Permutation
Medium
14.8K
4.1K
Companies
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]

*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     /*   if(nums[1]>nums[2]){
            sort(nums.begin(),nums.end());
        }else{
            int temp=nums[1];
            nums[1]=nums[2];
            nums[2]=temp;
        }*/
        //null checks
        if(nums.size()==0||nums.empty())
        return;

// find k
        int n = nums.size();
        int k = n-2;
        for(int i=n-1;i>0;i--){
            if(nums[i]<=nums[i-1]){
                k--;
            }else{
                break;
            }
        }
        // if k==-1 reverse
        if(k==-1){
            reverse(nums,0,n-1);
            return;
        }
        // else replace k with next greater element reverse
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[k]){
                int temp=nums[k];
            nums[k]=nums[i];
            nums[i]=temp;
            break;
            }
        }
        reverse(nums,k+1,n-1);
        
    }
    void reverse(vector<int>& arr,int start,int end){
        while(start<end){
            int temp = arr[start];
            arr[start]= arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
};
