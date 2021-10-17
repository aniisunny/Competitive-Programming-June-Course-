class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size(); //incase if k>size, then it it resets to a right position
        
        //reverse the whole array
        reverse(nums.begin(),nums.end());
        
        //reverse the 1st k numbers
         reverse(nums.begin(),nums.begin()+k); //numbs upto k-1 index are reversed
        
         //reverse rest size-k numbers
        reverse(nums.begin()+k,nums.end());  //numbs from k index to size-1 index are reversed
        
    }
};
