class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& pnt, int k) {
        vector<vector<int>> res;
        priority_queue<pair<int,pair<int,int>>>maxh;
        for(int i=0;i<pnt.size();i++)
        {
            maxh.push({pnt[i][0]*pnt[i][0]+pnt[i][1]*pnt[i][1],{pnt[i][0],pnt[i][1]}});
            if(maxh.size()>k)
              maxh.pop();
        }
        while(maxh.size()>0)
        {
            pair<int,int>p=maxh.top().second;
            maxh.pop();
            vector<int>v;
            v.push_back(p.first);
            v.push_back(p.second);
            res.push_back(v);
        }
        return res;
    }
};
