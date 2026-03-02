// RETURN POWER SET OF A SET :

#include<iostream>
#include<vector>
using namespace std;

void power(int index ,int size, int arr[], vector<int> curr, vector<vector<int>> &output){
  // Base case
  if(index == size){
    output.push_back(curr);
    return;
  }
  curr.push_back(arr[index]);
  power(index+1, size, arr , curr , output);
  // Backtracking
  curr.pop_back();                             
  power(index+1, size, arr , curr , output);
}
int main(){
  int n;
  cout<<"Enter the size of Array: ";
  cin>>n;
  int *arr = new int[n];
  for(int i=0;i<n;i++){
    cout<<"Enter "<<i+1<<"'s element: ";
    cin>>arr[i];
  }
  vector<int> temp;
  vector<vector<int>> output;
  power(0,n,arr,temp,output);
  for(auto vec:output){
    for(auto ele:vec)
      cout<<ele<<" ";
    cout<<endl;
  }
}
