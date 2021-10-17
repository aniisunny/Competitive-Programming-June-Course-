class Solution {
public:
    string findLongestWord(string s, vector<string>& dict) {
        sort(begin(dict), end(dict));
        for(auto i : dict)cout<<i;
        string ans;
        for(auto d : dict){
            int i = 0, j = 0;
            while(i < s.size() && j < d.size())
                if(s[i] == d[j])i++, j++;
                else i++;
            
            if(j == d.size())
                if((d.size() > ans.size()) || (d.size() == ans.size() && d < ans))
                    ans = d;               
        }
        return ans;
    }
};
