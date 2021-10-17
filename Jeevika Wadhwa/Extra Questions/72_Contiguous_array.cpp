class Solution {
public:
    int findMaxLength(vector<int>& a) {
        map<int,int>m;
        m[0] = -1;
        int count = 0, len = 0;
        for(int i = 0; i<a.size(); i++){
            if(a[i] == 0)count--;
            else count++;
            if(m.find(count) != m.end()){
                len = max(len, i - m[count]);
            }
            else
            m[count] = i;
        }
        return len;
    }
};
