// UPDATING THE SUBSEQUENCES OF A STRING IN A GIVEN VECTOR :

#include<iostream>
#include<vector>
using namespace std;

void sub(string str,string tillNow,vector<string>&v){

  if(str.size() == 0){     // Base Case
    v.push_back(tillNow);
    return;
  }

  sub(str.substr(1),tillNow + str[0],v);
  sub(str.substr(1),tillNow,v);
}

int main(){
  string input;
  vector<string>output;
  cout<<"Enter a String : ";
  cin>>input;
  sub(input,"",output);
  cout<<"The "<<output.size()<<" subsequences are : "<<endl;
  for(int i=0;i<output.size();i++)
    cout<<output[i]<<endl;
}