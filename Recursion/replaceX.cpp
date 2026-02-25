// REPLACING CHARACTER 'X' BY 'abc' IN A STRING USING RECURSION : 

#include<iostream>
#include<string.h>
using namespace std;

void replaceX(char input[]){
  int length = strlen(input);
  if(length == 0)                          // Base Case
    return;
  if(input[0] == 'x' || input[0] == 'X'){  // If the first letter is 'x'
    for(int i=length; i>=1; i--)
      input[i+2] = input[i];
    input[0] = 'a';
    input[1] = 'b';
    input[2] = 'c';
    replaceX(input + 3);
  }
  else                                     // The first letter is not 'x'
    replaceX(input + 1);
}

int main(){
  char str[100];
  cout<<"Enter a String : ";
  cin>>str;
  replaceX(str);
  cout<<"The undated String is : "<<str;
}