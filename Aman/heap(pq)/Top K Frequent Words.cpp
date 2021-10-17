class Solution {
public:
    typedef pair<int,string>p;
    
    struct cmp{
        bool operator()(p&x, p&y)
        {
            if(x.first==y.first)
            {
                return x.second<y.second;
            }
            else
                return x.first>y.first;
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>res;
        unordered_map<string,int>mp;
        priority_queue<p,vector<p>,cmp>minh;
        for(int i=0;i<words.size();i++)
          mp[words[i]]++;
        for(auto m:mp)
        {
            minh.push({m.second,m.first});
            if(minh.size()>k)
              minh.pop();
        }
        while(minh.size()>0)
        {
            res.push_back(minh.top().second);
            minh.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
