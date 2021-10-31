class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        for(int i=0 ; i<s.length() ; i++)
        {
            int index = s[i] - 'a';
            freq[index]++;
        }
        int index = -1;
        for(int i=0 ; i<s.length() ; i++)
        {
            char ch = s[i];
            int ans = freq[ch-'a'];
            if(ans==1)
            {
                index = i;
                return index;
            }
        }
        return -1;
    }
};
