class Solution {
public:
    
    
    
      string helper(string s)
    {
        int arr[26] = {0};
        for(int i = 0 ; i<s.length() ; i++)
        {
            arr[s[i]-'a']++;
        }
        s = "";
        for(int i = 0 ; i<26 ; i++)
        {
            int count = arr[i];
            while(count-- != 0)
            {
                string temp = "";
                temp = 'a' + i;
                s += temp;
            }
        }
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
           vector<vector<string>> res;
        if(strs.size()==0)
            return res ;
        
        
        unordered_map<string,vector<string>>dict;
        for(string s : strs){
            dict[helper(s)].push_back(s);
        }
        auto O=dict.begin();
        while(O!=dict.end()){
            res.push_back(O->second);
            O++;
        }
        return  res;
        
        
        
    }
};