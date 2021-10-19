class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,j;
        int ans=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            j=i+1;
            int temp;
            temp= (nums[i]-1)*(nums[j]-1);
            ans=max(ans,temp);
        }
        return ans;
    }
};
