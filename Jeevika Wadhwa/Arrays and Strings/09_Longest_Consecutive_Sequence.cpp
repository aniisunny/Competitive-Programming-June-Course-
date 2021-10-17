class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        set<int>s(begin(a),end(a));
        int ans = 0;
        for(auto i:s)
        {
            if(s.count(i-1))continue;
            int j=1;
            while(s.count(i+j))j++;
            ans = max(ans, j);
        }
        return ans;
    }
};
