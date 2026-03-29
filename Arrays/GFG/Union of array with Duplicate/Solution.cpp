/*
Link : https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1
Date : 29-03-2026
*/

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) { 
        
        set<int>temp;
        
        for(int i=0;i<a.size();i++)
          temp.insert(a[i]);
        for(int i=0;i<b.size();i++)
          temp.insert(b[i]);
          
        vector<int> ans;
        
        for(auto ele:temp)
          ans.push_back(ele);
          
        return ans;
    }
};