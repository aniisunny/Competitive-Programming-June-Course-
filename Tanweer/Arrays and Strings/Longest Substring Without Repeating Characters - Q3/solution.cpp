class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int maxl = 0 , j = 0 ;
        int arr[128] = {0};
        for(int i = 0 ; i<s.length() ; i++)
        {
            j = max(j, arr[s[i]]);
            maxl = max(maxl, i-j+1);
            arr[s[i]] = i+1;
        }
        return maxl;
    }
};