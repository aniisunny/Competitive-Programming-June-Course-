class Solution {
public:
    
    typedef pair<int,int>p;
    
    struct cmp{
        bool operator()(p&x, p&y)
        {
            if(x.first==y.first)
            {
                return x.second<y.second;
            }
            else
                return x.first<y.first;
            
        }
    };
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
     vector<int>res;
     unordered_map<int,int>mp;
     priority_queue<p,vector<p>,cmp>pq;
     for(int i=0;i<mat.size();i++)
     {
         int cnt=0;
         for(int j=0;j<mat[0].size();j++)
         {
           if(mat[i][j]==1)
             cnt++;
         }
         pq.push({cnt,i});
         if(pq.size()>k)
           pq.pop();
     }
     while(pq.size()>0)
     {
         res.push_back(pq.top().second);
         pq.pop();
     } 
     reverse(res.begin(),res.end());
     return res;    
    }
};
