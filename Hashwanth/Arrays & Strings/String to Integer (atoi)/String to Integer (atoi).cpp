class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0)
            return 0;
        int i;
        long num=0;
        bool sign=true;
        for(i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
                break;
        }
        if(i==s.length())
            return 0;
        else if(s[i]=='-')
        {
            sign=false;
            i++;
        }
        else if(s[i]=='+')
        {
           
            i++;
        }
        while(i<s.length() && isdigit(s[i]))
        { num=num*10+(s[i]-'0');
            if(num>INT_MAX)
                return sign?INT_MAX:INT_MIN;
           
            i++;
        }
        return sign?num:-1*num;
            
    }
};
