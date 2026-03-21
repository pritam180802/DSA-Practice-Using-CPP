// PRINTING ALL THE SUBSEQUENCES OF A STRING :

#include<iostream>
using namespace std;

void printSubsequence(string str,string tillNow){

  if(str.size() == 0){     // Base Case
    cout<<tillNow<<endl;
    return;
  }

  printSubsequence(str.substr(1),tillNow + str[0]);
  printSubsequence(str.substr(1),tillNow);
}

int main(){
  string input;
  cout<<"Enter a String : ";
  cin>>input;
  cout<<"The subsequences are : "<<endl;
  printSubsequence(input,"");
}