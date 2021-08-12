class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int, int>m;
        for(int i = 0; i<mat.size(); i++){
            int soldiers = 0;
            for(int j = 0; j<mat[0].size(); j++){
                if(mat[i][j] == 1)
                    soldiers++;
                else
                    break;
            }
            m[i] = soldiers;
        }
        auto comp = [&](int n1, int n2){
            if(m[n1] == m[n2])
                return n1 > n2;
            else
                return m[n1] > m[n2];                
        };
        priority_queue<int, vector<int>, decltype(comp)>heap(comp);
        for(auto i : m)
            heap.push(i.first);
        vector<int>ans;
        while(k--){
            ans.push_back(heap.top());
            heap.pop();
        }
        return ans;
    }
};
