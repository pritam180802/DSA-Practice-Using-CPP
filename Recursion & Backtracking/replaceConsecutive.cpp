// REPLACE EVERY CONSECUTIVE CHARACTER BY SINGLE CHARACTER USING RECURSION 

#include<iostream>
#include<string.h>
using namespace std;

void replaceConsecutive(char input[]){
  int length = strlen(input);

  if(length == 0 || length == 1)   // Base Case
    return;

  if(input[0] == input[1]){
    for(int i=0; i<length; i++)
      input[i] = input[i+1];
    replaceConsecutive(input + 1);
  }
  else                                        
    replaceConsecutive(input + 1);
}

int main(){
  char str[100];
  cout<<"Enter a String : ";
  cin>>str;
  replaceConsecutive(str);
  cout<<"The updated String is :"<<str;
}