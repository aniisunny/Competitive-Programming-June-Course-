class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<a.size();i++){
            int complement = target - a[i];
            if(m.find(complement) != m.end()){
                v.push_back(i);
                v.push_back(m[complement]);
                break;
            }
            m[a[i]]=i;
        }
        return v;
    }
};
