class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i=0,j=0;
        for(i=0;i<a.size();i++)
            if(a[i])
                swap(a[i],a[j++]);
    }
};
