class Solution {
public:
    bool isSafe(char value,int Row,int Col,vector<vector<char>> Board){
        int size = Board.size();

        // Row
        for(int col=0;col<size;col++){
            if(Board[Row][col]==value)
            return false;
        }

        // Column
        for(int row=0;row<size;row++){
            if(Board[row][Col]==value)
            return false;
        }

        // Box property
        int rowStart = Row - Row % 3 ;
        int colStart = Col - Col % 3 ;
        int last1 = rowStart+3;
        int last2 = colStart+3;
        for(int x=rowStart;x<last1;x++){
            for(int y=colStart;y<last2;y++){
                if(Board[x][y]==value)
                return false;
            }
        }
        return true;
    }

    bool Solve(vector<vector<char>>& board){
        int n = board.size();
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0; j<n ;j++)
            {
                if(board[i][j]=='.'){
                    for(char val='1';val<='9';val++)
                    {   
                        if(isSafe(val,i,j,board)){
                            board[i][j] = val;
                            bool kyasolutiondepaoge = Solve(board);
                            if(kyasolutiondepaoge)
                            return true;
                            board[i][j] = '.';
                        }  
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        Solve(board);
    }
};