// Rat in a maze Problem(Recursion + Backtracking)

#include<iostream>
#include<vector>
using namespace std;

void solve(int row,int col,int size,int board[][20],vector<vector<int>> &visited){

  // Base case
  if(board[row][col] == 0)   // Special Case
  return;
  if(row == size-1 && col == size-1){
    visited[row][col] = 1;
    for(int i=0;i<size;i++){
      for(int j=0;j<size;j++)
      cout<<visited[i][j]<<" ";
      cout<<endl;
    }
    cout<<endl;
    visited[row][col] = 0;
  }

  // Down
  if(board[row+1][col] == 1 && visited[row+1][col]==0){
    visited[row][col] = 1;
    solve(row+1,col,size,board,visited);
    visited[row][col] = 0;
  }

  // Up
  if(board[row-1][col] == 1 && visited[row-1][col]==0){
    visited[row][col] = 1;
    solve(row-1,col,size,board,visited);
    visited[row][col] = 0;
  }

  // Left
  if(board[row][col-1] == 1 && visited[row][col-1]==0){
    visited[row][col] = 1;
    solve(row,col-1,size,board,visited);
    visited[row][col] = 0;
  }

  // Right
  if(board[row][col+1] == 1 && visited[row][col+1]==0){
    visited[row][col] = 1;
    solve(row,col+1,size,board,visited);
    visited[row][col] = 0;
  }
}

int main(){
  int board[20][20] = {{1,1,0},{1,1,0},{0,1,1}};
  vector<vector<int>> visited(20, vector<int>(20, 0));
  solve(0,0,3,board,visited);

}
