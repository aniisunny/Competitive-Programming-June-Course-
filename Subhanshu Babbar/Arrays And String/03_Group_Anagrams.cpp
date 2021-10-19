class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>> umap;
        
        for(int i=0;i<strs.size();i++){
            
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            umap[temp].push_back(strs[i]);
        }
        
        for(auto i:umap){
            ans.push_back(i.second);
        }
        return ans;
    }
};