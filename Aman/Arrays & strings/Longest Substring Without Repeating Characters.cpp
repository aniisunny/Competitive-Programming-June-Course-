class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length(),l=0,r=0,mx=0;
        set<char>st;
        while(r<n)
        {
            if(st.count(s[r])==0)
            {
                st.insert(s[r]);
                mx=max(mx,r-l+1);
                r++;
            }
            else
            {
                st.erase(s[l]);
                l++;
            }
        }
        return mx;
    }
};
