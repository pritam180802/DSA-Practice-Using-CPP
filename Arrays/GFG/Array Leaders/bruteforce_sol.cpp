/*
Link : https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
Date : 03-04-2026
*/

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        bool flag;
        for(int i=0;i<arr.size()-1;i++){
            flag = 1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]<=arr[j]){
                    flag = 0;
                    break;
                }
            }
            if(flag) ans.push_back(arr[i]);
        }
        ans.push_back(arr[arr.size()-1]);
        return ans;
    }
};