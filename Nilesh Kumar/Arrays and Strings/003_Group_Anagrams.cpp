class Solution {
public:
    string sort_str(string s) {
        vector<int> alpha(26, 0);
        for(int i=0; i<s.length(); i++){
            alpha[s[i]-'a']++;
        }
        string ans;
        for(int i=0; i<26; i++) {
            for(int j=0; j<alpha[i]; j++) {
                ans += (char)('a'+ i);
            }
        }
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<strs.size(); i++) {
            string sorted_str = sort_str(strs[i]);
            mp[sorted_str].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto x: mp) {
            ans.push_back(x.second);
        }
        return ans;
    }
};