/*
Link : https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
Date : 03-04-2026
*/

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int leader = arr[arr.size()-1];
        ans.push_back(leader);
        
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>=leader){
                leader = arr[i];
                ans.push_back(leader);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};