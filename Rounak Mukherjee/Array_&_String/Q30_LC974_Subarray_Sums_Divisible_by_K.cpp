class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int result =0, sum =0, remainder =0;
        unordered_map<int, int>mp; // map to store  thefrtequency of remainders of sum 
        mp[0] =1;
        for(int i =0; i< nums.size(); i++){
            //add nums[i] to sum
            sum += nums[i];
            remainder = (sum% k);
            //if remainder of sum and k comes to be negative than add the remainder to k  and make remainder a positive value
            if( 0 > remainder){
                remainder += k;
            }
            //check if remiander is present in map or not:
            if(mp.find(remainder) != mp.end()){
                //add it to the result
                //this means we have frequency of remainder greater than one 
                result += mp[remainder];
            }
         mp[remainder]++;
           
            
        }
        return result;
    }
};
