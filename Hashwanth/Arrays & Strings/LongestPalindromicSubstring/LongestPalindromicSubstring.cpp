class Solution {
public:
    int palindgen(string s, int left, int right)
    {
        while(left>=0 && right<s.length() && s[left]==s[right])
        {
            left--;
            right++;
            
        }
        return right-left-1; //as right, left goes one step forward.(we take -1 instead of +1)
    }
    string longestPalindrome(string s) {
        //initial boundaries if ans
        int start=0;
        int end=0;
        if(s=="" || s.length()==1)
            return s;
        int len=0;
        for(int i=0;i<s.length();i++)
        {
            //case 1 - odd len palind
            int len1=palindgen(s,i,i);
            //case 2 - eveb len palind
            int len2 = palindgen(s,i,i+1);
            
            len=max(len1,len2);
            //update
            if(len>end-start)
            {
                start=i-((len-1)/2);
                end=i+len/2;
            }
            
        }
        return s.substr(start,end-start+1);
    }
    
};
