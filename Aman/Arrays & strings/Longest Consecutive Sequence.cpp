class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size() < 2) return nums.size();
            unordered_map<int,int> m;
            int c = 0;
            for(int i=0;i<nums.size();i++)
            {
                    m[nums[i]]++;
            }
            for(int i=0;i<nums.size();i++)
            {
                    if(m.find(nums[i]-1)==m.end())
                    {
                            int j=nums[i];
                            int cur_c=0;
                            while(m.find(j)!=m.end())
                            {
                                    j++;
                                    cur_c++;
                            }
                            c=max(c,cur_c);
                    }
            }
        return c;
      }
};
