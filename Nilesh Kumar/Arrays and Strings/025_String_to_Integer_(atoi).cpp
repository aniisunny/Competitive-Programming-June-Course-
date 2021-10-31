class Solution {
public:
    int myAtoi(string s) {
        long long ans =0;
        int i=0; 
        // skip white spaces
        while(s[i]==' ') i++;
        bool neg=false;
        if(s[i]=='-') {
            i++; neg=true;
        }
        else if(s[i]=='+') i++;
        int pos=10;
        while(s[i]>='0' && s[i]<='9') {
            ans = pos*ans+ (s[i]-'0');
            i++;
            if(ans>INT_MAX) break;
        }
        if(ans>INT_MAX && neg) return INT_MIN;
        else if(ans>INT_MAX && !neg) return INT_MAX;
        else if(neg) return -ans;
        return ans;
    }
};