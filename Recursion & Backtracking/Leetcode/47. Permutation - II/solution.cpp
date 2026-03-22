/*
Link : https://leetcode.com/problems/permutations-ii/
Date : 23-03-26
*/

class Solution {
public:
    void solve(int index, vector<int>& nums, vector<vector<int>>& ans) {
        // Base Case:
        if (index == nums.size() - 1) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for (int i = index; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end()) // Checking the index element is
                                            // present in the set or not !!!
                continue;
            s.insert(nums[i]);
            swap(nums[index], nums[i]);
            solve(index + 1, nums, ans);
            swap(nums[index], nums[i]);   // Backtracking
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0, nums, ans);
        return ans;
    }
};