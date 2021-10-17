class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
       vector<int> v;
        int n=nums.size();
       int rem=n-k; //no.of elements to be elminated
        
        for(auto x:nums)
        {
            while(v.size() && x<v.back() && rem)
            {
                v.pop_back(); //elimnated
                rem--;       //associated by decremented of rem
            }
            v.push_back(x); //then push element
        }
        while(rem)      //check for extra element
        {
            v.pop_back();
            rem--;
        }
        return v;
        
    }
};
