class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>m;
        for(int i=0 ; i<s.length() ; i++)
            m[s[i]]++;

        string ans = "";
        for(int i=0 ; i<order.length() ; i++)
        {
            char ch = order[i];
            for(auto j : m)
            {
                if(m.find(ch) != m. end())
                {
                   while(m[ch]>0)
                   {
                       ans = ans + ch;
                       m[ch]--;
                   }
                }
            }
        }
         for(auto x:m){

                while(m[x.first]>0){
                    ans+=x.first;
                    m[x.first]--;
                }

        }
        return ans;


    }
};
