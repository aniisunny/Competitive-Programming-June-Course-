class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
            if(umap[nums[i]]==2){
                return true;
            }
        }
        return false;
    }
};