class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            if(board[i][0]=='O')
                borderDfs(board,i,0);      
        }
        for(int j=0;j<n;j++)
        {
            if(board[0][j]=='O')
                borderDfs(board,0,j);
        }
        for(int i=1;i<m;i++)
        {
            if(board[i][n-1]=='O')
                borderDfs(board,i,n-1);      
        }
         for(int j=1;j<n;j++)
        {
            if(board[m-1][j]=='O')
                borderDfs(board,m-1,j);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='O') //can be captured
                    board[i][j]='X';  //capture
                else if(board[i][j]=='*')
                    board[i][j]='O';
            }
        }
        
    }
    void borderDfs(vector<vector<char>>& board, int i, int j)
    {
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='X' || board[i][j]=='*')
            return;
        board[i][j]='*'; //keep some special character
        borderDfs(board,i+1,j);
        borderDfs(board,i,j+1);
        borderDfs(board,i-1,j);
        borderDfs(board,i,j-1);
    }
};
