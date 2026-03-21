#include<iostream>
#include<algorithm>
using namespace std;

bool bSearch(int start,int end,int key,int arr[]){
    while(start <= end){
       int mid = (start+end)/2;
       if(arr[mid] == key)
         return true;
        else if(arr[mid]<key)
          start = mid+1;
        else 
          end = mid-1;
    }
    return false;
}

int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<"'s element: ";
        cin>>arr[i];
    }
    sort(arr,arr+size);
    int key;
    cout<<"Enter a elememt to search: ";
    cin>>key;
    if(bSearch(0,size-1,key,arr))
    cout<<"Present";
    else
    cout<<"Not Present!!!!";
}