class Solution {
public:
    int myAtoi(string s) {
        int n=s.length(),sg=1,i=0;
        long res=0;
        while(i<n && s[i]==' ')
            i++;
        if(i>=n)
            return res;
        if(s[i]=='-')
        {
            sg=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
        while(i<n && s[i]>='0' && s[i]<='9')
        {
            res=res*10+(s[i]-'0');
            if(res*sg>INT_MAX || res*sg<INT_MIN)
                if(res*sg>INT_MAX)
                    return INT_MAX;
                else
                    return INT_MIN;
                i++;
        }
        return sg*res;
        
    }
};
