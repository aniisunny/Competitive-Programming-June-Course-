class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>m;
        
        for(auto str:strs){
            string s=str;
            sort(s.begin(),s.end());
            m[s].push_back(str);            
        }
        for(auto v:m){
            ans.push_back(v.second);
        }
        return ans;
    }
};
