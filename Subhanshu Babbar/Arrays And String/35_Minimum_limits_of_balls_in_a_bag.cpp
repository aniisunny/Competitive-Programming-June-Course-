class Solution {
public:
    bool BallinBag(vector<int> nums, int mid,int maxOperations){

        for(int i=0;i<nums.size();i++){
           maxOperations-= (--nums[i]/mid);
            
        }
        return maxOperations>=0;
    }
    
    int minimumSize(vector<int>& nums, int maxOperations) {
        int start=1,end=INT_MIN,ans;
        for(int i=0;i<nums.size();i++){
            end=max(end,nums[i]);
        }
        
        while(start<=end){
            int mid=(start+end)/2;
            
            if(BallinBag(nums,mid,maxOperations)){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};