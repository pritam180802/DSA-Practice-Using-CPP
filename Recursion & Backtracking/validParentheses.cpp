// GENERATE VALID PARENTHESES :

#include<iostream>
using namespace std;

void gen(string tillNow,int left_rem,int right_rem){
  if(left_rem==0 && right_rem==0){        // Base Case
    cout<<tillNow<<endl;
    return;
  }
  if(left_rem>0)
    gen(tillNow + "(" , left_rem-1, right_rem);
  if(left_rem<right_rem && right_rem>0)
    gen(tillNow + ")" , left_rem, right_rem-1);
}
int main(){
  int n;
  cout<<"Enter a value of n: ";
  cin>>n;
  gen("",n,n);
}
