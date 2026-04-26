Link : https://leetcode.com/problems/first-missing-positive/
Date : 26-04-2026

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(nums[i] != i+1){   // Not in correct position !!!
                if(nums[i]<=0 || nums[i]>size)
                  continue;
                if(nums[i] != nums[nums[i]-1]){
                    swap(nums[i],nums[nums[i]-1]);
                    i--;
                }
                
            }
        }
        for(int i=0;i<size;i++){
            if(nums[i] != i+1)
              return i+1;
        }
        return size+1;
    }
};