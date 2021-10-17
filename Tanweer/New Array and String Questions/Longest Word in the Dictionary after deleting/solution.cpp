class Solution 
{
    public:
    string findLongestWord(string str, vector<string>& dictionary) 
    {
        string res;
        for(auto s: dictionary)
        {
            int i = 0, d = 0;
            while(i < str.size() && d < s.size())
            {
                if (str[i] == s[d])
                {
                    d++;
                }
                i++;
            }
            
            if ((d == s.size() && d > res.size()) || (d == s.size() && d == res.size() && s < res))
            {
                res = s;
            }
        }
        
        return res;
    }
};