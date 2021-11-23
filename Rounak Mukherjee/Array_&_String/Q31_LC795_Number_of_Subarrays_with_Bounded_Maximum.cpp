class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& A, int L, int R) {
          int res = 0, heads = 0, tails = 0;
        for (int val : A) {
            if (L <= val && val <= R) {
                
                heads+= tails + 1;
                tails = 0;
                res += heads;
            }
            else if (val < L) {
                
                tails++;
                res += heads;
            }
            else {
                
                heads = 0;
                tails = 0;
            }
        }
        return res;
    }
};
