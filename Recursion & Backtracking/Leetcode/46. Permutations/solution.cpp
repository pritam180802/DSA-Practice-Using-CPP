/*
Link : https://leetcode.com/problems/permutations/description/
Date : 23-02-26
*/
class Solution {
public:
    void solve(int index,vector<int>& nums,vector<vector<int>>&ans){
        //Base Case:
        if(index == nums.size()-1){
            ans.push_back(nums);
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            solve(index+1,nums,ans);
            swap(nums[index],nums[i]);  // Backtracking
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(0,nums,ans);
        return ans;
    }
};