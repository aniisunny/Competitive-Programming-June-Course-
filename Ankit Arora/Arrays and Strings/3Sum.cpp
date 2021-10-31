class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	  sort(nums.begin(),nums.end());
      vector<vector<int>>ans;
        if(nums.size()<3)
        {
            return ans;
        }

      for(int i=0 ; i<=nums.size()-3 ; i++ )
      {
          if(i==0 || (i>0 && nums[i] != nums[i-1]))
          {
              int j = i+1 , k = nums.size() - 1;
              int sum = 0 - nums[i];
              while(j<k)
              {
                  if(nums[j]+nums[k]==sum)
                  {
                      ans.push_back({nums[i],nums[j],nums[k]});
                      while(j<k and nums[j] == nums[j+1]) j++;
                      while(j<k and nums[k] == nums[k-1]) k--;
                      j++;
                      k--;
                  }
                  else if(nums[j] + nums[k] < sum) j++;
                  else k--;
              }
          }
      }
        return ans;


    }
};
