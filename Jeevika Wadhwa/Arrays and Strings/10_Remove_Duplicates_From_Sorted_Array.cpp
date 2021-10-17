class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        if(!a.size())return 0;
        int i=0,j=0;
        while(j<a.size()){
            if(a[i]==a[j])j++;
            else
                a[++i]=a[j];                
        }
        return i+1;
    }
};
