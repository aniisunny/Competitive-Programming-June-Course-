class Solution {
public:
    bool isvowel(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
    int maxVowels(string s, int k) {
        int ans = 0;
        for(int i=0;i<k;i++)
            if(isvowel(s[i]))
                ans++;
        int v=ans;
        for(int i=0;i<s.length()-k;i++){
            if(isvowel(s[i]))v--;
            if(isvowel(s[i+k]))v++;
            ans = max(ans, v);
        }
        return ans;
    }
};
