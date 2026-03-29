/*
Link : https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
Date : 29-09-2026
*/

class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        
        priority_queue<int,vector<int>,greater<int>> pq;  // Min Heap 
        
        for(int i=0;i<arr.size();i++)
          pq.push(arr[i]);
          
        for(int i=1;i<k;i++)
          pq.pop();
          
        return pq.top();
    }
};