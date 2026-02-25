// REVERSE AN ARRAY USING RECURSION : 

#include<iostream>
using namespace std;

void reverse(int arr[],int n){
  if(n == 0 || n == 1)         // Base Case
  return;
  else {
    // Swapping first & Last elememt
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;

    reverse(arr+1,n-2);
  }
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
  reverse(arr,size);
  cout<<"The Reversed array is : ";
  for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
  }
}