class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int index){
        if(i < 0 || j < 0 || i == board.size() || j == board[0].size() || word[index] != board[i][j])
            return false;
        if(index == word.size() - 1)
            return true;
        char c = board[i][j];
        board[i][j] = '*';
        if(dfs(board, word, i+1, j, index+1) || dfs(board, word, i, j+1, index+1) || dfs(board, word, i-1, j, index+1) || dfs(board, word, i, j-1, index+1))
            return true;
        board[i][j] = c;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i<board.size(); i++)
            for(int j = 0; j<board[0].size(); j++)
                if(dfs(board, word, i, j, 0))
                    return true;
        return false;
    }
};
