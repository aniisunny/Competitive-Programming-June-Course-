class Solution {
public:
    int numRescueBoats(vector<int>& ppl, int lmt) {
        int n=ppl.size();
        int i=0,j=n-1,cnt=0;
        sort(ppl.begin(),ppl.end());
        while(i<j)
        {
            if(ppl[i]+ppl[j]<=lmt)
            {
                i++,j--,cnt++;
            }
            else
            {
                j--,cnt++;
            }
        }
        if(i==j)
           cnt++;
        return cnt;
    }
};
