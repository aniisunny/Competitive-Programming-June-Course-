class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=INT_MIN;
        int n=s.size();
        if(n==0 or n==1){
            return n;
        }
        unordered_map<char,int> mp;
        int left=0,right=0,i=0;
        while(right<n){
            if(mp[s[i]]==0){
                mp[s[i]]++;
                right++;
                i++;
            }else{
                mp[s[left]]=0;
                left++;
            }
            ans=max(ans,right-left);
        }
        return ans;
    }
};