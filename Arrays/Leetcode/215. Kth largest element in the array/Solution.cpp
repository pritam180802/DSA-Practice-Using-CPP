/*
Link : https://leetcode.com/problems/kth-largest-element-in-an-array/description/
Date : 29-03-2026
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq; // Max Heap

        for(int i=0;i<nums.size();i++)
          pq.push(nums[i]);

        for(int i=1;i<k;i++)
          pq.pop();

        return pq.top();
    }
};