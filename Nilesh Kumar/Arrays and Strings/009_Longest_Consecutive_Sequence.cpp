    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp.insert(nums[i]);
        }
        int lcs = 0;
        for(auto x: mp) {
            if(!mp.count(x-1)) {
               int count = 0;
                int num = x;
                while(mp.find(num)!=mp.end()) {
                    count++;
                    num++;
                }
                lcs = max(count, lcs);
            }
        }
        return lcs;
    }