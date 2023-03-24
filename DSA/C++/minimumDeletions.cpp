/*
2091. Removing Minimum and Maximum From Array
Medium
704
35
Companies
You are given a 0-indexed array of distinct integers nums.

There is an element in nums that has the lowest value and an element that has the highest value. We call them the minimum and maximum respectively. Your goal is to remove both these elements from the array.

A deletion is defined as either removing an element from the front of the array or removing an element from the back of the array.

Return the minimum number of deletions it would take to remove both the minimum and maximum element from the array.

 

Example 1:

Input: nums = [2,10,7,5,4,1,8,6]
Output: 5
Explanation: 
The minimum element in the array is nums[5], which is 1.
The maximum element in the array is nums[1], which is 10.
We can remove both the minimum and maximum by removing 2 elements from the front and 3 elements from the back.
This results in 2 + 3 = 5 deletions, which is the minimum number possible.
Example 2:

Input: nums = [0,-4,19,1,8,-2,-3,5]
Output: 3
Explanation: 
The minimum element in the array is nums[1], which is -4.
The maximum element in the array is nums[2], which is 19.
We can remove both the minimum and maximum by removing 3 elements from the front.
This results in only 3 deletions, which is the minimum number possible.
Example 3:

Input: nums = [101]
Output: 1
Explanation:  
There is only one element in the array, which makes it both the minimum and maximum element.
We can remove it with 1 deletion.

*/

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
  /*      int count=1;
        int min=nums[0];
        int max=nums[0];
        if(nums.size()==1){
    
            return count;
        }
       /* if(nums[0]>nums[1]){
            max=nums[0];
            min=nums[1];
        }else if(nums[0]<nums[1]){
            min=nums[0];
            max=nums[1];
        }
        int indx1=0;
        int indx2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                indx1=i;
                
            }
            if(nums[i]<min){
                min=nums[i];
                indx2=i;
            }
        }

        for(int j=indx1;j<indx2;j++){
            if(nums[j]==min||nums[j]==max && nums[j+1]==max||nums[j+1]==min ){
                count=count+1;
                break;
            }
            count++;
        }
        
        return count;*/ 
        
        int n = nums.size();
        int a = min_element(begin(nums), end(nums)) - begin(nums);
        int b= max_element(begin(nums),end(nums))-begin(nums);
        if(a>b){
            swap(a,b);
        }
        return min({a+1+n-b,b+1,n-a});

         }
};
