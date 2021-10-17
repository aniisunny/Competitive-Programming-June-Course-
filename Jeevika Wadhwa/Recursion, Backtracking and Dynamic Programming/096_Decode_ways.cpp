class Solution {
public:
    int numDecodings(string s) {
        if(s.size() == 0 || s[0] == '0')return 0;
        int last = 1, secondlast = 1;
        for(int i = 1; i<s.size(); i++){
            if(s[i] == '0')last = 0;
            if(s[i-1] == '1' || s[i-1] == '2' && s[i] <= '6'){
                last = last + secondlast;
                secondlast = last - secondlast;
            }
            else
                secondlast = last;
        }
        return last;
    }
};
