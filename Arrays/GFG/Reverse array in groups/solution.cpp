/*
Link : https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
Date : 31-03-2026
*/

class Solution {
  public:
    int min(int x,int y){
        return x>y?y:x;
    }
    void reverseInGroups(vector<int> &arr, int k) {
       int left,right;
       for(int i=0;i<arr.size();i+=k){
           
           // Swapping
           left = i;
           right = min(i+k-1,arr.size()-1);  // For handling the last iteration
           
           while(start<end)
               swap(arr[start++],arr[end--]);
       } 
    }
};
