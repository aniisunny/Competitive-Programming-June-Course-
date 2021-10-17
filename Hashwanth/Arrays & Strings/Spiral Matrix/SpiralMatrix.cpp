class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int sc=0,sr=0;
        int ec=n-1,er=m-1;
        vector<int> ans;
        while(sr<=er && sc<=ec)
        {
            //top row
            for(int i=sc;i<=ec;i++)
                ans.push_back(matrix[sr][i]);
            sr++;
            //last col
            for(int i=sr;i<=er;i++)
                ans.push_back(matrix[i][ec]);
            ec--;
            //last row
            if(er>=sr)
            {
                  for(int i=ec;i>=sc;i--)
                    ans.push_back(matrix[er][i]);
                  er--;
            }
            //beginning col
            if(ec>=sc)
            {
                  for(int i=er;i>=sr;i--)
                    ans.push_back(matrix[i][sc]);
            sc++;
            }
        }
        return ans;
    }
};
