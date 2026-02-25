// FINDING WHETHER AN ARRAY IS SORTED OR NOT USING RECURSION : 

#include<iostream>
using namespace std;

bool IsSorted(int arr[],int n){
  if(n == 0 || n == 1)           // Base Case
  return 1;
  else if(arr[0] > arr[1])       // Base Case
  return 0;
  else 
  return IsSorted(arr+1,n-1);    // Recursion
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
  if(IsSorted(arr,size))
  cout<<"The array is Sorted !!!";
  else
  cout<<"The array is not Sorted !!!";
}