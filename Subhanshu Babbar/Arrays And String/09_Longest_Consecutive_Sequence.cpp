class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max_len=0;
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++){
             umap[nums[i]]=nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            int target=nums[i];
            int len=1;
            if(umap.find(target-1)!=umap.end())
            else{
            while(umap.find(target+1)!=umap.end()){
                len++;
                target++;
            }
            }
            max_len=max(max_len,len);
        } 
        return max_len;
    }
};
 