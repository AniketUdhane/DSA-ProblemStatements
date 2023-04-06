/*
42. Trapping Rain Water
Hard
25.8K
354
Companies
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9

*/

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
       
        //int left[] = new int[n];
        //int right[] = new int[n];
        vector<int> left(n);
        vector<int> right(n);
        left[0]= height[0];

        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
        }
        right[n-1]= height[n-1];
        for(int j = n-2;j>=0;j--){
            right[j] = max(height[j],right[j+1]);
        }

        int ans=0;

        for(int k=0;k<n;k++){
            ans= ans + min(right[k],left[k])-height[k];
        }
        return ans;
    }
};

