class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int , vector<int> , greater<int>> pq;
        for(int i = 0 ; i < matrix.size() ; ++i){
            for(int j = 0 ; j < matrix[0].size() ; ++j){
                pq.push(matrix[i][j]);
            }    
        }
        k = k - 1;
        while(k--){
            pq.pop();
        }
        return pq.top();
    }
};
