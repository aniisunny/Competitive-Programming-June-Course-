class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        for (int i = 0; i < A.size(); i ++)
        {
            if ((A[i] == i + 1) || (A[i] == i - 1) || (A[i] == i))
                continue;
            else
                return false;
        }
        return true;
    }
};
