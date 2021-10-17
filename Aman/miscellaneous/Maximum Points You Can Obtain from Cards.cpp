class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int n=cp.size(),res=0,curr=0;
        for(int i=0;i<k;i++)
        {
            curr+=cp[i];
        }
        res=curr;
        for(int i=0;i<k;i++)
        {
            curr-=cp[k-i-1];
            curr+=cp[n-1-i];
            res=max(res,curr);
        }
        return res;
    }
};
