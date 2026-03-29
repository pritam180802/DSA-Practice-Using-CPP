/*
Link : https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
Date : 29-03-2026
*/

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        
        int *temp = new int[arr.size()];
        int k = 0;
        
        // Placing positive elements
        for(int i=0;i<arr.size();i++){   
            if(arr[i] >= 0) 
              temp[k++]=arr[i];
        }
        // Placing negative element followed by positive
        for(int i=0;i<arr.size();i++){
            if(arr[i] < 0) 
              temp[k++]=arr[i];
        }
        
        for(int i=0;i<arr.size();i++){
            arr[i] = temp[i];
        }
    }
};