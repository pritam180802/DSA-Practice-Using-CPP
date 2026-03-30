/*
Link : https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
Date : 30-03-2026
*/


class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int>s;
        int p=0,q=0;
        
        while(p!=a.size() && q!=b.size()){
            if(a[p]<=b[q])
            s.insert(a[p++]);
            else
            s.insert(b[q++]);
        }
        
        // Insert remaining elements from a
        while (p < a.size())
        s.insert(a[p++]);
        
        // Insert remaining elements from b
        while (q < b.size())
        s.insert(b[q++]);
        
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};

