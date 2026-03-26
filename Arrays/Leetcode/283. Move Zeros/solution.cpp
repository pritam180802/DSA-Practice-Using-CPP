/*
Link : https://leetcode.com/problems/move-zeroes/
Date: 26-03-2026
*/

class Solution {
public:
    void solve(vector<int>& nums){
        int k=0;  // K represent the index of first non-zero element
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0)
              swap(nums[i],nums[k++]);
        }
    }
    void moveZeroes(vector<int>& nums) {
        solve(nums);
    }
};