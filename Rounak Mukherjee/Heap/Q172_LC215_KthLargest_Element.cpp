class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
       priority_queue<int,vector<int>,greater<int>>maxh;
    for(int i=0;i<a.size();i++){
        maxh.push(a[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    return maxh.top();
    }
};
