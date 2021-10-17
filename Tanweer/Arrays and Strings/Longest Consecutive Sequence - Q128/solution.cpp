class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> s(nums.begin(),nums.end()) , searched;
        if(s.size() == 0 || s.size() == 1)
        {
            return s.size();
        }
        int maxc = 0;
        for (int x : s)
        {
            if (searched.find(x) != searched.end())
            {
                continue;
            }
            searched.insert(x);
            int j = x - 1, k = x + 1;
            while (s.find(j) != s.end())
            {
                searched.insert(j--);
            }
            while (s.find(k) != s.end())
            {
                searched.insert(k++);
            }
            maxc = max(maxc, k - 1 - j);
        }
        return maxc;
    }
};