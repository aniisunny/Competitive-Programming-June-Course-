class Solution {
public:
    typedef pair<int,int>p;
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>mp;
        priority_queue<p,vector<p>,greater<p>>minh;
        for(int i=0;i<nums.size();i++)
          mp[nums[i]]++;
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
        return res;
    }
};
