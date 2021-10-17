class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n = a.size();
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                swap(a[i][j], a[j][i]);
        for(int i=0;i<n;i++)
        {
            int start = 0, end = n-1;
            while(start < end){
                int t = a[i][start];
                a[i][start]  = a[i][end];
                a[i][end] = t;
                start++,end--;
            }
        }
    }
};
