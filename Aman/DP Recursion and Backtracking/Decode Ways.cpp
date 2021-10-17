class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        if(s[0]=='0')
         return 0;
        if(n==1)
         return 1;
        int cnt1=1,cnt2=1;
        for(int i=1;i<n;i++)
        {
            int cnt=0,v1=0,v2=0;
            v1=s[i]-'0';
            v2=(s[i-1]-'0')*10+v1;
            if(v1>0)
              cnt+=cnt2;
            if(v2>=10 && v2<=26)
              cnt+=cnt1;
            
            cnt1=cnt2;
            cnt2=cnt;
        }
        return cnt2;
    }
};
