// PERMUTATION OF A GIVEN STRING :

#include<iostream>
using namespace std;

void permute(int index,string input){
  if(index == input.size()-1){   // Base case
    cout<<input<<endl;
    return;
  }
  for(int i=index;i<input.size();i++){
    swap(input[index],input[i]);
    permute(index+1 , input);
    swap(input[index],input[i]);  // Backtracking
  }
}

int main(){
  string str;
  cout<<"Enter a String: ";
  cin>>str;
  permute(0,str);
}
