class Solution {
public:
   void rotate(vector<int>& nums, int k) {
       if(k>nums.size()){k=k%nums.size();}
         if( nums.size() <= k){
        return;
         }
    

    nums=rev(nums, 0, nums.size() - k-1);
    nums=rev(nums, nums.size() - k, nums.size() - 1);
    nums=rev(nums, 0, nums.size() - 1);
 
}

 vector<int> rev(vector<int> nums, int i, int j){     
    while(i < j){
       swap(nums[i],nums[j]) ;
        i++;
        j--;
    }
     return nums;
    }
};

