// PRINTING ALL THE SUBSEQUENCES OF A STRING :(By the help of index)

#include<iostream>
using namespace std;

void printSubsequence(int index,string str,string tillNow){

  if(index == str.size()){     // Base Case
    cout<<tillNow<<endl;
    return;
  }

  printSubsequence(index + 1, str ,tillNow + str[index]);
  printSubsequence(index + 1, str , tillNow);
}

int main(){
  string input;
  cout<<"Enter a String : ";
  cin>>input;
  cout<<"The subsequences are : "<<endl;
  printSubsequence(0,input,"");
}