class Solution {
public:
    bool isvowel(char c)
    {
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    
    int maxVowels(string s, int k) {
        
        int n=s.length();
        int i=0,j=0,cnt=0,res=0;
        
        while(j<k)
        {
             if(isvowel(s[j]))
                cnt++;
             j++;
        }
        res=cnt;
        while(j<n)
        {
            if(isvowel(s[i]))
                cnt--;
            if(isvowel(s[j]))
                cnt++;
            res=max(cnt,res);
            i++;
            j++;
        }
        return res;
    }
};
