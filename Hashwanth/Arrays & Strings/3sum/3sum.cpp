class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> ans;
        if(nums.size()<3)
            return ans;
        set<vector<int>> sans;
            sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-2;i++)
       {  if(i!=0 && nums[i]==nums[i-1])
           continue;
        
           int l=i+1;
           int r=nums.size()-1;
           while(l<r)
           {
               vector<int> v;
               if(nums[i]+nums[l]+nums[r]==0)
               {
                   v.push_back(nums[i]);
                   v.push_back(nums[l]);
                   v.push_back(nums[r]);
                   l++;
                   r--;
                   sans.insert(v);
               }
               else if(nums[i]+nums[l]+nums[r]<0)
                   l++;
               else
                   r--;
           }
      
       }
         for(auto x:sans)
            ans.push_back(x);
        return ans;
    }
};
