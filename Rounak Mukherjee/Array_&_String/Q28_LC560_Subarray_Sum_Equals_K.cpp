class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         
        unordered_map<int,int> umap;
        int count=0, sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)
                count++;
            if(umap.find(sum-k)!=umap.end())
                count+=umap[sum-k];
            umap[sum]++;
        }
        return count;
    }
        
    }
};

 //Bruteforce:
/*int count = 0;
        for (int start = 0; start < nums.length; start++) {
            for (int end = start + 1; end <= nums.length; end++) {
                int sum = 0;
                for (int i = start; i < end; i++)
                    sum += nums[i];
                if (sum == k)
                    count++;
            }
        }
  */      
