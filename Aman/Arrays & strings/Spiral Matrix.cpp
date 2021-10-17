class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int tp=0,dn=n-1,lf=0,rt=m-1,dir=0;
        vector<int>res;
        while(tp<=dn && lf<=rt)
        {
            if(dir==0)
            {
                for(int i=lf;i<=rt;i++)
                {
                    res.push_back(mat[tp][i]);
                }
                tp++;
                dir++;
            }
            else if(dir==1)
            {
                for(int i=tp;i<=dn;i++)
                {
                    res.push_back(mat[i][rt]);
                }
                rt--;
                dir++;
            }
            else if(dir==2)
            {
                for(int i=rt;i>=lf;i--)
                {
                    res.push_back(mat[dn][i]);
                }
                dn--;
                dir++;
            }
            else if(dir==3)
            {
                for(int i=dn;i>=tp;i--)
                {
                    res.push_back(mat[i][lf]);
                }
                lf++;
                dir++;
            }
            dir=dir%4;
        }
        return res;
    }
};
