class Solution {
public:
    class TrieNode{
    public:
        TrieNode *child[26];
        string endword;
    }*root = new TrieNode();
    vector<string>ans;
    void dfs(vector<vector<char>>& board, TrieNode *root, int i, int j){
        if(i < 0 || i == board.size() || j < 0 || j == board[0].size())
            return;
        char c = board[i][j];
        int trieIndex = c - 'a';
        if(c == '#' || root->child[trieIndex] == NULL)
            return;
        root = root->child[trieIndex];
        if(root->endword.size() != 0){
            ans.push_back(root->endword);
            root->endword = "";
        }
        board[i][j] = '#';
        dfs(board, root, i+1, j);
        dfs(board, root, i, j+1);
        dfs(board, root, i, j-1);
        dfs(board, root, i-1, j);
        board[i][j] = c;
        
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode *temp;
        for(auto word : words){
            temp = root;
            for(char c : word){
                if(temp->child[c-'a'] == NULL)temp->child[c-'a'] = new TrieNode();
                temp = temp->child[c-'a'];
            }
            temp->endword = word;
        }
        for(int i = 0; i<board.size(); i++)
            for(int j = 0; j<board[0].size(); j++)
                dfs(board, root, i, j);
        return ans;            
    }
};
