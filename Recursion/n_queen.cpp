// N-Queen Problem (Recursion + Backtracking)

#include<iostream>
using namespace std;

bool isSafe(int row,int col,int size,int board[][20]){
  int duprow = row;
  int dupcol = col;

  //Case 1:
  while(col >= 0){
    if(board[row][col] == 1)
    return 0;
    col--;
  }
  row=duprow;
  col=dupcol;
  //Case 2:
  while(row>=0 && col>=0){
    if(board[row][col] == 1)
    return 0;
    row--;col--;
  }
  row=duprow;
  col=dupcol;
  //Case 3:
  while(row<size && col>=0){
    if(board[row][col] == 1)
    return 0;
    row++;col--;
  }
  return 1;
}

void solve(int col,int size,int board[][20]){

  // Base Case:
  if(col == size){
    for(int i=0;i<size;i++){
      for(int j=0;j<size;j++)
      cout<<board[i][j]<<" ";
      cout<<endl;
    }
    cout<<endl;
  }

  for(int row=0;row<size;row++){
    if(isSafe(row,col,size,board)){
      board[row][col] = 1;
      solve(col+1,size,board);
      board[row][col] = 0;      // Backtracking
    }
  }
}

int main(){
  int board[20][20]={0};
  int n;
  cout<<"Enter the size of board: ";
  cin>>n;
  solve(0,n,board);
}