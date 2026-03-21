// TAKE A VALUE AS A INPUT & PRINT ALL THE COMBINATIONS OF STRINGS WHERE #A'S = #B'S = THAT INPUT VALUE
#include<iostream>
using namespace std;

void gen(string tillNow,int a,int b){
  if(a==0 && b==0){
    cout<<tillNow<<endl;
    return;
  }
  if(a>0)
    gen(tillNow + "A", a-1 , b);
  if(b>0)
    gen(tillNow + "B" , a , b-1);
}
int main(){
  int n;
  cout<<"Enter a value: ";
  cin>>n;
  gen("",n,n);
}