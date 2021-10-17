class Solution {
public:
    vector<int> plusOne(vector<int>& a) {        
        int n=a.size()-1;
        for(int i=n;i>=0;i--){
            a[i]++;
            if(a[i]!=10)
                return a;
            a[i]=0;
        }
        a.insert(a.begin(),1);
        return a;
    }
};
