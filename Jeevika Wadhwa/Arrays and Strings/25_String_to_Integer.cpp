class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0)return 0;
        int i=0;
        while(i<s.length() && s[i]==' ')i++;
        if(i==s.length())return 0;
        bool sign = 1;
        if(s[i]=='+')i++;
        else if(s[i]=='-')sign=0,i++;
        long n = 0;
        while(i<s.length() && s[i]>='0' && s[i]<='9'){
            n = n*10 + (s[i]-'0');
            i++;
            if(n>INT_MAX)
                return sign?INT_MAX:INT_MIN;
        }
        return sign?n:-1*n;
    }
};
