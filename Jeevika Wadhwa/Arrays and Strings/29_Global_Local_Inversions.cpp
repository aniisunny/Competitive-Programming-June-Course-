class Solution {
public:
    bool isIdealPermutation(vector<int>& a) {
        for(int i=0;i<a.size();i++)
            if(abs(a[i]-i) > 1)
                return 0;
        return 1;
    }
};
