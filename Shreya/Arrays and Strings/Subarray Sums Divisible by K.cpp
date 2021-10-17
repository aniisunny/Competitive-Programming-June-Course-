class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans{0};
        if (nums.size()==1)
        {
            if (nums[0]%k==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        for (int i=0;i<nums.size();i++)
        {
            
            vector<int> arr;
            arr.push_back(nums[i]);
            if (arr[0]%k==0)
            {
                    ans+=1;
            }
            for(int j=i+1;j<nums.size();j++)
            {
                arr.push_back(nums[j]+arr[arr.size()-1]);
                if (arr[arr.size()-1]%k==0)
                {
                    ans+=1;
                }
                
            }
        }
        return ans;
        
    }
};