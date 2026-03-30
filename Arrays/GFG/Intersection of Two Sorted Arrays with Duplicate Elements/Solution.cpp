/*
Link : https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-arrays-with-duplicate-elements/1
Date : 30-03-2026
*/


//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        set<int>s;
        int p=0,q=0;
        
        while(p!=a.size() && q!=b.size()){
            if(a[p]<b[q]) 
              p++;
            else if(a[p]>b[q])
              q++;
            else{                // Found a common elememt
                s.insert(a[p]);
                p++;q++;
            }
        }
        
        vector<int> ans(s.begin(),s.end());
        return ans;
    }
};