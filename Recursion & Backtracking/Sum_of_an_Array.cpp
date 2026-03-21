// FINDING SUM OF ELEMENTS OF AN ARRAY USING RECUSTION : 

#include<iostream>
using namespace std;

int findSum(int arr[],int n){
  if(n == 0)          // Base Case
  return 0;
  else if(n == 1)       
  return arr[0];
  else
  return arr[0] + findSum(arr+1,n-1);  // Recursion
}

int main(){
  int size;
  cout<<"Enter size of the Array : ";
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cout<<"Please enter the "<<i+1<<"'th element of the array :";
    cin>>arr[i];
  }
  cout<<"The sum of elements of the array is : "<<findSum(arr,size);
}