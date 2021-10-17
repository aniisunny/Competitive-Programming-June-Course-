class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            string tp=strs[i];
            sort(tp.begin(),tp.end());
            mp[tp].push_back(strs[i]);
        }
        for(auto i : mp)
        {
            res.push_back(i.second);
        }
        return res;
    }
};
