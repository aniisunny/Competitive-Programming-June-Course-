class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                mp[s[j]]++;
                if(j-i+1>=3) {
            int max_freq = 0, min_freq = n;
                    for(auto x: mp) {
                        max_freq = max(max_freq, x.second);
                        min_freq = min(min_freq, x.second);
                    }
                    ans += (max_freq-min_freq);
                }
            }
            mp.clear();
        }
        return ans;
    }
};