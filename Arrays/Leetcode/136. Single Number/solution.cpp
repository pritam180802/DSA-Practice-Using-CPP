/*
Link: https://leetcode.com/problems/single-number/description/
Date: 27-03-2026
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans ^= nums[i];
        }
        return ans;
    }
};