/*
Link : https://leetcode.com/problems/combination-sum/
Date : 23-03-26
*/

class Solution {
public:
    void solve(int index, int target, vector<int>& candidates,
               vector<vector<int>>& ans, vector<int>& curr) {
        int size = candidates.size();
        // Base Case:
        if (index == size) {
            if (target == 0) {
                ans.push_back(curr);
                return;
            } else
                return;
        }
        // Here we have 2 choices ==> Either pick or leave, but there are a condition to pick : 
        // Pick
        if (candidates[index] <= target) {
            curr.push_back(candidates[index]);
            solve(index, target - candidates[index], candidates, ans, curr);
            curr.pop_back();
        }
        // Leave
        solve(index + 1, target, candidates, ans, curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        solve(0, target, candidates, ans, curr);
        return ans;
    }
};