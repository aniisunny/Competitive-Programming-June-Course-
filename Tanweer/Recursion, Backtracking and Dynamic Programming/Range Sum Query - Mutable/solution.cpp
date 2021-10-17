class NumArray 
{
public:
    
    vector<int> memo;
    
    NumArray(vector<int> &nums) 
    {
        int summ = 0;
        for (int n : nums) 
        {
            summ += n;
            memo.push_back(summ);
        }
    }

    int sumRange(int i, int j) 
    {
        return i-1<0 ? memo[j] : memo[j] - memo[i-1];
    }
};