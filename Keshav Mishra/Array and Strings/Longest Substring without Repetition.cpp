class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> con(255,-1);
        int left=0;
        int right=0;
        int n=s.size();
        int len=0;
        while(right<n){
            if(con[s[right]]!=-1){
                left=max(con[s[right]]+1,left);
            }
            con[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return      len;
        
    }
};