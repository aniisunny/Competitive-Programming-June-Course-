class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> umap;
        if(s.length() != t.length())return false;
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
            umap[t[i]]--;
        }
           
        for(int i=0;i<s.size();i++){
            
            if(umap[s[i]]!=0){
                return false;
            }
        }
        return true;
    }
};