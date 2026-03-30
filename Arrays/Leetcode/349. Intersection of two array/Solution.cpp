/*
Link : https://leetcode.com/problems/intersection-of-two-arrays/description/
Date : 30-03-2026
*/

class Solution {
public:
    bool isPresent(vector<int> &arr,int key){
        for(auto ele: arr)
          if(ele == key) return 1;
        return 0;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> temp;
        vector<int> ans;  
        for(int i=0;i<nums1.size();i++){
            if(isPresent(nums2,nums1[i]))
              temp.insert(nums1[i]);
        }
        for(auto ele:temp)
          ans.push_back(ele);
        return ans;
    }
};