class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, greater<int>>minHeap;
        for(int i = 0; i<matrix.size(); i++)
            for(int j = 0; j<matrix[0].size(); j++)
                minHeap.push(matrix[i][j]);
        while(--k)
            minHeap.pop();
        return minHeap.top();
    }
};
