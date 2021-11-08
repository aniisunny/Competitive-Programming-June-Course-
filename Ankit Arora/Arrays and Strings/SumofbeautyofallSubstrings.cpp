class Solution {
public:
    int beautySum(string s) {
       int n = s.size();
       int ans = 0;
       for(int i=0 ; i<n ; i++)
       {
           map<char,int>m;
           for(int j=i ; j<n ; j++)
           {
               m[s[j]]++;
               int maxf = INT_MIN , minf = INT_MAX;
               for(auto a : m)
               {
                   maxf = max(maxf,a.second);
                   minf = min(minf,a.second);
               }
               ans += (maxf-minf);
           }
       }
        return ans;
    }
};
