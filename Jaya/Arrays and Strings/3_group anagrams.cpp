class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(auto a:strs){
            string t=a;
            sort(t.begin(),t.end());
            m[t].push_back(a);
        }
        vector<vector<string>> res;
        for(auto s:m){
            res.push_back(s.second);
        }
        return res;
    }
};
