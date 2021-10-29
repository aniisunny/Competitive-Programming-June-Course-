class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count=0;
        k=k % nums.size();
        for(int i=0;i<nums.size();i++){
            if(i+k<nums.size()){
                count++;
               
            }
            else break;
        }
        reverse(nums.begin(),nums.begin()+count);
        reverse(nums.begin()+count,nums.end());
        reverse(nums.begin(),nums.end());
    }
};