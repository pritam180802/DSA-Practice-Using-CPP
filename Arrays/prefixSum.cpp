// Prefixsum[i]  ===> Sum of elements of index 0 to index i of an array .

#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter the size of array: ";
    int size;
    cin>>size;
    int *arr = new int[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<"'th elememt : ";
        cin>>arr[i];
    }
    cout<<"The elements are: ";
    print(arr,size);

    // Prefix sum calculation :
    int *prefixSum = new int[size];
    prefixSum[0] = arr[0];
    for(int i=1;i<size;i++)
      prefixSum[i] = prefixSum[i-1] + arr[i];

    cout<<"\nThe elements of the prefix sum array is: ";
    print(prefixSum,size);
}