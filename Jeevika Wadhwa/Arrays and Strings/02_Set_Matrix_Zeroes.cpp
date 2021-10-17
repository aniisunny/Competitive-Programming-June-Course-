class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        set<int>rows, cols;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(auto row:rows)
            for(int i=0;i<a[0].size();i++)
                a[row][i]=0;
        
        for(auto col:cols)
            for(int j=0;j<a.size();j++)
                a[j][col]=0;
    }
};
