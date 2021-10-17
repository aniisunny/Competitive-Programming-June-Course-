#pragma GCC optimize("Ofast")
static const auto io_sync_off = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int firstUniqChar(string s) {
        int c[26]={0};
        for(int i=0;i<s.length();i++)
            c[s[i]-'a']++;
        for(int i=0;i<s.length();i++)
            if(c[s[i]-'a']==1)
                return i;
        return -1;
    }
};
