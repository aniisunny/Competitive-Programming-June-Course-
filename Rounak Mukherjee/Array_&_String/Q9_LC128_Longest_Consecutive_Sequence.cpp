class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>hs;
        for(auto n:nums){
            hs.insert(n);
        }
        int longeststreak=0;
        for(int i=0;i<nums.size();i++){
            if(!hs.count(nums[i]-1)){
                int curnum=nums[i];
                int str=1;
                while(hs.count(curnum+1)){
                    curnum+=1;
                    str++;
                }
                longeststreak=max(longeststreak,str);
            }
        }
        return longeststreak;
    }
};
