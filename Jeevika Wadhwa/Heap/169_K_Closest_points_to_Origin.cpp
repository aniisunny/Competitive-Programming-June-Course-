class Solution {
public:
    int dist(vector<int>n){
        return n[0]*n[0] + n[1]*n[1];
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto comp = [&](vector<int>n1, vector<int>n2){
            return dist(n1) > dist(n2);
        };
        
        priority_queue<vector<int>, vector<vector<int>>, decltype(comp)>heap(comp);
        
        for(auto i : points)
            heap.push(i);
        
        vector<vector<int>>ans;
        while(k--){
            ans.push_back(heap.top());
            heap.pop();
        }
        return ans;
    }
};
