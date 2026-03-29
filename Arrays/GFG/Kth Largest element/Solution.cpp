/*
Link : https://www.geeksforgeeks.org/problems/kth-largest-element5034/1
Date : 29-23-2026
*/


class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
        priority_queue<int> pq; // Max Heap

        for(int i=0;i<arr.size();i++)
          pq.push(arr[i]);

        for(int i=1;i<k;i++)
          pq.pop();

        return pq.top();
    }
};