class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        int count = 0, dp = 0;
        for(int i = 2; i<a.size(); i++){
            if(a[i-1]*2 == a[i-2] + a[i])
                dp += ++count;
            else 
                count = 0;
        }
        return dp;
    }
};

/*
1 2 3 4 6 8 10
1 2 3
2 3 4
1 2 3 4
4 6 8
6 8 10
4 6 8 10
*/
