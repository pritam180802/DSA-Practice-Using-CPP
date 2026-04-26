Link : https://www.geeksforgeeks.org/problems/wave-array-1587115621/1
Date : 26-04-2026

class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int size = arr.size();
        for(int i=0;i<=size-2;i+=2)
          swap(arr[i],arr[i+1]);
    }
};