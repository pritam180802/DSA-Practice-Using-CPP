/*
Link : https://leetcode.com/problems/sort-colors/description/
Date : 26-03-2026
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;
        // Counting red, white, and blue objects
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                red++;
            else if (nums[i] == 1)
                white++;
            else
                blue++;
        }
        int k = 0;
        for (int i = 0; i < red; i++)
            nums[k++] = 0;
        for (int i = 0; i < white; i++)
            nums[k++] = 1;
        for (int i = 0; i < blue; i++)
            nums[k++] = 2;
    }
};


// Follow up: Could you come up with a one-pass algorithm using only constant extra space?