class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

     int m = matrix.size();
        int n = matrix[0].size();
        int start_row = 0 , start_col = 0;
        int end_row = m-1 , end_col = n-1;
        vector<int>result;
        while(start_row <= end_row and start_col <= end_col) {
        for(int j=start_col ; j<=end_col ; j++)
        {
            int ans = matrix[start_row][j];
            result.push_back(ans);
        }
        start_row++;
        for(int i = start_row ; i<=end_row ; i++)
        {
            int ans = matrix[i][end_col];
            result.push_back(ans);
        }
        end_col--;
        if(start_row <= end_row) {
        for(int j= end_col ; j>=start_col ; j--)
        {
            int ans = matrix[end_row][j];
            result.push_back(ans);
        }
        end_row--;
         }
        if(start_col<= end_col)
        {
            for(int i=end_row ; i>=start_row ; i--)
            {
                int ans = matrix[i][start_col];
                result.push_back(ans);
            }
            start_col++;
        }
    }

    return result;
}


};
