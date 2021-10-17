class Solution {
public:
    string findLongestWord(string s, vector<string>& dct) {
        string res="";
        int n=dct.size();
        for(auto ds: dct)
        {
            if(ds.size()<res.length())
                continue;
            int i=0,j=0;
            while(i<s.length() && j<ds.length())
            {
                if(s[i]==ds[j])
                 j++;
                i++;
            }
            if((j==ds.size() && j>res.size()) || (j==ds.size() && j==res.size() && ds<res)  )
             res=ds;
        }
        return res;
    }
};
