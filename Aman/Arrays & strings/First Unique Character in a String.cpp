class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        int dat[26]={0};
        for(int i=0;i<n;i++)
            dat[s[i]-'a']++;
        for(int i=0;i<n;i++)
          if(dat[s[i]-'a']==1)
            return i;
        return -1;
        
    }
};
