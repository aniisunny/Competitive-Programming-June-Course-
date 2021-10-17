class NumArray {
public:
    vector<int> n;
    NumArray(vector<int>& nums) {
        for(auto x:nums)
            n.push_back(x);
         for(int i=1;i<n.size();i++)
        {
            n[i]=n[i]+n[i-1];
        }
    }
    
    int sumRange(int left, int right) {   //prefix sum approach DP
        //prefix sum 
       
        if(left==0)
            return n[right];
        return n[right]-n[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
