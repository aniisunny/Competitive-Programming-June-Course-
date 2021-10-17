class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int>st;
        int nd=nums.size()-k;
        
        for (int i=0;i<nums.size();i++) 
        {
            while (!st.empty() && nums[i]<st.back() && nd) 
            {
                st.pop_back();
                nd--;
            }
            st.push_back(nums[i]);
        }
        return vector<int>(st.begin(), st.begin()+k);
    }
};
