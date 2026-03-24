/*
Link : https://leetcode.com/problems/combination-sum-ii/description/
Date : 24-03-2026
*/

class Solution {
public:
    void solve(int index, int target, vector<int>& candidates,
               vector<vector<int>>& ans, vector<int>& curr) {
        // Base case
        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            // Considering Duplicate calls:
            if ((i > index) && (candidates[i] == candidates[i - 1]))
                continue;
            // if the number is greater than target:
            if (candidates[i] > target)
                break;
            // Recursion Call:
            curr.push_back(candidates[i]);
            solve(i + 1, target - candidates[i], candidates, ans, curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        solve(0, target, candidates, ans, curr);
        return ans;
    }
};