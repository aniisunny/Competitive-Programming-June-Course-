class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int s=0;
        for(auto x:nums)
        {
            if(mp.find(x)!=mp.end())
                continue;
            mp[x]=1;
        }
        for(auto x:nums)
        {
            int cs=0;
            if(mp.find(x-1)!=mp.end())
                continue;
            while(mp.find(x)!=mp.end())
            {
                x++;
                cs++;
            }
            if(cs>s)
                s=cs;
        }
        return s;
    }
};
