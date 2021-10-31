class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int m=matrix.size(),n=matrix[0].size();
        set<int> r,c;

        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[i].size();j++)
                if(matrix[i][j]==0)
                {
                    r.insert(i);
                    c.insert(j);
                }
        for(int i=0;i<m;i++)
            if(r.find(i)!=r.end())
                for(int j=0;j<n;j++)
                    matrix[i][j]=0;
        for(int j=0;j<n;j++)
            if(c.find(j)!=c.end())
                for(int i=0;i<m;i++)
                    matrix[i][j]=0;


    }
};
