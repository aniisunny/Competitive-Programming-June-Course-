class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        for(int i = (digits.size()-1) ; i>=0 ; i--)
        {
            digits[i]+=1;
            if(digits[i]<10)
            {
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};