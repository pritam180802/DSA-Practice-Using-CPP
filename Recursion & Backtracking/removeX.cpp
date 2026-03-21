// REMOVING CHARACTER 'X' FROM A STRING USING RECURSION : 

#include<iostream>
#include<string.h>
using namespace std;

void removeX(char input[]){
  int length = strlen(input);
  if(length == 0)       // Base Case
    return;
  if(input[0] == 'x' || input[0] == 'X'){  // If the first letter is 'x'
    for(int i=0;i<length;i++)
      input[i] = input[i+1];
    removeX(input);
  }
  else                      // The first letter is not 'x'
    removeX(input + 1);
}

int main(){
  char str[100];
  cout<<"Enter a String : ";
  cin>>str;
  removeX(str);
  cout<<"The undated String is : "<<str;
}