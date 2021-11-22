class Solution {
public:
    int beautySum(string s) {
          int ans=0;
    
    int m=0;
     map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
       mp.clear();
        for(int j=i;j<s.size();j++)
        {
            mp[s[j]]++;
            int    ma=INT_MIN,mi=INT_MAX;
            for(auto it=mp.begin();it!=mp.end();it++)
            {
               mi=min(mi,it->second);
                ma=max(ma,it->second);
            }
          
            ans+=ma-mi;
        }
    }
    
    return ans;
    
}
};
