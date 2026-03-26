/*
Link : https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
Date : 26-03-2026
*/

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        
        int k = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 0)
              swap(arr[i],arr[k++]);
        }
        
    }
};