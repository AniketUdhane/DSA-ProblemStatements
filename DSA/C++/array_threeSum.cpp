/*
15. 3Sum
Medium
25K
2.3K
Companies
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<0){
            return {};
        }
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());

        for(int i=0;i+2<nums.size();i++){
             if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j=i+1;
            int k=nums.size()-1;

            while(j<k){
                int sum=nums[j]+nums[k];
                if(sum==-nums[i]){
                    answer.push_back({nums[i],nums[j],nums[k]});
                    j++;k--;
                    while (j < k && nums[j] == nums[j - 1])
                        ++j;
                    while (j < k && nums[k] == nums[k + 1])
                        --k;
                }else if(sum<-nums[i]){
                    j++;
                }else if(sum>-nums[i]){
                    k--;
                }
            }
        }
        return answer;

    }
};

